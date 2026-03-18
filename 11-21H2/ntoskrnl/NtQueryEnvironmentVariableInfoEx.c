/*
 * XREFs of NtQueryEnvironmentVariableInfoEx @ 0x140A00D00
 * Callers:
 *     PopEnableSystemSleepCheckpoint @ 0x1407FE8C0 (PopEnableSystemSleepCheckpoint.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     IoQueryEnvironmentVariableInfoEx @ 0x14093E6A8 (IoQueryEnvironmentVariableInfoEx.c)
 */

__int64 __fastcall NtQueryEnvironmentVariableInfoEx(unsigned int a1, PDEVICE_OBJECT *a2, __int64 *a3, __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int EnvironmentVariableInfo; // ebx

  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  if ( KeGetCurrentThread()->PreviousMode )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&ExpEnvironmentLock);
  EnvironmentVariableInfo = IoQueryEnvironmentVariableInfoEx(a1, a2, a3, a4);
  ExReleaseFastMutexUnsafe(&ExpEnvironmentLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return EnvironmentVariableInfo;
}
