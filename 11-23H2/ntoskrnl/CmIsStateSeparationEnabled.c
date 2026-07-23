/*
 * XREFs of CmIsStateSeparationEnabled @ 0x140367918
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1407E20CC (KIsUnlockSettingEnabled.c)
 *     RtlIsStateSeparationEnabled @ 0x1407E22F0 (RtlIsStateSeparationEnabled.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140802B24 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiPnpRtlInit @ 0x1408114E4 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x140811694 (PiDrvDbInit.c)
 *     PiDrvDbSetupNodeHive @ 0x140811C48 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140811EA8 (PiDrvDbResolveNodeFilePaths.c)
 *     IopInitializeDumpPolicySettings @ 0x140861584 (IopInitializeDumpPolicySettings.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14087D264 (PiDevCfgEnumDeviceKeys.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140943CA0 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x14094EC80 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     PiCMEnumerateSubKeys @ 0x140969B9C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14097115C (PiDrvDbResolveKeyFilePaths.c)
 *     KIsSideloadingEnabled @ 0x140A0A6A0 (KIsSideloadingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
