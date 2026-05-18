/*
 * XREFs of sub_180011690 @ 0x180011690
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800DEF9C @ 0x1800DEF9C (sub_1800DEF9C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180011690(_QWORD *lpMem, char a2)
{
  __int64 v4; // rcx

  v4 = lpMem[212];
  if ( v4 )
  {
    lpMem[212] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_1800DEF9C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
