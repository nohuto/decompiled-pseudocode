/*
 * XREFs of MiDereferenceHugeIoRange @ 0x14061FEB4
 * Callers:
 *     MiZeroHugeRangeWorker @ 0x140623320 (MiZeroHugeRangeWorker.c)
 *     MiZeroHugeRangeCore @ 0x140A2E1AC (MiZeroHugeRangeCore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceHugeIoRange(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 25, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
