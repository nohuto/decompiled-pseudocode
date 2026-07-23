/*
 * XREFs of sub_140AA4410 @ 0x140AA4410
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AA58C0 @ 0x140AA58C0 (sub_140AA58C0.c)
 */

__int64 __fastcall sub_140AA4410(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = *(_BYTE *)(a1 + 17);
  return sub_140AA58C0(1LL, a1 + 24, a3, *(_QWORD *)(a1 + 8));
}
