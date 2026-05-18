/*
 * XREFs of sub_1800D9910 @ 0x1800D9910
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009A1C8 @ 0x18009A1C8 (sub_18009A1C8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D9910(_QWORD *lpMem, char a2)
{
  __int64 v4; // rcx

  v4 = lpMem[13];
  if ( v4 )
  {
    lpMem[13] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_18009A1C8(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
