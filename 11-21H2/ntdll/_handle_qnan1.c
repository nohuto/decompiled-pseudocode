/*
 * XREFs of _handle_qnan1 @ 0x18009C75C
 * Callers:
 *     fabs @ 0x180097350 (fabs.c)
 * Callees:
 *     _errno @ 0x18008D010 (_errno.c)
 *     _umatherr @ 0x18009CAA8 (_umatherr.c)
 *     _ctrlfp @ 0x18009CD50 (_ctrlfp.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall handle_qnan1(int a1, double a2, __int64 a3, int a4)
{
  __m128 result; // xmm0

  if ( matherr_flag )
  {
    *errno() = 33;
    ctrlfp(a3, 65472LL);
    return *(__m128 *)&a2;
  }
  else
  {
    umatherr(1, a1, a3, a4, *(__int64 *)&a2, a3);
  }
  return result;
}
