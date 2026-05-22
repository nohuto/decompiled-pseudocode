/*
 * XREFs of ??0HapticsDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18018C5FC
 * Callers:
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x18018A63C (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 * Callees:
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180037BD8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ?SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018EB60 (-SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018EC20 (-SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018ECE0 (-SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 *     ?SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018EDA0 (-SetIsReplayPauseIntervalSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=3
HapticsDevice *__fastcall HapticsDevice::HapticsDevice(
        HapticsDevice *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  BamoSimpleHapticsControllerPrincipal *v3; // rdi

  *(_QWORD *)this = &BamoSimpleHapticsControllerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v3 = (HapticsDevice *)((char *)this + 8);
  *((_QWORD *)this + 1) = &HapticsDevice::`vftable'{for `ISimpleHapticsControllerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((HapticsDevice *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = &HapticsDevice::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)v3 = &HapticsDevice::`vftable'{for `ISimpleHapticsControllerPrincipal'};
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  BamoSimpleHapticsControllerPrincipal::SetIsIntensitySupported(v3, 1);
  BamoSimpleHapticsControllerPrincipal::SetIsPlayCountSupported(v3, 1);
  BamoSimpleHapticsControllerPrincipal::SetIsReplayPauseIntervalSupported(v3, 1);
  BamoSimpleHapticsControllerPrincipal::SetIsPlayDurationSupported(v3, 1);
  return this;
}
