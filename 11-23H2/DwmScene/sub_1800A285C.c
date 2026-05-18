/*
 * XREFs of sub_1800A285C @ 0x1800A285C
 * Callers:
 *     sub_1800A28B0 @ 0x1800A28B0 (sub_1800A28B0.c)
 *     sub_1800A28E0 @ 0x1800A28E0 (sub_1800A28E0.c)
 *     sub_1800EB3DA @ 0x1800EB3DA (sub_1800EB3DA.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_1800A285C(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x1D0uLL);
  return result;
}
