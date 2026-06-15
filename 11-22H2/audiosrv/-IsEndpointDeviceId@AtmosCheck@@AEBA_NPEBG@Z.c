/*
 * XREFs of ?IsEndpointDeviceId@AtmosCheck@@AEBA_NPEBG@Z @ 0x18015BDFC
 * Callers:
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18015B3BC (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall AtmosCheck::IsEndpointDeviceId(AtmosCheck *this, const unsigned __int16 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  bool v4; // bl
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 *)*((_QWORD *)this + 28);
  v3 = *v2;
  v6 = 0LL;
  v4 = (*(int (__fastcall **)(__int64 *, const unsigned __int16 *, __int64 *))(v3 + 40))(v2, a2, &v6) >= 0;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v6);
  return v4;
}
