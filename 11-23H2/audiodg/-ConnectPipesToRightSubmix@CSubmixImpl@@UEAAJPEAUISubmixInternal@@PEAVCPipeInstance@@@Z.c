/*
 * XREFs of ?ConnectPipesToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@@Z @ 0x140007C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAAEAV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU__POSITION@@@Z @ 0x1400099CC (-GetNext@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x1400099F4 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?GetNext@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAAEAPEAVCChildSubmixInstance@@AEAPEAU__POSITION@@@Z @ 0x140009E48 (-GetNext@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z @ 0x14005C174 (-ConnectToRightPipe@CPipeInstance@@QEAAJPEBV1@@Z.c)
 *     ?ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z @ 0x140067328 (-ConnectToRightSubmix@CFormatConverterPipe@@QEAAJPEAUISubmixInternal@@PEAVCPipeInstance@@_N@Z.c)
 */

__int64 __fastcall CSubmixImpl::ConnectPipesToRightSubmix(
        CSubmixImpl *this,
        struct ISubmixInternal *a2,
        struct CPipeInstance *a3)
{
  const struct CPipeInstance **v3; // r14
  const struct CPipeInstance *v7; // r14
  CPipeInstance *v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  _QWORD *Next; // rax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, struct ISubmixInternal *, const struct CPipeInstance *, __int64); // rdi
  __int64 v15; // rax
  int v16; // eax
  _QWORD **v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+20h] BYREF

  v3 = (const struct CPipeInstance **)((char *)this + 272);
  if ( *((_QWORD *)this + 34) )
  {
    v9 = CFormatConverterPipe::ConnectToRightSubmix(
           (CSubmixImpl *)((char *)this + 272),
           a2,
           a3,
           *((_DWORD *)this + 64) == 2);
    if ( v9 < 0 )
    {
      v19 = 653LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v9,
        v20);
      return (unsigned int)v9;
    }
  }
  v7 = *v3;
  if ( !v7 )
    v7 = a3;
  v8 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( v8 )
  {
    if ( v7 )
    {
      v9 = CPipeInstance::ConnectToRightPipe(v8, v7);
      if ( v9 < 0 )
      {
        v19 = 668LL;
        goto LABEL_22;
      }
      v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 40LL))(
             a2,
             *((_QWORD *)this + 3));
      if ( v9 < 0 )
      {
        v19 = 671LL;
        goto LABEL_22;
      }
    }
    else
    {
      v9 = (*(__int64 (__fastcall **)(struct ISubmixInternal *, _QWORD))(*(_QWORD *)a2 + 24LL))(
             a2,
             *((_QWORD *)this + 3));
      if ( v9 < 0 )
      {
        v19 = 676LL;
        goto LABEL_22;
      }
    }
    *((_BYTE *)this + 312) = 1;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v22 = *((_QWORD *)this + 9);
  if ( v22 )
  {
    while ( 1 )
    {
      Next = (_QWORD *)ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::GetNext(
                         v10,
                         &v22);
      wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
        &v23,
        *Next);
      v13 = v23;
      v14 = *(__int64 (__fastcall **)(__int64, struct ISubmixInternal *, const struct CPipeInstance *, __int64))(*(_QWORD *)v23 + 56LL);
      v15 = (*(__int64 (__fastcall **)(CSubmixImpl *))(*(_QWORD *)this + 64LL))(this);
      v16 = v14(v13, a2, v7, v15);
      v9 = v16;
      if ( v16 < 0 )
        break;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v23);
      if ( !v22 )
        goto LABEL_9;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B1,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v16,
      v20);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v23);
    goto LABEL_30;
  }
LABEL_9:
  v22 = *((_QWORD *)this + 15);
  if ( v22 )
  {
    while ( 1 )
    {
      v17 = (_QWORD **)ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::GetNext(
                         v10,
                         &v22);
      v18 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *, const struct CPipeInstance *))(*(_QWORD *)**v17 + 144LL))(
              **v17,
              a2,
              v7);
      v9 = v18;
      if ( v18 < 0 )
        break;
      if ( !v22 )
        goto LABEL_10;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B9,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v18,
      v20);
LABEL_30:
    if ( this != (CSubmixImpl *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    return (unsigned int)v9;
  }
LABEL_10:
  if ( this != (CSubmixImpl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return 0LL;
}
