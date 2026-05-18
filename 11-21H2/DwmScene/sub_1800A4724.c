/*
 * XREFs of sub_1800A4724 @ 0x1800A4724
 * Callers:
 *     sub_1800A4630 @ 0x1800A4630 (sub_1800A4630.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A4724(
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
    return sub_1800A4DAC(a1, a2, a3, a6);
  if ( a5 > a7 )
    return sub_1800A4350(a1, a2, a3, a4, a5, a6, a7, a8);
  return sub_1800A4EEC(a1);
}
