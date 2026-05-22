/*
 * XREFs of ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800B5DD8
 * Callers:
 *     ??_GMPCRawInputProvider@@MEAAPEAXI@Z @ 0x1800B6100 (--_GMPCRawInputProvider@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18002C220 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180030800 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18004957C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z @ 0x180090F44 (-UnregisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXI@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800B5548 (--$_Destroy_range@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV-$share.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B65FC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800B7988 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ??1MPCHeadMovementDetector@@QEAA@XZ @ 0x1800B7EFC (--1MPCHeadMovementDetector@@QEAA@XZ.c)
 */

void __fastcall MPCRawInputProvider::~MPCRawInputProvider(MPCRawInputProvider *this)
{
  RTL_SRWLOCK *Instance; // rax
  SpectrumListener *v3; // rcx
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  _QWORD *v7; // rsi
  _QWORD *v8; // rbp
  void *v9; // rcx
  __int64 v10; // rcx
  void *v11; // rdx
  void *v12; // rsi
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-18h]
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
      v14);
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
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 2);
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
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (wil::details **)this + 9,
    v11);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 8);
  v12 = (void *)*((_QWORD *)this + 7);
  if ( v12 )
  {
    MPCHeadMovementDetector::~MPCHeadMovementDetector(*((MPCHeadMovementDetector **)this + 7));
    operator delete(v12);
  }
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease((char *)this + 48);
  v13 = *((_QWORD *)this + 3);
  if ( v13 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(v13, *((_QWORD *)this + 4));
    std::_Deallocate<16,0>(
      *((void **)this + 3),
      (*((_QWORD *)this + 5) - *((_QWORD *)this + 3)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 2);
  *((_DWORD *)this + 3) = -1073741823;
}
