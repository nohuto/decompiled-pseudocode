/*
 * XREFs of RtlFreeUnicodeString @ 0x18000EB80
 * Callers:
 *     LdrResSearchResource @ 0x180005220 (LdrResSearchResource.c)
 *     LdrpCodeAuthzInitialize @ 0x180009DAC (LdrpCodeAuthzInitialize.c)
 *     RtlpGetRegistryHandle @ 0x18000AD18 (RtlpGetRegistryHandle.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18000B7E8 (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BE08 (RtlpGetTokenNamedObjectPath.c)
 *     RtlIsApiSetImplemented @ 0x18000C490 (RtlIsApiSetImplemented.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000C778 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlEqualDomainName @ 0x18000D520 (RtlEqualDomainName.c)
 *     RtlOpenCurrentUser @ 0x18000EAA0 (RtlOpenCurrentUser.c)
 *     RtlCreateServiceSid @ 0x1800102D0 (RtlCreateServiceSid.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180018AA0 (LdrpSnapKernelBaseExtensions.c)
 *     RtlDosSearchPath_Ustr @ 0x18001A5B0 (RtlDosSearchPath_Ustr.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18001AD30 (RtlFormatCurrentUserKeyPath.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B790 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001D1D8 (sxsisol_SearchActCtxForDllName.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18002AEB0 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpLogDllStateEx2 @ 0x18003207C (LdrpLogDllStateEx2.c)
 *     EtwpFreeLoggerContext @ 0x18005DA64 (EtwpFreeLoggerContext.c)
 *     EtwpInitLoggerContext @ 0x18005EF28 (EtwpInitLoggerContext.c)
 *     EtwpCreateFile @ 0x180060DEC (EtwpCreateFile.c)
 *     EtwpFlushUmLogger @ 0x180062150 (EtwpFlushUmLogger.c)
 *     EtwpGenerateFileName @ 0x180062318 (EtwpGenerateFileName.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180074C34 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     LdrpQuerySxSMUIFile @ 0x180075D14 (LdrpQuerySxSMUIFile.c)
 *     LdrSetDllDirectory @ 0x1800788C0 (LdrSetDllDirectory.c)
 *     RtlGetImageFileMachines @ 0x180083000 (RtlGetImageFileMachines.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180083CE8 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlCreateVirtualAccountSid @ 0x180085B70 (RtlCreateVirtualAccountSid.c)
 *     RtlpTpIoDllLoaded @ 0x1800AFE36 (RtlpTpIoDllLoaded.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800DB750 (LdrpLogEtwDllSearchResults.c)
 *     LdrpCheckAppDirType @ 0x1800DD070 (LdrpCheckAppDirType.c)
 *     sxsisol_RespectDotLocal @ 0x1800E9D80 (sxsisol_RespectDotLocal.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800EE050 (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1801015CC (RtlpConstructCrossVmObjectPath.c)
 *     RtlIsNameInExpression @ 0x1801079B0 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180107A60 (RtlIsNameInUnUpcasedExpression.c)
 *     EtwpUpdateUmLogger @ 0x180124AC4 (EtwpUpdateUmLogger.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x18012D434 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 */

void __stdcall RtlFreeUnicodeString(PUNICODE_STRING UnicodeString)
{
  wchar_t *Buffer; // rcx

  Buffer = UnicodeString->Buffer;
  if ( Buffer )
  {
    NtdllpFreeStringRoutine(Buffer);
    *UnicodeString = 0LL;
  }
}
