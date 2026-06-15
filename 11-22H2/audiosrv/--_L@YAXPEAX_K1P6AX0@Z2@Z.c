/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18006709C
 * Callers:
 *     ??0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x1800251E0 (--0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV-$shared_ptr@$$CBUEffe.c)
 *     ??0EffectPackConfiguration@@QEAA@U_GUID@@@Z @ 0x180025550 (--0EffectPackConfiguration@@QEAA@U_GUID@@@Z.c)
 *     ??0CDeviceGraphObjectsStore@@QEAA@XZ @ 0x18002D4B4 (--0CDeviceGraphObjectsStore@@QEAA@XZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180036E40 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18004089C (--0CEndpointCharacteristics@@QEAA@XZ.c)
 *     ??0DynamicAudioEndpointManager@@QEAA@XZ @ 0x180058BAC (--0DynamicAudioEndpointManager@@QEAA@XZ.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x18005D3BC (--0AtmosCheck@@QEAA@XZ.c)
 *     ??0PhoneCallAudio@@IEAA@XZ @ 0x180063D94 (--0PhoneCallAudio@@IEAA@XZ.c)
 *     ??0AudioEffectsWatcher@@QEAA@XZ @ 0x1800D5500 (--0AudioEffectsWatcher@@QEAA@XZ.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D62EC (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180066BCC (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
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
