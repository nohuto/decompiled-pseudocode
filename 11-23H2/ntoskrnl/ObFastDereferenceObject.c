/*
 * XREFs of ObFastDereferenceObject @ 0x140297F10
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140225E4C (SepDesktopAppxSubProcessToken.c)
 *     RtlpQueryLowBoxId @ 0x140297DA8 (RtlpQueryLowBoxId.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14036EEA8 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B893C (SeSetLearningModeObjectInformation.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     PspInitializeProcessSecurity @ 0x1406B66A0 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x1406B722C (SeSubProcessToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA4B8 (SeIsTokenAssignableToProcess.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140714C40 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715C00 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x14071E014 (PsQueryProcessAttributes.c)
 *     NtOpenThreadTokenEx @ 0x14071E100 (NtOpenThreadTokenEx.c)
 *     PsImpersonateClient @ 0x140734C20 (PsImpersonateClient.c)
 *     ExpGetProcessInformation @ 0x140742FB0 (ExpGetProcessInformation.c)
 *     EtwTraceAppStateChange @ 0x140751BE8 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1407525C0 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140754718 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754A40 (EtwQueryProcessTelemetryInfo.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     DbgkCreateThread @ 0x14076FE0C (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1407A34D0 (PspMapSystemDll.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB23C (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B32AC (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x1407C2C74 (PfSnCheckModernApp.c)
 *     SepIsSiblingTokenByPointer @ 0x1407C7284 (SepIsSiblingTokenByPointer.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D064C (MiIsUserQueryVmCallerTrusted.c)
 *     SepIsChildTokenByPointer @ 0x1407DD1F0 (SepIsChildTokenByPointer.c)
 *     PspSetRedirectionTrustPolicy @ 0x1407DD7F4 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x1407DE378 (PspGetRedirectionTrustPolicy.c)
 *     PspSetQuotaLimits @ 0x1407E3BE4 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407E8840 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1407EA150 (PspGetNoChildProcessRestrictedPolicy.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5280 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9560 (SepCopyAnonymousTokenAndSetSilo.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E73E4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EFCF0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F51A8 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140B75608 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140B96B2C (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
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
