/*
 * XREFs of __report_rangecheckfailure @ 0x1404FE63C
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x14022C050 (AuthzBasepEvaluateAceCondition.c)
 *     KeWaitForMultipleObjects @ 0x140311430 (KeWaitForMultipleObjects.c)
 *     LdrpGetResourceFileName @ 0x1403A7404 (LdrpGetResourceFileName.c)
 *     strspn @ 0x1403DB800 (strspn.c)
 *     strtok_s @ 0x1403DFD00 (strtok_s.c)
 *     PopDetermineBucketFrequencies @ 0x140583BE0 (PopDetermineBucketFrequencies.c)
 *     LocalGetStringForControl @ 0x14069DF74 (LocalGetStringForControl.c)
 *     SepParseElamCertResources @ 0x1408100DC (SepParseElamCertResources.c)
 *     RtlCultureNameToLCID @ 0x140825AA0 (RtlCultureNameToLCID.c)
 *     WdipSemLoadNextEndEvent @ 0x140830A80 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x140831410 (WdipSemLoadNextScenario.c)
 *     _CmGetDeviceChildren @ 0x140839640 (_CmGetDeviceChildren.c)
 *     PiDevCfgSplitDriverConfigurationId @ 0x14096283C (PiDevCfgSplitDriverConfigurationId.c)
 *     RtlUnicodeStringToInt64 @ 0x1409BD820 (RtlUnicodeStringToInt64.c)
 *     WheapApplyPolicyChanges @ 0x140A09614 (WheapApplyPolicyChanges.c)
 *     KdInitSystem @ 0x140AB1040 (KdInitSystem.c)
 *     VfUtilPrintCheckinString @ 0x140AC2824 (VfUtilPrintCheckinString.c)
 *     HdlspPutWideString @ 0x140AEB30C (HdlspPutWideString.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140B36E28 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetupConfigurationTree @ 0x140B373AC (CmpSetupConfigurationTree.c)
 *     IopInitializeResourceMap @ 0x140B41140 (IopInitializeResourceMap.c)
 *     InitBootProcessor @ 0x140B52774 (InitBootProcessor.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140B5952C (CmSelectQualifiedInstallLanguage.c)
 *     KsepMatchInitBiosInfo @ 0x140B6162C (KsepMatchInitBiosInfo.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140B71660 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 */

void __noreturn _report_rangecheckfailure()
{
  KeBugCheckEx(0xF7u, 8uLL, _security_cookie, _security_cookie_complement, 0LL);
}
