/*
 * XREFs of PsLookupProcessByProcessId @ 0x1406FA580
 * Callers:
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B7ED8 (PspOneDirectionSecurityDomainCombine.c)
 *     PsOpenProcess @ 0x1406F3D30 (PsOpenProcess.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     PfpCopyEvent @ 0x14074AFC0 (PfpCopyEvent.c)
 *     EtwpPsProvTraceProcess @ 0x1407525C0 (EtwpPsProvTraceProcess.c)
 *     PfpRpControlRequestUpdate @ 0x1407B55B8 (PfpRpControlRequestUpdate.c)
 *     EtwpProcessThreadImageRundown @ 0x140820620 (EtwpProcessThreadImageRundown.c)
 *     SeAuditProcessCreation @ 0x140840FC4 (SeAuditProcessCreation.c)
 *     PiUEventHandleVetoEvent @ 0x140882B88 (PiUEventHandleVetoEvent.c)
 *     IopLiveDumpAddProcessFilter @ 0x14094C65C (IopLiveDumpAddProcessFilter.c)
 *     PnpLogVetoInformation @ 0x1409645E0 (PnpLogVetoInformation.c)
 *     PopInitSystemSleeperThread @ 0x14098B9A0 (PopInitSystemSleeperThread.c)
 *     PopDiagTraceAppPowerMessage @ 0x14098C9B4 (PopDiagTraceAppPowerMessage.c)
 *     EtwpEnableDisableUMGL @ 0x1409E75E8 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x1409E7BEC (EtwpUpdatePerProcessTracing.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409EC874 (EtwpGetPrivateSessionTraceHandle.c)
 *     CmpDumpOneKeyBody @ 0x140A17480 (CmpDumpOneKeyBody.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     ViCreateProcessCallbackInternal @ 0x140AD6244 (ViCreateProcessCallbackInternal.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201DF4 (ExfAcquireReleasePushLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsGetCurrentServerSilo @ 0x14028A220 (PsGetCurrentServerSilo.c)
 *     PsIsProcessInSilo @ 0x14028A27C (PsIsProcessInSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     PspReferenceCidTableEntry @ 0x1406FB3C0 (PspReferenceCidTableEntry.c)
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
