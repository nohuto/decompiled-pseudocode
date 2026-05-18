/*
 * XREFs of sub_1800A4768 @ 0x1800A4768
 * Callers:
 *     sub_1800A46AC @ 0x1800A46AC (sub_1800A46AC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A4768(
        float *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  if ( a4 <= a5 && a4 <= a7 )
    return sub_1800A4E4C(a1, a2, a3, a6);
  if ( a5 > a7 )
    return sub_1800A44C0(a1, a2, a3, a4, a5, a6, a7, a8);
  return sub_1800A4FA4(a1);
}
