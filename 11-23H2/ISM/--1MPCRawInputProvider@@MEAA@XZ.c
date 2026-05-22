/*
 * XREFs of ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800CEC44
 * Callers:
 *     ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x1800CEF30 (--_GMPCRawInputProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015974 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180031890 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180041F08 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180055588 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z @ 0x1800A7684 (-UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800CE3D0 (--$_Destroy_range@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV-$share.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CF41C (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800D07E8 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ??1MPCHeadMovementDetector@@QEAA@XZ @ 0x1800D0D6C (--1MPCHeadMovementDetector@@QEAA@XZ.c)
 */

void __fastcall MPCRawInputProvider::~MPCRawInputProvider(MPCRawInputProvider *this)
{
  RTL_SRWLOCK *Instance; // rax
  SpectrumListener *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbp
  void *v9; // rcx
  __int64 v10; // rcx
  void *v11; // rdx
  wil::details *v12; // rcx
  void *v13; // rdi
  __int64 v14; // rcx
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &MPCRawInputProvider::`vftable';
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  MPC3DStateHelper::UnregisterFor3DCompositorRunningChanged(Instance, *((_DWORD *)this + 21));
  v3 = (SpectrumListener *)*((_QWORD *)this + 6);
  if ( v3 )
    SpectrumListener::Unregister(v3);
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((char *)this + 48);
  if ( *((_QWORD *)this + 9) )
  {
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 280LL))(v4);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          72LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
          (const char *)(unsigned int)v5);
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 240LL))(*((_QWORD *)this + 8));
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v6,
      v15);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 8);
  if ( *((_QWORD *)this + 2) )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 3);
    v8 = (_QWORD *)*((_QWORD *)this + 4);
    while ( v7 != v8 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 56LL))(*((_QWORD *)this + 2), *v7);
      v7 += 2;
    }
  }
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 2);
  v9 = (void *)*((_QWORD *)this + 23);
  if ( v9 )
  {
    std::_Deallocate<16,0>(v9, (__int64)(*((_QWORD *)this + 25) - (_QWORD)v9) >> 6 << 6);
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
  }
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 160);
  v10 = *((_QWORD *)this + 17);
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(v10, *((_QWORD *)this + 18));
    std::_Deallocate<16,0>(
      *((void **)this + 17),
      (*((_QWORD *)this + 19) - *((_QWORD *)this + 17)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v12 = (wil::details *)*((_QWORD *)this + 9);
  if ( v12 )
    wil::details::CloseHandle(v12, v11);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 8);
  v13 = (void *)*((_QWORD *)this + 7);
  if ( v13 )
  {
    MPCHeadMovementDetector::~MPCHeadMovementDetector(*((MPCHeadMovementDetector **)this + 7));
    operator delete(v13);
  }
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((char *)this + 48);
  v14 = *((_QWORD *)this + 3);
  if ( v14 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(v14, *((_QWORD *)this + 4));
    std::_Deallocate<16,0>(
      *((void **)this + 3),
      (*((_QWORD *)this + 5) - *((_QWORD *)this + 3)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
