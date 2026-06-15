/*
 * XREFs of ?CreateSpatialAudioLicenseServer@@YAJPEAPEAUISpatialAudioLicenseServer@@@Z @ 0x18015ACA8
 * Callers:
 *     ?GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicenseserver_0000_0000_0001@@@Z @ 0x18015B7A0 (-GetLicenseStatusForEndpointId@AtmosCheck@@AEAAJPEBG0PEAU__MIDL___MIDL_itf_spatialaudiolicensese.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateSpatialAudioLicenseServer(struct ISpatialAudioLicenseServer **a1)
{
  HRESULT v2; // ebx
  LPVOID v3; // rcx
  struct ISpatialAudioLicenseServer *v4; // rax
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  ppv = 0LL;
  v2 = CoCreateInstance(
         &CLSID_SpatialAudioLicenseServerInteractiveUser,
         0LL,
         4u,
         &GUID_cdc99663_5f31_45ee_89fa_a4a0d64f6d1c,
         &ppv);
  if ( v2 == -2147024891 )
  {
    v3 = ppv;
    ppv = 0LL;
    if ( v3 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v3 + 16LL))(v3);
    v2 = CoCreateInstance(
           &CLSID_SpatialAudioLicenseServerAsActivator,
           0LL,
           4u,
           &GUID_cdc99663_5f31_45ee_89fa_a4a0d64f6d1c,
           &ppv);
  }
  if ( v2 >= 0 )
  {
    v4 = (struct ISpatialAudioLicenseServer *)ppv;
    ppv = 0LL;
    *a1 = v4;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&ppv);
  return (unsigned int)v2;
}
