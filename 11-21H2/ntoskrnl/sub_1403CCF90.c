/*
 * XREFs of sub_1403CCF90 @ 0x1403CCF90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403CD11C @ 0x1403CD11C (sub_1403CD11C.c)
 *     sub_140845CD8 @ 0x140845CD8 (sub_140845CD8.c)
 */

__int64 __fastcall sub_1403CCF90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax

  v5 = sub_1403CD11C(KeGetCurrentThread(), 0LL, 0LL);
  return sub_140845CD8(a2, v5, a3);
}
