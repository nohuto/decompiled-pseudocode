/*
 * XREFs of CmIsStateSeparationEnabled @ 0x140367778
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1407E1DFC (KIsUnlockSettingEnabled.c)
 *     RtlIsStateSeparationEnabled @ 0x1407E2020 (RtlIsStateSeparationEnabled.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140802854 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiPnpRtlInit @ 0x140811214 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x1408113C4 (PiDrvDbInit.c)
 *     PiDrvDbSetupNodeHive @ 0x140811978 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140811BD8 (PiDrvDbResolveNodeFilePaths.c)
 *     IopInitializeDumpPolicySettings @ 0x140861344 (IopInitializeDumpPolicySettings.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14087D024 (PiDevCfgEnumDeviceKeys.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140943AA0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x14094EA80 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     PiCMEnumerateSubKeys @ 0x14096999C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x140970F5C (PiDrvDbResolveKeyFilePaths.c)
 *     KIsSideloadingEnabled @ 0x140A0A3F0 (KIsSideloadingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
