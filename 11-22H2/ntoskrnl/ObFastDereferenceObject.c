/*
 * XREFs of ObFastDereferenceObject @ 0x140297B60
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140225D5C (SepDesktopAppxSubProcessToken.c)
 *     RtlpQueryLowBoxId @ 0x1402979F8 (RtlpQueryLowBoxId.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14036E6B8 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B845C (SeSetLearningModeObjectInformation.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     PspInitializeProcessSecurity @ 0x1406B64F0 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA488 (SeIsTokenAssignableToProcess.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140714AE0 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A70 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x14071DE84 (PsQueryProcessAttributes.c)
 *     NtOpenThreadTokenEx @ 0x14071DF70 (NtOpenThreadTokenEx.c)
 *     PsImpersonateClient @ 0x140734F30 (PsImpersonateClient.c)
 *     ExpGetProcessInformation @ 0x1407432D0 (ExpGetProcessInformation.c)
 *     EtwTraceAppStateChange @ 0x140751F08 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1407528E0 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140754A38 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754D60 (EtwQueryProcessTelemetryInfo.c)
 *     PspExitThread @ 0x14076DF3C (PspExitThread.c)
 *     DbgkCreateThread @ 0x14077012C (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1407A37F0 (PspMapSystemDll.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB5FC (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B366C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x1407C2F34 (PfSnCheckModernApp.c)
 *     SepIsSiblingTokenByPointer @ 0x1407C7544 (SepIsSiblingTokenByPointer.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D08DC (MiIsUserQueryVmCallerTrusted.c)
 *     SepIsChildTokenByPointer @ 0x1407DD4A0 (SepIsChildTokenByPointer.c)
 *     PspSetRedirectionTrustPolicy @ 0x1407DDAA4 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x1407DE628 (PspGetRedirectionTrustPolicy.c)
 *     PspSetQuotaLimits @ 0x1407E3E94 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407E8AF0 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1407EA400 (PspGetNoChildProcessRestrictedPolicy.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5620 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9410 (SepCopyAnonymousTokenAndSetSilo.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E7204 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EFB10 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4FC8 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140B76620 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140B97B2C (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 */

signed __int64 __fastcall ObFastDereferenceObject(signed __int64 *a1, unsigned __int64 a2, ULONG a3)
{
  signed __int64 result; // rax
  signed __int64 v4; // rtt

  _m_prefetchw(a1);
  result = *a1;
  if ( (a2 ^ *a1) >= 0xF )
    return ObfDereferenceObjectWithTag((PVOID)a2, a3);
  while ( 1 )
  {
    v4 = result;
    result = _InterlockedCompareExchange64(a1, result + 1, result);
    if ( v4 == result )
      break;
    if ( (a2 ^ result) >= 0xF )
      return ObfDereferenceObjectWithTag((PVOID)a2, a3);
  }
  if ( ObpTraceFlags )
    return ObpPushStackInfo((int)a2 - 48);
  return result;
}
