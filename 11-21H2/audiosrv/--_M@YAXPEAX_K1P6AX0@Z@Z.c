/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18005EAE0
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180058604 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$2 @ 0x18006F4BC (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$2.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$5 @ 0x180071955 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$5.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$13 @ 0x1800719D5 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$13.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$18 @ 0x180071A0D (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$18.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$23 @ 0x180071A45 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$23.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$24 @ 0x180071A7D (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$24.c)
 *     _CEndpointCharacteristics::CEndpointCharacteristics_::_1_::dtor$25 @ 0x180071AB5 (_CEndpointCharacteristics--CEndpointCharacteristics_--_1_--dtor$25.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$1 @ 0x180071CC2 (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$1.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$6 @ 0x1800721A0 (_AtmosCheck--AtmosCheck_--_1_--dtor$6.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x180072840 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate___0 @ 0x1800729B0 (_dynamic_atexit_destructor_for__ApoDataTemplate___0.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800D2BC0 (--1AudioEffectsWatcher@@UEAA@XZ.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D3B14 (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$3 @ 0x1800D3E39 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$3.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800E25B0 (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x1801131D8 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x18012E8B0 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18014433C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x180152D28 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18005EB5C (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_xfg_dispatch_icall_fptr();
  }
}
