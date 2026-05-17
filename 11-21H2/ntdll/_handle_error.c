/*
 * XREFs of _handle_error @ 0x18009BCB0
 * Callers:
 *     atan @ 0x180095DA0 (atan.c)
 *     atan2 @ 0x180096000 (atan2.c)
 *     ceil @ 0x180096950 (ceil.c)
 *     cos @ 0x180096A70 (cos.c)
 *     sin @ 0x180096E90 (sin.c)
 *     floor @ 0x180097440 (floor.c)
 *     log @ 0x1800976F0 (log.c)
 *     sqrt @ 0x1800983F0 (sqrt.c)
 *     tan @ 0x1800992A0 (tan.c)
 *     _pow_special @ 0x18009CE50 (_pow_special.c)
 * Callees:
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _call_matherr @ 0x18009BB84 (_call_matherr.c)
 *     _exception_enabled @ 0x18009BBF0 (_exception_enabled.c)
 *     _raise_exc @ 0x18009C7C4 (_raise_exc.c)
 *     _set_errno_from_matherr @ 0x18009CA74 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x18009CD50 (_ctrlfp.c)
 */

double __fastcall handle_error(
        char *a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        double a7,
        double a8,
        int a9)
{
  BOOL v13; // eax
  double v14; // xmm6_8
  double v16; // [rsp+48h] [rbp-91h] BYREF
  __int64 v17; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v18[8]; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v19; // [rsp+98h] [rbp-41h]

  v17 = ctrlfp(8064LL, 65472LL);
  v16 = *(double *)&a3;
  v13 = exception_enabled(a5, v17);
  v14 = a8;
  if ( !v13 )
  {
    if ( a9 == 2 )
    {
      *(double *)&v18[6] = a8;
      v19 = v19 & 0xFFFFFFE0 | 3;
    }
    raise_exc((unsigned int)v18, (unsigned int)&v17, a5, a2, (__int64)&a7, (__int64)&v16);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, a7, v14, v16, v17);
  set_errno_from_matherr(a4);
  ctrlfp(v17, 65472LL);
  return v16;
}
