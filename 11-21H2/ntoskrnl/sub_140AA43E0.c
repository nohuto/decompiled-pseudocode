/*
 * XREFs of sub_140AA43E0 @ 0x140AA43E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140AA58C0 @ 0x140AA58C0 (sub_140AA58C0.c)
 */

__int64 __fastcall sub_140AA43E0(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = *(_BYTE *)(a1 + 25);
  return sub_140AA58C0(*(unsigned int *)(a1 + 48), *(_QWORD *)(a1 + 40), a3, *(_QWORD *)(a1 + 16));
}
