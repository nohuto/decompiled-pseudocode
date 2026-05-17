/*
 * XREFs of _call_matherr @ 0x18009747C
 * Callers:
 *     _handle_error @ 0x1800975A8 (_handle_error.c)
 * Callees:
 *     _set_errno_from_matherr @ 0x180098360 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x180098644 (_ctrlfp.c)
 *     _matherr @ 0x18009965C (_matherr.c)
 */

double __fastcall call_matherr(unsigned int a1, __int64 a2, char *a3, double a4, double a5, double a6, __int64 a7)
{
  _exception Except; // [rsp+20h] [rbp-38h] BYREF

  Except.type = a1;
  Except.arg2 = a5;
  Except.retval = a6;
  Except.arg1 = a4;
  Except.name = a3;
  ctrlfp(a7, 65472LL);
  if ( !matherr(&Except) )
    set_errno_from_matherr(a1);
  return Except.retval;
}
