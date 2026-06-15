/*
 * XREFs of ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x1800476EC
 * Callers:
 *     Create_SpatialAudioDeviceStateWriter @ 0x1800216E0 (Create_SpatialAudioDeviceStateWriter.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x1800217F0 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18002E2D4 (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ??1?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@QEAA@XZ @ 0x180144F80 (--1-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v2 + 568) + 16LL))(v2 + 568);
  }
  return result;
}
