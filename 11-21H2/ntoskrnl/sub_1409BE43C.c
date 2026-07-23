/*
 * XREFs of sub_1409BE43C @ 0x1409BE43C
 * Callers:
 *     sub_1405ED1F8 @ 0x1405ED1F8 (sub_1405ED1F8.c)
 *     sub_1405ED354 @ 0x1405ED354 (sub_1405ED354.c)
 *     sub_1405ED6E4 @ 0x1405ED6E4 (sub_1405ED6E4.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1409BE43C(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
