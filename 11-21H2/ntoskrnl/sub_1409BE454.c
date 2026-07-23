/*
 * XREFs of sub_1409BE454 @ 0x1409BE454
 * Callers:
 *     sub_1405ED1F8 @ 0x1405ED1F8 (sub_1405ED1F8.c)
 *     sub_1405ED354 @ 0x1405ED354 (sub_1405ED354.c)
 *     sub_1405ED6E4 @ 0x1405ED6E4 (sub_1405ED6E4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1409BE454(__int64 a1, char a2, unsigned __int8 a3)
{
  return *(_BYTE *)(((unsigned __int64)a3 << 7) + (a2 & 0x7F) + *(_QWORD *)(a1 + 40) - 128);
}
