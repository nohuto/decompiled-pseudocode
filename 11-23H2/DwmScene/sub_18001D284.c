/*
 * XREFs of sub_18001D284 @ 0x18001D284
 * Callers:
 *     sub_18001C8BC @ 0x18001C8BC (sub_18001C8BC.c)
 *     sub_18004EA38 @ 0x18004EA38 (sub_18004EA38.c)
 *     sub_180052818 @ 0x180052818 (sub_180052818.c)
 *     sub_1800E47E1 @ 0x1800E47E1 (sub_1800E47E1.c)
 *     sub_1800E7140 @ 0x1800E7140 (sub_1800E7140.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18001D284(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x68uLL);
  return result;
}
