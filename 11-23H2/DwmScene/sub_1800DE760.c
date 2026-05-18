/*
 * XREFs of sub_1800DE760 @ 0x1800DE760
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DCF3C @ 0x1800DCF3C (sub_1800DCF3C.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_1800DE760(__int64 a1, _QWORD *a2, double a3)
{
  unsigned __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)sub_1800DCF3C(a1, a2, &v4) )
    return *(__m128 *)&a3;
  else
    return (__m128)v4;
}
