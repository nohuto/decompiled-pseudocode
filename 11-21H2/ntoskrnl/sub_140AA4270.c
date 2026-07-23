/*
 * XREFs of sub_140AA4270 @ 0x140AA4270
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AA55E8 @ 0x140AA55E8 (sub_140AA55E8.c)
 */

__int64 __fastcall sub_140AA4270(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = *(_BYTE *)(a1 + 8);
  LOBYTE(a1) = KeGetCurrentIrql();
  return sub_140AA55E8(a1, a2);
}
