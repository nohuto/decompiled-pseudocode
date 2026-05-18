/*
 * XREFs of sub_1800210CC @ 0x1800210CC
 * Callers:
 *     sub_1800362B0 @ 0x1800362B0 (sub_1800362B0.c)
 *     sub_1800385C0 @ 0x1800385C0 (sub_1800385C0.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_180039234 @ 0x180039234 (sub_180039234.c)
 *     sub_1800394BC @ 0x1800394BC (sub_1800394BC.c)
 *     sub_180039CAC @ 0x180039CAC (sub_180039CAC.c)
 *     sub_18003AD18 @ 0x18003AD18 (sub_18003AD18.c)
 *     sub_18003B574 @ 0x18003B574 (sub_18003B574.c)
 *     sub_18003BCD0 @ 0x18003BCD0 (sub_18003BCD0.c)
 *     sub_180070B80 @ 0x180070B80 (sub_180070B80.c)
 *     sub_1800710C0 @ 0x1800710C0 (sub_1800710C0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800210CC(_QWORD *a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  a1[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a1 + 4) = a4;
  a1[3] = a3;
  a1[4] = a5;
  a1[5] = a6;
  *((_BYTE *)a1 + 48) = 1;
  a1[7] = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 16LL) + 8LL))(*(_QWORD *)(*a1 + 16LL), &a5);
  a1[7] = a5;
  sub_180010910((__int64)a2);
  return a1;
}
