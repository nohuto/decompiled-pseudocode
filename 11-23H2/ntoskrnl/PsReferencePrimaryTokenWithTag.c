/*
 * XREFs of PsReferencePrimaryTokenWithTag @ 0x1402329C0
 * Callers:
 *     RtlpQueryLowBoxId @ 0x140297B18 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1402B2E70 (SepReferenceTokenUsingPseudoHandle.c)
 *     PspInitializeProcessSecurity @ 0x1406B64F0 (PspInitializeProcessSecurity.c)
 *     PspReferenceTokenForNewProcess @ 0x1406B9204 (PspReferenceTokenForNewProcess.c)
 *     SeIsTokenAssignableToProcess @ 0x1406BA488 (SeIsTokenAssignableToProcess.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406E2300 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObOpenObjectByNameEx @ 0x1406ECFE0 (ObOpenObjectByNameEx.c)
 *     PsReferencePrimaryToken @ 0x1406EF420 (PsReferencePrimaryToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140714A30 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A00 (AlpcpCheckConnectionSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14071D1B0 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x14071D350 (SeCreateClientSecurity.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071D4E0 (EtwpGetSidExtendedHeaderItem.c)
 *     PsReferenceEffectiveToken @ 0x14071D6EC (PsReferenceEffectiveToken.c)
 *     SepCreateClientSecurityEx @ 0x14071D8F0 (SepCreateClientSecurityEx.c)
 *     PsQueryProcessAttributes @ 0x14071DE14 (PsQueryProcessAttributes.c)
 *     NtOpenThreadTokenEx @ 0x14071DF00 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x140722710 (MiCreateSectionCommon.c)
 *     RtlpSetSecurityObject @ 0x14072BD70 (RtlpSetSecurityObject.c)
 *     PsImpersonateClient @ 0x140734A30 (PsImpersonateClient.c)
 *     NtDuplicateToken @ 0x1407353C0 (NtDuplicateToken.c)
 *     ObInsertObjectEx @ 0x1407359D0 (ObInsertObjectEx.c)
 *     NtOpenProcessTokenEx @ 0x1407376D0 (NtOpenProcessTokenEx.c)
 *     SeCaptureSubjectContextEx @ 0x140737CA0 (SeCaptureSubjectContextEx.c)
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     EtwTraceAppStateChange @ 0x1407519F8 (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1407523D0 (EtwpPsProvTraceProcess.c)
 *     EtwpBuildProcessEvent @ 0x140754528 (EtwpBuildProcessEvent.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754850 (EtwQueryProcessTelemetryInfo.c)
 *     MmCreateSectionEx @ 0x14076C6A8 (MmCreateSectionEx.c)
 *     PspExitThread @ 0x14076DA2C (PspExitThread.c)
 *     PspDisablePrimaryTokenExchange @ 0x14076F8E0 (PspDisablePrimaryTokenExchange.c)
 *     PsIsProcessAppContainer @ 0x14077F08C (PsIsProcessAppContainer.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB04C (AlpcpPortQueryConnectedSidInfo.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x1407AF5B4 (ObpSetCurrentProcessDeviceMap.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B30BC (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x1407C29A4 (PfSnCheckModernApp.c)
 *     SepIsSiblingTokenByPointer @ 0x1407C6FB4 (SepIsSiblingTokenByPointer.c)
 *     SepIsChildTokenByPointer @ 0x1407DCF20 (SepIsChildTokenByPointer.c)
 *     PspSetRedirectionTrustPolicy @ 0x1407DD524 (PspSetRedirectionTrustPolicy.c)
 *     PspGetRedirectionTrustPolicy @ 0x1407DE0A8 (PspGetRedirectionTrustPolicy.c)
 *     PspSetQuotaLimits @ 0x1407E3914 (PspSetQuotaLimits.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407E8570 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1407E9E80 (PspGetNoChildProcessRestrictedPolicy.c)
 *     SepFilterToken @ 0x1407F1C00 (SepFilterToken.c)
 *     NtImpersonateAnonymousToken @ 0x1407F4FB0 (NtImpersonateAnonymousToken.c)
 *     CmpCreateRegistryProcessToken @ 0x14080AC98 (CmpCreateRegistryProcessToken.c)
 *     SeAuditProcessCreation @ 0x140840CC4 (SeAuditProcessCreation.c)
 *     PsCreateMinimalProcess @ 0x140852EAC (PsCreateMinimalProcess.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140853460 (EtwpAcquireTokenAccessInformation.c)
 *     SeAuditProcessExit @ 0x1409CAF14 (SeAuditProcessExit.c)
 *     EtwpGetPsmKeyExtendedHeaderItem @ 0x1409E7154 (EtwpGetPsmKeyExtendedHeaderItem.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409EFA60 (EtwpPsProvProcessEnumCallback.c)
 *     EtwpApplyPackageIdFilter @ 0x1409F4F18 (EtwpApplyPackageIdFilter.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A36D0C (MiFindProcessImageHotPatchRecord.c)
 *     MiInitializeVsmEnclave @ 0x140A3DFA0 (MiInitializeVsmEnclave.c)
 *     NtLoadEnclaveData @ 0x140A3F270 (NtLoadEnclaveData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BD860 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
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
