/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180066B50
 * Callers:
 *     _dynamic_initializer_for__AECLoopbackSelectionModeStringValues__ @ 0x180001430 (_dynamic_initializer_for__AECLoopbackSelectionModeStringValues__.c)
 *     __dynamic_initializer_for__AECLoopbackSelectionModeStringValues___::_1_::dtor$4 @ 0x180001516 (__dynamic_initializer_for__AECLoopbackSelectionModeStringValues___--_1_--dtor$4.c)
 *     ??1EffectPack@@QEAA@XZ @ 0x180004E5C (--1EffectPack@@QEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x18000557C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 *     ??1EffectPackConfiguration@@QEAA@XZ @ 0x180005E48 (--1EffectPackConfiguration@@QEAA@XZ.c)
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180036E40 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     _EffectPack::EffectPack_::_1_::dtor$4 @ 0x18007A180 (_EffectPack--EffectPack_--_1_--dtor$4.c)
 *     _EffectPack::EffectPack_::_1_::dtor$9 @ 0x18007A1B1 (_EffectPack--EffectPack_--_1_--dtor$9.c)
 *     _EffectPack::EffectPack_::_1_::dtor$14 @ 0x18007A1E9 (_EffectPack--EffectPack_--_1_--dtor$14.c)
 *     _EffectPack::EffectPack_::_1_::dtor$15 @ 0x18007A221 (_EffectPack--EffectPack_--_1_--dtor$15.c)
 *     _EffectPack::EffectPack_::_1_::dtor$17 @ 0x18007A272 (_EffectPack--EffectPack_--_1_--dtor$17.c)
 *     _EffectPack::EffectPack_::_1_::dtor$18 @ 0x18007A2AA (_EffectPack--EffectPack_--_1_--dtor$18.c)
 *     _EffectPackConfiguration::EffectPackConfiguration_::_1_::dtor$0 @ 0x18007A2E2 (_EffectPackConfiguration--EffectPackConfiguration_--_1_--dtor$0.c)
 *     _AtmosCheck::RefreshSpatialAudioLicenseModelState_::_1_::dtor$1 @ 0x18007B500 (_AtmosCheck--RefreshSpatialAudioLicenseModelState_--_1_--dtor$1.c)
 *     _DynamicAudioEndpointManager::DynamicAudioEndpointManager_::_1_::dtor$2 @ 0x18007CE45 (_DynamicAudioEndpointManager--DynamicAudioEndpointManager_--_1_--dtor$2.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$6 @ 0x18007D539 (_AtmosCheck--AtmosCheck_--_1_--dtor$6.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate__ @ 0x18007DF50 (_dynamic_atexit_destructor_for__ApoDataTemplate__.c)
 *     _dynamic_atexit_destructor_for__ApoDataTemplate___0 @ 0x18007DFC0 (_dynamic_atexit_destructor_for__ApoDataTemplate___0.c)
 *     ??1AudioEffectsWatcher@@UEAA@XZ @ 0x1800D57CC (--1AudioEffectsWatcher@@UEAA@XZ.c)
 *     ?RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800D62EC (-RebuildAndPublishFullEffectsListFromApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     _AudioEffectsWatcher::RebuildAndPublishFullEffectsListFromApos_::_1_::dtor$3 @ 0x1800D6615 (_AudioEffectsWatcher--RebuildAndPublishFullEffectsListFromApos_--_1_--dtor$3.c)
 *     ??1DynamicAudioEndpointManager@@UEAA@XZ @ 0x1800E9E00 (--1DynamicAudioEndpointManager@@UEAA@XZ.c)
 *     ??1CDeviceGraphObjectsStore@@UEAA@XZ @ 0x18010EFE8 (--1CDeviceGraphObjectsStore@@UEAA@XZ.c)
 *     ??1PhoneCallAudio@@MEAA@XZ @ 0x18013BF14 (--1PhoneCallAudio@@MEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x18015A0D8 (--1AtmosCheck@@UEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x180066BCC (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
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
