/*
 * XREFs of PsAllocSiloContextSlot @ 0x1408213F0
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageAllocSlot @ 0x14082150C (PspStorageAllocSlot.c)
 */

__int64 __fastcall PsAllocSiloContextSlot(__int64 a1, __int64 a2)
{
  return PspStorageAllocSlot(a2);
}
