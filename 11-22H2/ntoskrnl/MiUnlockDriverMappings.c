/*
 * XREFs of MiUnlockDriverMappings @ 0x14020B494
 * Callers:
 *     MiReserveDriverPtes @ 0x140696DF0 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140697280 (MiReleaseDriverPtes.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockDriverMappings(__int64 a1)
{
  _QWORD *result; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65A38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C65A38);
  result = (_QWORD *)KeAbPostRelease((ULONG_PTR)&qword_140C65A38);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
