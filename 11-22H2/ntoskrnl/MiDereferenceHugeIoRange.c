/*
 * XREFs of MiDereferenceHugeIoRange @ 0x14061F9D4
 * Callers:
 *     MiZeroHugeRangeWorker @ 0x140622E40 (MiZeroHugeRangeWorker.c)
 *     MiZeroHugeRangeCore @ 0x140A2DF6C (MiZeroHugeRangeCore.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceHugeIoRange(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 25, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
