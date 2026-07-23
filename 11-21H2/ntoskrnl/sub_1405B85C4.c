/*
 * XREFs of sub_1405B85C4 @ 0x1405B85C4
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405B85C4(__int64 a1, unsigned __int64 a2)
{
  return qword_140C51BA8[*(_BYTE *)(a1 + 184) & 7] + ((a2 >> 12) & 0xFFFFFFFFFLL);
}
