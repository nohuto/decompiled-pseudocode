/*
 * XREFs of sub_140418BA4 @ 0x140418BA4
 * Callers:
 *     sub_1403D5E00 @ 0x1403D5E00 (sub_1403D5E00.c)
 *     sub_140418C1C @ 0x140418C1C (sub_140418C1C.c)
 *     sub_140418CD8 @ 0x140418CD8 (sub_140418CD8.c)
 * Callees:
 *     sub_14041900C @ 0x14041900C (sub_14041900C.c)
 */

_BOOL8 __fastcall sub_140418BA4(__int64 a1, _QWORD *a2)
{
  return (*a2 & 4) != 0 && !(_BYTE)byte_140E01841 && !(unsigned int)sub_14041900C();
}
