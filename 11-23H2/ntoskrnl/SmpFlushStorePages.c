/*
 * XREFs of SmpFlushStorePages @ 0x1409D86B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     MiFlushAllStoreSwapPages @ 0x140639DEC (MiFlushAllStoreSwapPages.c)
 */

LONG __fastcall SmpFlushStorePages(__int64 a1)
{
  MiFlushAllStoreSwapPages(**(_QWORD **)(*(_QWORD *)a1 + 1936LL));
  return KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
}
