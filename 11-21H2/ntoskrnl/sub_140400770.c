/*
 * XREFs of sub_140400770 @ 0x140400770
 * Callers:
 *     sub_1404001EC @ 0x1404001EC (sub_1404001EC.c)
 * Callees:
 *     sub_1403FDDE8 @ 0x1403FDDE8 (sub_1403FDDE8.c)
 *     sub_14040079C @ 0x14040079C (sub_14040079C.c)
 */

__int64 __fastcall sub_140400770(__int64 a1)
{
  unsigned int v2; // eax

  v2 = sub_14040079C(*(_QWORD *)(a1 + 8));
  return sub_1403FDDE8(a1, v2);
}
