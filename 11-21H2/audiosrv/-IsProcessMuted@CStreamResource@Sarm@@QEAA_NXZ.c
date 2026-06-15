/*
 * XREFs of ?IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ @ 0x18012B8EC
 * Callers:
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180127058 (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x18012B580 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Sarm::CStreamResource::IsProcessMuted(Sarm::CStreamResource *this)
{
  bool v2; // di
  __int64 v3; // r8
  const char *v4; // r9
  struct IAudioProcess *v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v6 = 0LL;
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v6);
  if ( (int)Sarm::CStreamResource::GetProcess(this, &v6, v3, v4) >= 0 )
    v2 = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v6 + 120LL))(v6) == 1;
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v6);
  return v2;
}
