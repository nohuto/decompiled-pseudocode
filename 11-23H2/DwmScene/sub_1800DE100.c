/*
 * XREFs of sub_1800DE100 @ 0x1800DE100
 * Callers:
 *     sub_1800DE248 @ 0x1800DE248 (sub_1800DE248.c)
 *     sub_1800DE278 @ 0x1800DE278 (sub_1800DE278.c)
 *     sub_1800F1E34 @ 0x1800F1E34 (sub_1800F1E34.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_1800DE100(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0xC0uLL);
  return result;
}
