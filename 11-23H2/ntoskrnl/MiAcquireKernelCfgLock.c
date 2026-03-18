/*
 * XREFs of MiAcquireKernelCfgLock @ 0x140A43DE8
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x1406970A4 (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A43E4C (MiAllocateKernelCfgBitmapPageTables.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 MiAcquireKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = KeAbPreAcquire((__int64)&qword_140C65838, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65838, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140C65838, result, (__int64)&qword_140C65838);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
