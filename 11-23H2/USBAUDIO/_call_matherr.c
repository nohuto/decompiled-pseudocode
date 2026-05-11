/*
 * XREFs of _call_matherr @ 0x1C0019758
 * Callers:
 *     _handle_error @ 0x1C0019898 (_handle_error.c)
 * Callees:
 *     _set_errno_from_matherr @ 0x1C00192C0 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x1C0019EA8 (_ctrlfp.c)
 *     _matherr @ 0x1C0019F6C (_matherr.c)
 */

double __fastcall call_matherr(int a1, __int64 a2, char *a3, double a4, double a5, double a6, __int64 a7)
{
  _exception Except; // [rsp+20h] [rbp-38h] BYREF

  Except.type = a1;
  *(&Except.type + 1) = 0;
  Except.arg1 = a4;
  Except.arg2 = a5;
  Except.retval = a6;
  Except.name = a3;
  ctrlfp(a7, 65472LL);
  if ( !matherr(&Except) )
    set_errno_from_matherr();
  return Except.retval;
}
