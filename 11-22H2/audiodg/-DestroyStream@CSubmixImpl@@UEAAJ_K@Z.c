/*
 * XREFs of ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140067E40
 * Callers:
 *     ?DestroyStream@CStreamGroup@@UEAAJ_K@Z @ 0x140050E40 (-DestroyStream@CStreamGroup@@UEAAJ_K@Z.c)
 *     ?DestroyStream@CProcessSubmix@@UEAAJ_K@Z @ 0x1400692E0 (-DestroyStream@CProcessSubmix@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Find@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@PEAU3@@Z @ 0x14000234C (-Find@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$CEl.c)
 *     ?RemoveAt@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140002370 (-RemoveAt@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-.c)
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z @ 0x14000994C (-FindStream@CSubmixImpl@@IEAAPEAUIStreamInstanceInternal@@_K@Z.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x1400099F4 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140069A4C (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 *     ?Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z @ 0x140069E2C (-Remove@CAudioHistoryBufferManager@@QEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::DestroyStream(CSubmixImpl *this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  struct IStreamInstanceInternal *Stream; // rax
  __int64 v6; // rbx
  _QWORD *v8; // rdi
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  unsigned __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  int v13; // r8d
  int v14; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  __int64 v16; // [rsp+60h] [rbp+40h] BYREF
  __int64 v17; // [rsp+70h] [rbp+50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp+58h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  Stream = CSubmixImpl::FindStream(this, a2);
  wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
    &v17,
    (__int64)Stream);
  v6 = v17;
  if ( v17 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
      &lpCriticalSection,
      v6);
    v8 = ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::Find(
           (_QWORD *)this + 9,
           &lpCriticalSection);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&lpCriticalSection);
    ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::RemoveAt(
      (_QWORD *)this + 9,
      v8);
    if ( this != (CSubmixImpl *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v9 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
    v16 = 0LL;
    if ( v9 )
      (**v9)(v9, &GUID_764792a0_18e2_400b_9cb9_2dc44605fce0, &v16);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL))(v6) && v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
    if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6) )
    {
      lpCriticalSection = 0LL;
      if ( GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&lpCriticalSection) >= 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6);
        CAudioHistoryBufferManager::Remove(lpCriticalSection, v10);
      }
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v17);
    PublishDeviceGraphWnfState(v12, v11, v13, v14);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x887C001ALL);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v17);
    if ( v4 )
      LeaveCriticalSection(v4);
    return 2289827866LL;
  }
}
