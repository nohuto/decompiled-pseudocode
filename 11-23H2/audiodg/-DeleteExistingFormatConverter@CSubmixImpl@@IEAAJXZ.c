/*
 * XREFs of ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140007160
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140007820 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x140006F0C (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ?UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z @ 0x1400071AC (-UnresolvePendingConnections@CPipeInstance@@QEAAJ_K@Z.c)
 *     ?GetNext@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAAEAV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU__POSITION@@@Z @ 0x1400099CC (-GetNext@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x1400099F4 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?GetNext@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAAEAPEAVCChildSubmixInstance@@AEAPEAU__POSITION@@@Z @ 0x140009E48 (-GetNext@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 *     ?GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@Z @ 0x14000EAA4 (-GetMixSplitConnection_Internal@CPipeInstance@@AEBAPEBVCConnectionInstance@@W4MSC_PREFERENCE@1@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::DeleteExistingFormatConverter(CSubmixImpl *this)
{
  __int64 v2; // rcx
  unsigned __int64 v4; // rbp
  __int64 v5; // rcx
  _QWORD **Next; // rax
  int v7; // eax
  unsigned int v8; // esi
  _QWORD *v9; // rax
  int v10; // eax
  CPipeInstance *v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  char *v18; // [rsp+58h] [rbp+20h]

  if ( !g_UseNewStreamManagementCodePath || (v2 = *((_QWORD *)this + 34)) == 0 )
  {
LABEL_3:
    CFormatConverterPipe::Reset((CPipeInstance **)this + 34);
    return 0LL;
  }
  v4 = *(_QWORD *)(CPipeInstance::GetMixSplitConnection_Internal(v2, 0LL) + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v18 = (char *)this + 32;
  v16 = *((_QWORD *)this + 15);
  if ( v16 )
  {
    while ( 1 )
    {
      Next = (_QWORD **)ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::GetNext(
                          v5,
                          &v16);
      v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)**Next + 184LL))(**Next, v4);
      v8 = v7;
      if ( v7 < 0 )
        break;
      if ( !v16 )
        goto LABEL_7;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CD,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v7,
      v14);
    goto LABEL_17;
  }
LABEL_7:
  v16 = *((_QWORD *)this + 9);
  if ( v16 )
  {
    while ( 1 )
    {
      v9 = (_QWORD *)ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::GetNext(
                       v5,
                       &v16);
      wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
        &v17,
        *v9);
      v10 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v17 + 152LL))(v17, v4);
      v8 = v10;
      if ( v10 < 0 )
        break;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v17);
      if ( !v16 )
        goto LABEL_10;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D5,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v10,
      v14);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v17);
LABEL_17:
    if ( this != (CSubmixImpl *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    return v8;
  }
LABEL_10:
  if ( this != (CSubmixImpl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v11 = (CPipeInstance *)*((_QWORD *)this + 3);
  if ( !v11 )
    goto LABEL_3;
  v12 = CPipeInstance::UnresolvePendingConnections(v11, v4);
  v13 = v12;
  if ( v12 >= 0 )
    goto LABEL_3;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2DC,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)v12,
    v14);
  return v13;
}
