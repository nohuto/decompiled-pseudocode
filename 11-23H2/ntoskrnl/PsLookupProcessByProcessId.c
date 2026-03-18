/*
 * XREFs of PsLookupProcessByProcessId @ 0x1406FA370
 * Callers:
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7EA8 (PspOneDirectionSecurityDomainCombine.c)
 *     PsOpenProcess @ 0x1406F3D00 (PsOpenProcess.c)
 *     ExpQuerySystemInformation @ 0x140726850 (ExpQuerySystemInformation.c)
 *     PfpCopyEvent @ 0x14074ADD0 (PfpCopyEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1407523D0 (EtwpPsProvTraceProcess.c)
 *     PfpRpControlRequestUpdate @ 0x1407B52D8 (PfpRpControlRequestUpdate.c)
 *     EtwpProcessThreadImageRundown @ 0x140820320 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x140840CC4 (SeAuditProcessCreation.c)
 *     PiUEventHandleVetoEvent @ 0x140882948 (PiUEventHandleVetoEvent.c)
 *     IopLiveDumpAddProcessFilter @ 0x14094C45C (IopLiveDumpAddProcessFilter.c)
 *     PnpLogVetoInformation @ 0x1409643E0 (PnpLogVetoInformation.c)
 *     PopInitSystemSleeperThread @ 0x14098B7A0 (PopInitSystemSleeperThread.c)
 *     PopDiagTraceAppPowerMessage @ 0x14098C7B4 (PopDiagTraceAppPowerMessage.c)
 *     EtwpEnableDisableUMGL @ 0x1409E7358 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E795C (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EC5E4 (EtwpGetPrivateSessionTraceHandle.c)
 *     CmpDumpOneKeyBody @ 0x140A171D0 (CmpDumpOneKeyBody.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 *     ViCreateProcessCallbackInternal @ 0x140AD6254 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x140289F90 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x140289FEC (PsIsProcessInSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F820 (KiCheckForKernelApcDelivery.c)
 *     PspReferenceCidTableEntry @ 0x1406FB1B0 (PspReferenceCidTableEntry.c)
 */

NTSTATUS __stdcall PsLookupProcessByProcessId(HANDLE ProcessId, PEPROCESS *Process)
{
  struct _KTHREAD *CurrentThread; // rdi
  PEPROCESS *v3; // r14
  __int64 v4; // rbx
  __int64 CurrentServerSilo; // rsi
  bool v6; // zf
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = Process;
  LOBYTE(Process) = 3;
  --CurrentThread->SpecialApcDisable;
  v4 = PspReferenceCidTableEntry(ProcessId, Process);
  if ( v4 )
  {
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( (*(_DWORD *)(v4 + 1124) & 0x4000000) == 0 )
    {
      _InterlockedOr(v8, 0);
      if ( (*(_QWORD *)(v4 + 1080) & 1) != 0 )
        ExfAcquireReleasePushLockExclusive(v4 + 1080);
      if ( (*(_DWORD *)(v4 + 1124) & 0x4000000) == 0 )
        goto LABEL_13;
    }
    if ( !PsIsProcessInSilo((struct _KPROCESS *)v4, CurrentServerSilo) )
    {
LABEL_13:
      ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
      v4 = 0LL;
    }
  }
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !v4 )
    return -1073741813;
  *v3 = (PEPROCESS)v4;
  return 0;
}
