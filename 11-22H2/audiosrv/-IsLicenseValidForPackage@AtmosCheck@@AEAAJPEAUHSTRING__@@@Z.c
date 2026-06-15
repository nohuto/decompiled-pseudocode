/*
 * XREFs of ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x18015BE5C
 * Callers:
 *     ?PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV?$function@$$A6AJXZ@wistd@@PEAUEndpointSpecificSpatialTechInfo@1@@Z @ 0x18015CA5C (-PerformLicenseCheckHelperLegacy@AtmosCheck@@AEAAXPEAUHSTRING__@@HV-$function@$$A6AJXZ@wistd@@PE.c)
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180034A10 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::IsLicenseValidForPackage(AtmosCheck *this, HSTRING a2)
{
  HRESULT Instance; // ebx
  IUnknown *v4; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  PCWSTR StringRawBuffer; // rax
  AtmosCheck *v7; // rcx
  __int64 v8; // r9
  __int64 v10; // [rsp+60h] [rbp+20h] BYREF
  IUnknown *pProxy; // [rsp+70h] [rbp+30h] BYREF

  pProxy = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&pProxy);
  Instance = CoCreateInstance(
               &GUID_22f5b1df_7d7a_4d21_97f8_c21aefba859c,
               0LL,
               0x100017u,
               &GUID_90e2000c_b946_42fa_892f_94506f30ca4f,
               (LPVOID *)&pProxy);
  if ( Instance >= 0 )
  {
    Instance = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 0, 3u, 0LL, 0x40u);
    if ( Instance >= 0 )
    {
      v4 = pProxy;
      QueryInterface = pProxy->lpVtbl[2].QueryInterface;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
      StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
      Instance = ((__int64 (__fastcall *)(IUnknown *, PCWSTR, __int64, __int64, __int64 *))QueryInterface)(
                   v4,
                   StringRawBuffer,
                   3LL,
                   0x20000000LL,
                   &v10);
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&pProxy);
  AtmosCheck::Trace(v7, "Package license validation result", (unsigned int)Instance, v8);
  return (unsigned int)Instance;
}
