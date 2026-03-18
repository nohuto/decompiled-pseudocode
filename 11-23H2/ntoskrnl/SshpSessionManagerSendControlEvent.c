/*
 * XREFs of SshpSessionManagerSendControlEvent @ 0x1408741A8
 * Callers:
 *     SshSessionManagerTraceDirtyTransition @ 0x1408000B8 (SshSessionManagerTraceDirtyTransition.c)
 *     PopBootBatteryStatusWorker @ 0x140864700 (PopBootBatteryStatusWorker.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140864A38 (SshpSessionManagerTraceSystemStart.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x1408783D8 (SshSessionManagerTraceCsEnterReason.c)
 *     PopDiagTraceAcDcStateChange @ 0x14098C160 (PopDiagTraceAcDcStateChange.c)
 *     PopDiagTraceBatteryCountChange @ 0x14098CCC0 (PopDiagTraceBatteryCountChange.c)
 *     SshSessionManagerTraceCsExitReason @ 0x1409A17DC (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x1409A19FC (SshSessionManagerTracePostSleepNotification.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x1409A1AE0 (SshSessionManagerTracePreSleepNotification.c)
 *     SshSessionManagerTraceShutdownAction @ 0x1409A1B8C (SshSessionManagerTraceShutdownAction.c)
 *     SshSessionManagerTraceSystemStop @ 0x1409A1C10 (SshSessionManagerTraceSystemStop.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140226E10 (RtlGetSystemTimePrecise.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14032D320 (SSHSupportReleasePushLockExclusive.c)
 *     memmove @ 0x140435700 (memmove.c)
 *     SshpAlpcOpenTraceSessionUnsafe @ 0x14084C370 (SshpAlpcOpenTraceSessionUnsafe.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085B2C0 (SshpSessionManagerFlushControlEventBuffer.c)
 */

signed __int32 __fastcall SshpSessionManagerSendControlEvent(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 SystemTimePrecise; // r13
  int v7; // ebp
  __int64 v8; // rsi
  _DWORD *v9; // rcx
  __int64 v10; // rax
  const void **v11; // rdi
  char *v12; // rbx
  char *v13; // rbx
  __int64 v14; // rax
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8

  SystemTimePrecise = RtlGetSystemTimePrecise();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpSessionManagerLock, 0LL);
  v7 = 8;
  v8 = a2;
  if ( a2 )
  {
    v9 = (_DWORD *)(a3 + 8);
    v10 = a2;
    do
    {
      v7 += *v9;
      v9 += 4;
      --v10;
    }
    while ( v10 );
  }
  v11 = (const void **)(a3 + 8);
  if ( (unsigned int)(v7 + 12 + dword_140C38760) <= 0x400 )
  {
    KeResetEvent(&stru_140C38748);
    v12 = (char *)&unk_140C38764 + (unsigned int)dword_140C38760;
    *(_DWORD *)v12 = v7;
    *(_QWORD *)(v12 + 4) = a1;
    *(_QWORD *)(v12 + 12) = SystemTimePrecise;
    v13 = v12 + 20;
    if ( a2 )
    {
      do
      {
        memmove(v13, *(v11 - 1), *(unsigned int *)v11);
        v14 = *(unsigned int *)v11;
        v11 += 2;
        v13 += v14;
        --v8;
      }
      while ( v8 );
    }
    dword_140C38760 += v7 + 12;
    if ( !byte_140C38740 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C38548, 0LL);
      v17 = SshpAlpcOpenTraceSessionUnsafe(v16, 0, SshpSessionManagerContext);
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C38548);
      if ( v17 )
        byte_140C38740 = 1;
      else
        SshpSessionManagerFlushControlEventBuffer(v19, v18, v20);
    }
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
