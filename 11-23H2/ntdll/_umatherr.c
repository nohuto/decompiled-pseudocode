/*
 * XREFs of _umatherr @ 0x180098398
 * Callers:
 *     _except1 @ 0x180097CF0 (_except1.c)
 *     _handle_qnan1 @ 0x18009804C (_handle_qnan1.c)
 * Callees:
 *     _set_errno_from_matherr @ 0x180098360 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x180098644 (_ctrlfp.c)
 *     _matherr @ 0x18009965C (_matherr.c)
 */

double __fastcall umatherr(int a1, int a2, double a3, double a4, double a5, __int64 a6)
{
  int v7; // r8d
  _DWORD *v8; // rax
  struct _exception Except; // [rsp+20h] [rbp-30h] BYREF

  v7 = 0;
  v8 = &unk_180133BC0;
  while ( *v8 != a2 )
  {
    ++v7;
    v8 += 4;
    if ( (__int64)v8 >= (__int64)dword_180133D90 )
    {
      Except.name = 0LL;
LABEL_5:
      ctrlfp(a6, 65472LL);
      set_errno_from_matherr(a1);
      return a5;
    }
  }
  Except.name = (char *)*((_QWORD *)&unk_180133BC0 + 2 * v7 + 1);
  if ( !Except.name )
    goto LABEL_5;
  Except.arg1 = a3;
  Except.arg2 = a4;
  Except.retval = a5;
  Except.type = a1;
  ctrlfp(a6, 65472LL);
  if ( !matherr(&Except) )
    set_errno_from_matherr(a1);
  return Except.retval;
}
