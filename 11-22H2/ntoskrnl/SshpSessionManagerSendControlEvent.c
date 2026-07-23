/*
 * XREFs of SshpSessionManagerSendControlEvent @ 0x140874678
 * Callers:
 *     SshSessionManagerTraceDirtyTransition @ 0x140800768 (SshSessionManagerTraceDirtyTransition.c)
 *     PopBootBatteryStatusWorker @ 0x140864B20 (PopBootBatteryStatusWorker.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140864E58 (SshpSessionManagerTraceSystemStart.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x1408788A8 (SshSessionManagerTraceCsEnterReason.c)
 *     PopDiagTraceAcDcStateChange @ 0x14098C210 (PopDiagTraceAcDcStateChange.c)
 *     PopDiagTraceBatteryCountChange @ 0x14098CD70 (PopDiagTraceBatteryCountChange.c)
 *     SshSessionManagerTraceCsExitReason @ 0x1409A188C (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x1409A1AAC (SshSessionManagerTracePostSleepNotification.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x1409A1B90 (SshSessionManagerTracePreSleepNotification.c)
 *     SshSessionManagerTraceShutdownAction @ 0x1409A1C3C (SshSessionManagerTraceShutdownAction.c)
 *     SshSessionManagerTraceSystemStop @ 0x1409A1CC0 (SshSessionManagerTraceSystemStop.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x140226E30 (RtlGetSystemTimePrecise.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14032D18C (SSHSupportReleasePushLockExclusive.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     SshpAlpcOpenTraceSessionUnsafe @ 0x14084D5D0 (SshpAlpcOpenTraceSessionUnsafe.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085BA90 (SshpSessionManagerFlushControlEventBuffer.c)
 */

signed __int32 __fastcall SshpSessionManagerSendControlEvent(__int64 a1, unsigned int a2, __int64 a3)
{
  LARGE_INTEGER SystemTimePrecise; // r13
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
  if ( (unsigned int)(v7 + 12 + dword_140C38780) <= 0x400 )
  {
    KeResetEvent(&stru_140C38768);
    v12 = (char *)&unk_140C38784 + (unsigned int)dword_140C38780;
    *(_DWORD *)v12 = v7;
    *(_QWORD *)(v12 + 4) = a1;
    *(LARGE_INTEGER *)(v12 + 12) = SystemTimePrecise;
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
    dword_140C38780 += v7 + 12;
    if ( !byte_140C38760 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C38568, 0LL);
      v17 = SshpAlpcOpenTraceSessionUnsafe(v16, 0, SshpSessionManagerContext);
      SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&stru_140C38568);
      if ( v17 )
        byte_140C38760 = 1;
      else
        SshpSessionManagerFlushControlEventBuffer(v19, v18, v20);
    }
  }
  return SSHSupportReleasePushLockExclusive((volatile signed __int64 *)&SshpSessionManagerLock);
}
