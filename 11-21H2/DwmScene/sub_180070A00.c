/*
 * XREFs of sub_180070A00 @ 0x180070A00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180038300 @ 0x180038300 (sub_180038300.c)
 *     sub_1800714CC @ 0x1800714CC (sub_1800714CC.c)
 *     sub_1800715A4 @ 0x1800715A4 (sub_1800715A4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180070A00(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  sub_180038300((__int64)a1, a2);
  v3 = sub_180036808((__int64)a1, 1);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(
    v3,
    &qword_1801F8338,
    a1[147],
    1LL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(
    v3,
    &qword_1801F8998,
    a1[136],
    1LL);
  if ( a1[166] == 3 )
  {
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(
      v3,
      &qword_1801F8158,
      v4,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(
      v3,
      &qword_1801F80F8,
      v5,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(
      v3,
      &qword_1801F8118,
      v6,
      1LL);
    (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(
      v3,
      &qword_1801F8138,
      v7,
      1LL);
  }
  sub_1800715A4(a1);
  sub_1800714CC(a1);
  return sub_180071538(a1);
}
