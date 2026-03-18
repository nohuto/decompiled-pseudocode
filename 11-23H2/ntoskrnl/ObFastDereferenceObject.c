/*
 * XREFs of ObFastDereferenceObject @ 0x140297C80
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140225D3C (SepDesktopAppxSubProcessToken.c)
 *     RtlpQueryLowBoxId @ 0x140297B18 (RtlpQueryLowBoxId.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14036ED08 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B83CC (SeSetLearningModeObjectInformation.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14069F068 (PspAllocateAndQueryNotificationChannel.c)
 *     PspInitializeProcessSecurity @ 0x1406B64F0 (PspInitializeProcessSecurity.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA488 (SeIsTokenAssignableToProcess.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140714A30 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A00 (AlpcpCheckConnectionSecurity.c)
 *     PsQueryProcessAttributes @ 0x14071DE14 (PsQueryProcessAttributes.c)
 *     NtOpenThreadTokenEx @ 0x14071DF00 (NtOpenThreadTokenEx.c)
 *     PsImpersonateClient @ 0x140734A30 (PsImpersonateClient.c)
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     EtwTraceAppStateChange @ 0x1407519F8 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1407523D0 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140754528 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754850 (EtwQueryProcessTelemetryInfo.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 *     DbgkCreateThread @ 0x14076FC1C (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x1407A32E0 (PspMapSystemDll.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB04C (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B30BC (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x1407C29A4 (PfSnCheckModernApp.c)
 *     SepIsSiblingTokenByPointer @ 0x1407C6FB4 (SepIsSiblingTokenByPointer.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407D037C (MiIsUserQueryVmCallerTrusted.c)
 *     SepIsChildTokenByPointer @ 0x1407DCF20 (SepIsChildTokenByPointer.c)
 *     PspSetRedirectionTrustPolicy @ 0x1407DD524 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x1407DE0A8 (PspGetRedirectionTrustPolicy.c)
 *     PspSetQuotaLimits @ 0x1407E3914 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407E8570 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1407E9E80 (PspGetNoChildProcessRestrictedPolicy.c)
 *     NtImpersonateAnonymousToken @ 0x1407F4FB0 (NtImpersonateAnonymousToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9360 (SepCopyAnonymousTokenAndSetSilo.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E7154 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EFA60 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4F18 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140B75608 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140B96B2C (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
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
