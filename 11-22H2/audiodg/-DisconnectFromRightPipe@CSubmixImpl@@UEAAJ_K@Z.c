/*
 * XREFs of ?DisconnectFromRightPipe@CSubmixImpl@@UEAAJ_K@Z @ 0x140068040
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x1400071AC (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 *     ?GetNext@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAAEAV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU__POSITION@@@Z @ 0x1400099CC (-GetNext@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x1400099F4 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?GetNext@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAAEAPEAVCChildSubmixInstance@@AEAPEAU__POSITION@@@Z @ 0x140009E48 (-GetNext@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::DisconnectFromRightPipe(CSubmixImpl *this, __int64 a2)
{
  CPipeInstance *v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  CPipeInstance *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  __int64 v10; // rcx
  __int64 *Next; // rax
  int v12; // eax
  unsigned int v13; // ebp
  _QWORD *v14; // rax
  int v15; // eax
  unsigned int v16; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v18; // [rsp+40h] [rbp+8h] BYREF
  __int64 v19; // [rsp+50h] [rbp+18h] BYREF

  v4 = (CPipeInstance *)*((_QWORD *)this + 34);
  if ( v4 )
  {
    v5 = CPipeInstance::UnresolvePendingConnections(v4, a2);
    if ( v5 < 0 )
    {
      v6 = 1490LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  else
  {
    v8 = (CPipeInstance *)*((_QWORD *)this + 3);
    if ( v8 )
    {
      v5 = CPipeInstance::UnresolvePendingConnections(v8, a2);
      if ( v5 < 0 )
      {
        v6 = 1495LL;
        goto LABEL_4;
      }
    }
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v18 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v18 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::GetNext(
               v10,
               &v18);
      wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
        &v19,
        *Next);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 152LL))(v19, a2);
      v13 = v12;
      if ( v12 < 0 )
        break;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v19);
      if ( !v18 )
        goto LABEL_11;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E1,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v12);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v19);
    if ( this != (CSubmixImpl *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    return v13;
  }
  else
  {
LABEL_11:
    v18 = (_QWORD *)*((_QWORD *)this + 15);
    if ( v18 )
    {
      while ( 1 )
      {
        v14 = ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::GetNext(v10, &v18);
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)*v14 + 184LL))(*(_QWORD *)*v14, a2);
        v16 = v15;
        if ( v15 < 0 )
          break;
        if ( !v18 )
          goto LABEL_14;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E9,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v15);
      if ( v9 )
        LeaveCriticalSection(v9);
      return v16;
    }
    else
    {
LABEL_14:
      if ( v9 )
        LeaveCriticalSection(v9);
      return 0LL;
    }
  }
}
