/*
 * XREFs of sub_1800156A0 @ 0x1800156A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800156A0(_QWORD *lpMem, char a2)
{
  __int64 v4; // rcx

  sub_180010910((__int64)(lpMem + 4));
  v4 = lpMem[3];
  if ( v4 )
  {
    lpMem[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *((_DWORD *)lpMem + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
