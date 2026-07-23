/*
 * XREFs of sub_140689074 @ 0x140689074
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14083D1A4 @ 0x14083D1A4 (sub_14083D1A4.c)
 * Callees:
 *     nullsub_12 @ 0x140AB435C (nullsub_12.c)
 */

__int64 __fastcall sub_140689074(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = a2[1];
  LOBYTE(a1) = 5;
  a2[1] = 0LL;
  *a2 = 0LL;
  nullsub_12(a1);
  return v2;
}
