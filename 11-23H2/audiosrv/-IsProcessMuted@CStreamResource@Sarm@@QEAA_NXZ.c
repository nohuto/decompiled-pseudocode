/*
 * XREFs of ?IsProcessMuted@CStreamResource@Sarm@@QEAA_NXZ @ 0x18013918C
 * Callers:
 *     ?HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z @ 0x180134AC8 (-HandleAppVolumePolicyChange@CSpatialAudioResourceManager@Sarm@@AEAAXK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x180138E14 (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Sarm::CStreamResource::IsProcessMuted(Sarm::CStreamResource *this)
{
  __int64 v2; // r8
  const char *v3; // r9
  bool v4; // bl
  struct IAudioProcess *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v6);
  v4 = (int)Sarm::CStreamResource::GetProcess(this, &v6, v2, v3) >= 0
    && (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v6 + 120LL))(v6) == 1;
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v6);
  return v4;
}
