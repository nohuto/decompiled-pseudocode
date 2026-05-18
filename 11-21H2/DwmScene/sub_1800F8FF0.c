/*
 * XREFs of sub_1800F8FF0 @ 0x1800F8FF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F72B4 @ 0x1800F72B4 (sub_1800F72B4.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_1800F8FF0(__int64 a1, _QWORD *a2, double a3)
{
  unsigned __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)sub_1800F72B4(a1, a2, &v4) )
    return *(__m128 *)&a3;
  else
    return (__m128)v4;
}
