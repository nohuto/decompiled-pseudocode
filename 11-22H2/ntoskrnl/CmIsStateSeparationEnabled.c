/*
 * XREFs of CmIsStateSeparationEnabled @ 0x140367128
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x1407E237C (KIsUnlockSettingEnabled.c)
 *     RtlIsStateSeparationEnabled @ 0x1407E25A0 (RtlIsStateSeparationEnabled.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140804DD8 (PopBcdSetDefaultResumeObjectElements.c)
 *     PiPnpRtlInit @ 0x140813794 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x140813944 (PiDrvDbInit.c)
 *     PiDrvDbSetupNodeHive @ 0x140813EF8 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x140814158 (PiDrvDbResolveNodeFilePaths.c)
 *     IopInitializeDumpPolicySettings @ 0x140861414 (IopInitializeDumpPolicySettings.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14087D4F4 (PiDevCfgEnumDeviceKeys.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140943B50 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x14094EB30 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     PiCMEnumerateSubKeys @ 0x140969A4C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14097100C (PiDrvDbResolveKeyFilePaths.c)
 *     KIsSideloadingEnabled @ 0x140A0A4A0 (KIsSideloadingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
