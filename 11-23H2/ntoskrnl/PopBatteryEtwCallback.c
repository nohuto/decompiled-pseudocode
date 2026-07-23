/*
 * XREFs of PopBatteryEtwCallback @ 0x1409954D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopBatteryTraceSystemBatteryStatus @ 0x1403C456C (PopBatteryTraceSystemBatteryStatus.c)
 */

void __fastcall PopBatteryEtwCallback(LPCGUID SourceId, ULONG ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( ControlCode == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&xmmword_140C3D218, 0LL);
    PopBatteryTraceSystemBatteryStatus(1);
    PopReleaseRwLock((__int64 *)&xmmword_140C3D218);
  }
}
