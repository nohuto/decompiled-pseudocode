/*
 * XREFs of sub_180067030 @ 0x180067030
 * Callers:
 *     <none>
 * Callees:
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180035320 @ 0x180035320 (sub_180035320.c)
 *     sub_18006798C @ 0x18006798C (sub_18006798C.c)
 *     sub_180067A64 @ 0x180067A64 (sub_180067A64.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180067030(unsigned int *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8

  sub_180035320((__int64)a1, a2);
  v3 = sub_180034094((__int64)a1, 1);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_1801D42C8, a1[147], 1LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD, __int64))(*(_QWORD *)v3 + 152LL))(v3, &unk_1801D4928, a1[136], 1LL);
  if ( a1[166] == 3 )
  {
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801D40E8, v4, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801D4088, v5, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801D40A8, v6, 1LL);
    (*(void (__fastcall **)(__int64, void *, __int64, __int64))(*(_QWORD *)v3 + 168LL))(v3, &unk_1801D40C8, v7, 1LL);
  }
  sub_180067A64(a1);
  sub_18006798C(a1);
  return sub_1800679F8(a1);
}
