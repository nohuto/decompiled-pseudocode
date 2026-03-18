/*
 * XREFs of ObFastDereferenceObject @ 0x1402F89B0
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140203EE0 (SepDesktopAppxSubProcessToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14025E12C (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     RtlpQueryLowBoxId @ 0x1402EF324 (RtlpQueryLowBoxId.c)
 *     SeSetLearningModeObjectInformation @ 0x1405F43E0 (SeSetLearningModeObjectInformation.c)
 *     AlpcpCheckConnectionSecurity @ 0x140668294 (AlpcpCheckConnectionSecurity.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14066A21C (EtwpGetSidExtendedHeaderItem.c)
 *     ExpWnfQueryCurrentUserSID @ 0x14066A57C (ExpWnfQueryCurrentUserSID.c)
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406745EC (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140678C4C (PspAllocateAndQueryNotificationChannel.c)
 *     SeIsTokenAssignableToProcess @ 0x140695160 (SeIsTokenAssignableToProcess.c)
 *     SepIsChildTokenByPointer @ 0x14069532C (SepIsChildTokenByPointer.c)
 *     SepIsSiblingTokenByPointer @ 0x1406953C8 (SepIsSiblingTokenByPointer.c)
 *     NtImpersonateAnonymousToken @ 0x140695570 (NtImpersonateAnonymousToken.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140695CF8 (MiIsUserQueryVmCallerTrusted.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14069B030 (AlpcpPortQueryConnectedSidInfo.c)
 *     PspSetRedirectionTrustPolicy @ 0x1406DD598 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x1406DEAEC (PspGetRedirectionTrustPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406E71BC (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406E9BE0 (PspGetNoChildProcessRestrictedPolicy.c)
 *     DbgkCreateThread @ 0x140702604 (DbgkCreateThread.c)
 *     EtwpPsProvTraceProcess @ 0x14070AFEC (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x14070B610 (EtwpBuildProcessEvent.c)
 *     PsQueryProcessAttributes @ 0x14070BA00 (PsQueryProcessAttributes.c)
 *     PspInitializeProcessSecurity @ 0x14070F0D8 (PspInitializeProcessSecurity.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140711F48 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x140712868 (EtwTraceAppStateChange.c)
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     PspMapSystemDll @ 0x140756AD4 (PspMapSystemDll.c)
 *     PspExitThread @ 0x1407A0088 (PspExitThread.c)
 *     PsImpersonateClient @ 0x1407AF1B0 (PsImpersonateClient.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     PfSnCheckModernApp @ 0x1407DCA0C (PfSnCheckModernApp.c)
 *     PspSetQuotaLimits @ 0x1407F2DBC (PspSetQuotaLimits.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C6000 (SepCopyAnonymousTokenAndSetSilo.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E4114 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EB400 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4DA0 (EtwpApplyPackageIdFilter.c)
 *     MmInitSystemDll @ 0x140B30EE0 (MmInitSystemDll.c)
 *     PspGetSystemDllSecureHandle @ 0x140B533E0 (PspGetSystemDllSecureHandle.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 */

__int64 __fastcall ObFastDereferenceObject(signed __int64 *a1, unsigned __int64 a2, ULONG a3)
{
  signed __int64 v3; // rax
  signed __int64 v4; // rtt

  _m_prefetchw(a1);
  v3 = *a1;
  if ( (a2 ^ *a1) >= 0xF )
    return ObfDereferenceObjectWithTag((PVOID)a2, a3);
  while ( 1 )
  {
    v4 = v3;
    v3 = _InterlockedCompareExchange64(a1, v3 + 1, v3);
    if ( v4 == v3 )
      break;
    if ( (a2 ^ v3) >= 0xF )
      return ObfDereferenceObjectWithTag((PVOID)a2, a3);
  }
  return ObpTraceObjectDereferenceIfActive(a2 - 48, 1LL);
}
