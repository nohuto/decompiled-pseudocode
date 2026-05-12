/*
 * XREFs of sub_1C00B2790 @ 0x1C00B2790
 * Callers:
 *     <none>
 * Callees:
 *     StorPortSynchronizeAccess @ 0x1C0047590 (StorPortSynchronizeAccess.c)
 */

char __fastcall sub_1C00B2790(__int64 a1, __int64 (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  return StorPortSynchronizeAccess(a1, a2, a3);
}
