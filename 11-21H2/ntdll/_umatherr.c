/*
 * XREFs of _umatherr @ 0x18009CAA8
 * Callers:
 *     _except1 @ 0x18009C400 (_except1.c)
 *     _handle_qnan1 @ 0x18009C75C (_handle_qnan1.c)
 * Callees:
 *     _set_errno_from_matherr @ 0x18009CA74 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x18009CD50 (_ctrlfp.c)
 *     _matherr @ 0x18009DD1C (_matherr.c)
 */

double __fastcall umatherr(int a1, int a2, double a3, double a4, double a5, __int64 a6)
{
  _DWORD *v7; // rax
  int v8; // r8d
  struct _exception Except; // [rsp+20h] [rbp-30h] BYREF

  v7 = &unk_18012CB30;
  v8 = 0;
  while ( *v7 != a2 )
  {
    ++v8;
    v7 += 4;
    if ( (__int64)v7 >= (__int64)dword_18012CD00 )
    {
      Except.name = 0LL;
LABEL_5:
      ctrlfp(a6, 65472LL);
      set_errno_from_matherr(a1);
      return a5;
    }
  }
  Except.name = (char *)*((_QWORD *)&unk_18012CB30 + 2 * v8 + 1);
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
