/*
 * XREFs of ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140019370
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetNext@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAAEAPEAVCStreamInstance@@AEAPEAU__POSITION@@@Z @ 0x14001E584 (-GetNext@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ?GetNext@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAAEAPEAVCChildSubmixInstance@@AEAPEAU__POSITION@@@Z @ 0x14001E744 (-GetNext@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 *     ?ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z @ 0x140024ACC (-ConnectToRightSubmix@CStreamInstance@@QEAAJPEAUISubmixInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x140059318 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z @ 0x140062454 (-ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z.c)
 */

__int64 __fastcall CSubmixImpl::ConnectPipesToRightSubmix(
        CSubmixImpl *this,
        struct ISubmixInternal *a2,
        struct CPipeInstance *a3)
{
  const struct CPipeInstance **v3; // r14
  const struct CPipeInstance *v7; // rsi
  CPipeInstance *v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rax
  CStreamInstance *v13; // rbx
  __int64 v14; // r9
  int v15; // eax
  _QWORD **Next; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  char *v22; // [rsp+68h] [rbp+20h] BYREF

  v3 = (const struct CPipeInstance **)((char *)this + 272);
  if ( !*((_QWORD *)this + 34) )
    goto LABEL_2;
  v9 = CFormatConverterPipe::ConnectToRightSubmix(
         (CSubmixImpl *)((char *)this + 272),
         a2,
         a3,
         *((_DWORD *)this + 64) == 2);
  if ( v9 < 0 )
  {
    v17 = 831LL;
    goto LABEL_21;
  }
  v7 = *v3;
  if ( !*v3 )
LABEL_2:
    v7 = a3;
  v8 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( !v8 )
    goto LABEL_7;
  if ( v7 )
  {
    v9 = CPipeInstance::ConnectToRightPipe(v8, v7);
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(
             a2,
             *((_QWORD *)this + 3));
      if ( v9 >= 0 )
        goto LABEL_6;
      v17 = 849LL;
    }
    else
    {
      v17 = 846LL;
    }
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9,
      v19);
    return (unsigned int)v9;
  }
  v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, *((_QWORD *)this + 3));
  if ( v9 < 0 )
  {
    v17 = 854LL;
    goto LABEL_21;
  }
LABEL_6:
  *((_BYTE *)this + 312) = 1;
LABEL_7:
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v11 = *((_QWORD *)this + 9);
  v22 = (char *)this + 32;
  v21 = v11;
  if ( v11 )
  {
    while ( 1 )
    {
      v13 = *(CStreamInstance **)ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::GetNext(
                                   v10,
                                   &v21);
      (*(void (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
      v15 = CStreamInstance::ConnectToRightSubmix(v13, a2, v7, v14);
      v9 = v15;
      if ( v15 < 0 )
        break;
      if ( !v21 )
        goto LABEL_8;
    }
    v18 = 867LL;
    goto LABEL_30;
  }
LABEL_8:
  v21 = *((_QWORD *)this + 15);
  if ( v21 )
  {
    while ( 1 )
    {
      Next = (_QWORD **)ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::GetNext(
                          v10,
                          &v21);
      v15 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *, const struct CPipeInstance *))(*(_QWORD *)**Next + 144LL))(
              **Next,
              a2,
              v7);
      v9 = v15;
      if ( v15 < 0 )
        break;
      if ( !v21 )
        goto LABEL_9;
    }
    v18 = 875LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v15,
      v19);
    goto LABEL_10;
  }
LABEL_9:
  v9 = 0;
LABEL_10:
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v22);
  return (unsigned int)v9;
}
