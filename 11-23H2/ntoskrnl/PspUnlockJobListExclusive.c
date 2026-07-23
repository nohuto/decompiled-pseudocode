/*
 * XREFs of PspUnlockJobListExclusive @ 0x140688AA0
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall PspUnlockJobListExclusive(__int64 a1)
{
  char v2; // al
  _QWORD *v3; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobListLock);
  LOBYTE(v3) = KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v3 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v3 != v3 )
      LOBYTE(v3) = KiCheckForKernelApcDelivery();
  }
  return (char)v3;
}
