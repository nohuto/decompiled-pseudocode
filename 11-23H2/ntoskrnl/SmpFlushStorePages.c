/*
 * XREFs of SmpFlushStorePages @ 0x1409D88B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     MiFlushAllStoreSwapPages @ 0x14063A33C (MiFlushAllStoreSwapPages.c)
 */

LONG __fastcall SmpFlushStorePages(__int64 a1)
{
  MiFlushAllStoreSwapPages(**(_QWORD **)(*(_QWORD *)a1 + 1936LL));
  return KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
}
