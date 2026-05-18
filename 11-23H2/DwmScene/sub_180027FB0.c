/*
 * XREFs of sub_180027FB0 @ 0x180027FB0
 * Callers:
 *     sub_180028034 @ 0x180028034 (sub_180028034.c)
 *     sub_1800989E0 @ 0x1800989E0 (sub_1800989E0.c)
 *     sub_1800E4E60 @ 0x1800E4E60 (sub_1800E4E60.c)
 *     sub_1800E7F34 @ 0x1800E7F34 (sub_1800E7F34.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_180027FB0(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x38uLL);
  return result;
}
