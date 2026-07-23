/*
 * XREFs of RtlFreeUnicodeString @ 0x180048810
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x180002A90 (sxsisol_RespectDotLocal.c)
 *     EtwpCreateFile @ 0x180008BCC (EtwpCreateFile.c)
 *     RtlpGetRegistryHandle @ 0x18000A5F4 (RtlpGetRegistryHandle.c)
 *     EtwpInitLoggerContext @ 0x18000A828 (EtwpInitLoggerContext.c)
 *     EtwpGenerateFileName @ 0x18000ACA8 (EtwpGenerateFileName.c)
 *     RtlCreateVirtualAccountSid @ 0x18000BD90 (RtlCreateVirtualAccountSid.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18000EC7C (RtlpCapabilityCheckSystemCapability.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18000ED04 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlCreateServiceSid @ 0x18000F3F0 (RtlCreateServiceSid.c)
 *     LdrpLogDllStateEx2 @ 0x18001DE58 (LdrpLogDllStateEx2.c)
 *     RtlEqualDomainName @ 0x180031980 (RtlEqualDomainName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x1800437E8 (LdrpSnapKernelBaseExtensions.c)
 *     RtlDosSearchPath_Ustr @ 0x180043D50 (RtlDosSearchPath_Ustr.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800458B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180047DC0 (RtlFormatCurrentUserKeyPath.c)
 *     RtlIsApiSetImplemented @ 0x180048760 (RtlIsApiSetImplemented.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18004A1A0 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrSetDllDirectory @ 0x180060540 (LdrSetDllDirectory.c)
 *     LdrResSearchResource @ 0x180064700 (LdrResSearchResource.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800684A8 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlOpenCurrentUser @ 0x18006F250 (RtlOpenCurrentUser.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180076B98 (RtlpGetTokenNamedObjectPath.c)
 *     LdrpQuerySxSMUIFile @ 0x18007E478 (LdrpQuerySxSMUIFile.c)
 *     LdrpCodeAuthzInitialize @ 0x180082D6C (LdrpCodeAuthzInitialize.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x1800879F8 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     EtwpFlushUmLogger @ 0x180090EE4 (EtwpFlushUmLogger.c)
 *     EtwpFreeLoggerContext @ 0x180091018 (EtwpFreeLoggerContext.c)
 *     RtlGetImageFileMachines @ 0x1800A30A0 (RtlGetImageFileMachines.c)
 *     RtlpTpIoDllLoaded @ 0x1800B1D36 (RtlpTpIoDllLoaded.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800DB238 (LdrpLogEtwDllSearchResults.c)
 *     LdrpCheckAppDirType @ 0x1800DC8F0 (LdrpCheckAppDirType.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 *     RtlpCreateIFEOKeyFilterKey @ 0x1800EE7AC (RtlpCreateIFEOKeyFilterKey.c)
 *     RtlpConstructCrossVmObjectPath @ 0x1801018CC (RtlpConstructCrossVmObjectPath.c)
 *     RtlIsNameInExpression @ 0x180107C40 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x180107CF0 (RtlIsNameInUnUpcasedExpression.c)
 *     EtwpUpdateUmLogger @ 0x180122B90 (EtwpUpdateUmLogger.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1801287D8 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
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
