/*
 * XREFs of PspUnlockProcessListExclusive @ 0x1402269F4
 * Callers:
 *     PspInsertProcess @ 0x1406B9FD4 (PspInsertProcess.c)
 *     PspProcessDelete @ 0x1407612A0 (PspProcessDelete.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall PspUnlockProcessListExclusive(__int64 a1)
{
  char v2; // al
  _QWORD *result; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspActiveProcessLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(&PspActiveProcessLock);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
