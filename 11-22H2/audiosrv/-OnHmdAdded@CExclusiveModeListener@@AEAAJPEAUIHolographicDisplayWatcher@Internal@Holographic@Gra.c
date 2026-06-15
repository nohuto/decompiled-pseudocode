/*
 * XREFs of ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18013A7D0
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x18013B0AC (-RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x180139C54 (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@UHmdInfo@@U-$less@U_GUID@@@std@@V-$allocator@U-$pai.c)
 *     ??4?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIHolographicDisplay@Holographic@Graphics@Windows@@@Z @ 0x180139F6C (--4-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?LogOnHmdAdded@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@H@Z @ 0x18013A2C8 (-LogOnHmdAdded@CSpatialAudioResourceManagerTraceLogger@@QEAAXAEBU_GUID@@H@Z.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18013BAC0 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CExclusiveModeListener::OnHmdAdded(
        CExclusiveModeListener *this,
        struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *a2,
        struct Windows::Graphics::Holographic::IHolographicDisplay *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // rdx
  int v10; // eax
  __int64 v11; // r9
  __int64 v12; // rbx
  CSpatialAudioResourceManagerTraceLogger *v13; // rcx
  unsigned __int8 v14; // al
  int updated; // eax
  __int64 v16; // [rsp+20h] [rbp-78h] BYREF
  __int128 v17; // [rsp+28h] [rbp-70h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-58h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+48h] [rbp-50h]
  _BYTE v21[16]; // [rsp+50h] [rbp-48h] BYREF
  struct _GUID v22; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 80);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 2);
  v20 = v5;
  v17 = 0LL;
  v18 = 0LL;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::operator=(
    (__int64 *)&v17,
    (__int64)a3);
  v16 = 0LL;
  v6 = v17;
  v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v17)(
         v17,
         &GUID_2396ae05_f3f5_49e9_954b_d178b5677fd7,
         &v16);
  if ( v7 < 0 )
  {
    v8 = 191LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)v7);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    if ( v5 )
      LeaveCriticalSection(v5);
    return (unsigned int)v7;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, struct _GUID *))(*(_QWORD *)v16 + 48LL))(v16, &v22);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = 194LL;
    goto LABEL_3;
  }
  try
  {
    v12 = *(_QWORD *)std::map<_GUID,HmdInfo>::_Try_emplace<_GUID const &,>(
                       (__int64 *)this + 20,
                       (__int64)v21,
                       &v22,
                       v11);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::operator=(
      (__int64 *)(v12 + 48),
      v6);
    *(_QWORD *)(v12 + 56) = *((_QWORD *)&v17 + 1);
    v14 = v18;
    *(_BYTE *)(v12 + 64) = v18;
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)0x8007000ELL);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 2147942414LL;
  }
  CSpatialAudioResourceManagerTraceLogger::LogOnHmdAdded(v13, &v22, v14);
  *(struct _GUID *)((char *)this + 136) = v22;
  updated = CExclusiveModeListener::UpdateExclusiveViewingMode(this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD0,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)updated);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v16);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
  if ( v5 )
    LeaveCriticalSection(v5);
  return 0LL;
}
