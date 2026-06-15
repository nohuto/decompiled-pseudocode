/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18005F038
 * Callers:
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x180047C48 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x18004AB50 (--0DynamicAudioEndpointManager@@QEAA@XZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x18004B664 (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x180055B34 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180058604 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180059400 (--0AtmosCheck@@QEAA@XZ.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800D28F0 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D3B14 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18005EB5C (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    _guard_xfg_dispatch_icall_fptr();
    a1 += a2;
  }
}
