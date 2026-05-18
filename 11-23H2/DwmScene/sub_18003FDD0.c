/*
 * XREFs of sub_18003FDD0 @ 0x18003FDD0
 * Callers:
 *     sub_18003FF64 @ 0x18003FF64 (sub_18003FF64.c)
 *     sub_18003FF94 @ 0x18003FF94 (sub_18003FF94.c)
 *     sub_18004EA68 @ 0x18004EA68 (sub_18004EA68.c)
 *     sub_1800E6654 @ 0x1800E6654 (sub_1800E6654.c)
 *     sub_1800E7152 @ 0x1800E7152 (sub_1800E7152.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18003FDD0(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x50uLL);
  return result;
}
