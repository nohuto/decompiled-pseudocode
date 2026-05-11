/*
 * XREFs of _handle_error @ 0x1C0019898
 * Callers:
 *     log10 @ 0x1C0019418 (log10.c)
 *     _pow_special @ 0x1C00199E0 (_pow_special.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0009730 (__security_check_cookie.c)
 *     _set_errno_from_matherr @ 0x1C00192C0 (_set_errno_from_matherr.c)
 *     _call_matherr @ 0x1C0019758 (_call_matherr.c)
 *     _exception_enabled @ 0x1C00197D4 (_exception_enabled.c)
 *     _raise_exc @ 0x1C0019BC0 (_raise_exc.c)
 *     _ctrlfp @ 0x1C0019EA8 (_ctrlfp.c)
 *     memset @ 0x1C001AF80 (memset.c)
 */

double __fastcall handle_error(
        char *a1,
        int a2,
        __int64 a3,
        int a4,
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
  _QWORD v18[14]; // [rsp+58h] [rbp-81h] BYREF

  v17 = ctrlfp(8064LL, 65472LL);
  v16 = *(double *)&a3;
  v13 = exception_enabled(a5, v17);
  v14 = a8;
  if ( !v13 )
  {
    memset(v18, 0, sizeof(v18));
    if ( a9 == 2 )
    {
      *(double *)&v18[6] = a8;
      LODWORD(v18[8]) = 3;
    }
    raise_exc((unsigned int)v18, (unsigned int)&v17, a5, a2, (__int64)&a7, (__int64)&v16);
  }
  if ( !matherr_flag && a4 )
    return call_matherr(a4, a6, a1, a7, v14, v16, v17);
  set_errno_from_matherr();
  ctrlfp(v17, 65472LL);
  return v16;
}
