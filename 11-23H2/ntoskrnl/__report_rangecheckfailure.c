/*
 * XREFs of __report_rangecheckfailure @ 0x1404FE0EC
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14022BF40 (AuthzBasepEvaluateAceCondition.c)
 *     KeWaitForMultipleObjects @ 0x1403111A0 (KeWaitForMultipleObjects.c)
 *     LdrpGetResourceFileName @ 0x1403A7224 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1403DB620 (strspn.c)
 *     strtok_s @ 0x1403DFB20 (strtok_s.c)
 *     PopDetermineBucketFrequencies @ 0x1405836F0 (PopDetermineBucketFrequencies.c)
 *     LocalGetStringForControl @ 0x14069DF74 (LocalGetStringForControl.c)
 *     SepParseElamCertResources @ 0x14080FE0C (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x1408257A0 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x140830780 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140831110 (WdipSemLoadNextScenario.c)
 *     _CmGetDeviceChildren @ 0x140839340 (_CmGetDeviceChildren.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14096263C (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x1409BD620 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x140A09364 (WheapApplyPolicyChanges.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140AC2834 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x140AEB30C (HdlspPutWideString.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B36E28 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140B373AC (CmpSetupConfigurationTree.c)
 *     IopInitializeResourceMap @ 0x140B41140 (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5952C (CmSelectQualifiedInstallLanguage.c)
 *     KsepMatchInitBiosInfo @ 0x140B6162C (KsepMatchInitBiosInfo.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B71660 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
