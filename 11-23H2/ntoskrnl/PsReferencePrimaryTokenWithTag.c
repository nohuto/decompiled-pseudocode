/*
 * XREFs of PsReferencePrimaryTokenWithTag @ 0x140232A90
 * Callers:
 *     RtlpQueryLowBoxId @ 0x140297DA8 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1402B3100 (SepReferenceTokenUsingPseudoHandle.c)
 *     PspInitializeProcessSecurity @ 0x1406B66A0 (PspInitializeProcessSecurity.c)
 *     PspReferenceTokenForNewProcess @ 0x1406B9234 (PspReferenceTokenForNewProcess.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA4B8 (SeIsTokenAssignableToProcess.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2330 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 *     PsReferencePrimaryToken @ 0x1406EF450 (PsReferencePrimaryToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140714C40 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715C00 (AlpcpCheckConnectionSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14071D3B0 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x14071D550 (SeCreateClientSecurity.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D6E0 (EtwpGetSidExtendedHeaderItem.c)
 *     PsReferenceEffectiveToken @ 0x14071D8EC (PsReferenceEffectiveToken.c)
 *     SepCreateClientSecurityEx @ 0x14071DAF0 (SepCreateClientSecurityEx.c)
 *     PsQueryProcessAttributes @ 0x14071E014 (PsQueryProcessAttributes.c)
 *     NtOpenThreadTokenEx @ 0x14071E100 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x140722910 (MiCreateSectionCommon.c)
 *     RtlpSetSecurityObject @ 0x14072BF70 (RtlpSetSecurityObject.c)
 *     PsImpersonateClient @ 0x140734C20 (PsImpersonateClient.c)
 *     NtDuplicateToken @ 0x1407355B0 (NtDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     NtOpenProcessTokenEx @ 0x1407378C0 (NtOpenProcessTokenEx.c)
 *     SeCaptureSubjectContextEx @ 0x140737E90 (SeCaptureSubjectContextEx.c)
 *     ExpGetProcessInformation @ 0x140742FB0 (ExpGetProcessInformation.c)
 *     EtwTraceAppStateChange @ 0x140751BE8 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1407525C0 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140754718 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754A40 (EtwQueryProcessTelemetryInfo.c)
 *     MmCreateSectionEx @ 0x14076C898 (MmCreateSectionEx.c)
 *     PspExitThread @ 0x14076DC1C (PspExitThread.c)
 *     PspDisablePrimaryTokenExchange @ 0x14076FAD0 (PspDisablePrimaryTokenExchange.c)
 *     PsIsProcessAppContainer @ 0x14077F27C (PsIsProcessAppContainer.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB23C (AlpcpPortQueryConnectedSidInfo.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x1407AF7A4 (ObpSetCurrentProcessDeviceMap.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B32AC (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x1407C2C74 (PfSnCheckModernApp.c)
 *     SepIsSiblingTokenByPointer @ 0x1407C7284 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1407DD1F0 (SepIsChildTokenByPointer.c)
 *     PspSetRedirectionTrustPolicy @ 0x1407DD7F4 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x1407DE378 (PspGetRedirectionTrustPolicy.c)
 *     PspSetQuotaLimits @ 0x1407E3BE4 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407E8840 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1407EA150 (PspGetNoChildProcessRestrictedPolicy.c)
 *     SepFilterToken @ 0x1407F1ED0 (SepFilterToken.c)
 *     NtImpersonateAnonymousToken @ 0x1407F5280 (NtImpersonateAnonymousToken.c)
 *     CmpCreateRegistryProcessToken @ 0x14080AF68 (CmpCreateRegistryProcessToken.c)
 *     SeAuditProcessCreation @ 0x140840FC4 (SeAuditProcessCreation.c)
 *     PsCreateMinimalProcess @ 0x1408531AC (PsCreateMinimalProcess.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140853760 (EtwpAcquireTokenAccessInformation.c)
 *     SeAuditProcessExit @ 0x1409CB114 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E73E4 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EFCF0 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F51A8 (EtwpApplyPackageIdFilter.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A36FBC (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x140A3E250 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x140A3F520 (NtLoadEnclaveData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 */

ULONG_PTR __fastcall PsReferencePrimaryTokenWithTag(__int64 a1, ULONG a2)
{
  signed __int64 v4; // r8
  signed __int64 v5; // rax
  signed __int64 v6; // rbx
  unsigned int v7; // r8d
  ULONG_PTR v8; // rbx
  __int64 v10; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  struct _KTHREAD *CurrentThread; // r14

  _m_prefetchw((const void *)(a1 + 1208));
  v4 = *(_QWORD *)(a1 + 1208);
  if ( (v4 & 0xF) != 0 )
  {
    do
    {
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1208), v4 - 1, v4);
      if ( v4 == v5 )
        break;
      v4 = v5;
    }
    while ( (v5 & 0xF) != 0 );
  }
  v6 = v4;
  v7 = v4 & 0xF;
  v8 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v7 <= 1 )
  {
    if ( !v7 )
    {
LABEL_17:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
      v8 = *(_QWORD *)(a1 + 1208) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v8 )
        ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 1208) & 0xFFFFFFFFFFFFFFF0uLL), a2);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1080), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 1080);
      KeAbPostRelease(a1 + 1080);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return v8;
    }
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 48), 0xFuLL);
    if ( v10 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v8, 0x10uLL, v10 + 15);
    _m_prefetchw((const void *)(a1 + 1208));
    v11 = *(_QWORD *)(a1 + 1208);
    if ( (unsigned __int64)(v11 & 0xF) + 15 <= 0xF )
    {
      do
      {
        if ( v8 != (v11 & 0xFFFFFFFFFFFFFFF0uLL) )
          break;
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1208), v11 + 15, v11);
        if ( v12 == v11 )
          goto LABEL_4;
      }
      while ( (v11 & 0xF) == 0 );
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 - 48), 0xFFFFFFFFFFFFFFF1uLL);
  }
LABEL_4:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v8 - 48);
  if ( !v8 )
    goto LABEL_17;
  return v8;
}
