/*
 * XREFs of sub_1800D9890 @ 0x1800D9890
 * Callers:
 *     sub_1800DDB00 @ 0x1800DDB00 (sub_1800DDB00.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800FED60 @ 0x1800FED60 (sub_1800FED60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800D9890(_QWORD *lpMem, char a2)
{
  __int64 v4; // rcx

  sub_180010910((__int64)(lpMem + 15));
  sub_180010910((__int64)(lpMem + 13));
  v4 = lpMem[12];
  if ( v4 )
  {
    lpMem[12] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  sub_1800FED60(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B998(lpMem);
  return lpMem;
}
