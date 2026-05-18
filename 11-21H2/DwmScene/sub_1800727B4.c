/*
 * XREFs of sub_1800727B4 @ 0x1800727B4
 * Callers:
 *     sub_180076154 @ 0x180076154 (sub_180076154.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180036808 @ 0x180036808 (sub_180036808.c)
 *     sub_180037388 @ 0x180037388 (sub_180037388.c)
 *     sub_180057684 @ 0x180057684 (sub_180057684.c)
 *     sub_180057EA4 @ 0x180057EA4 (sub_180057EA4.c)
 *     sub_180069B6C @ 0x180069B6C (sub_180069B6C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800727B4(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char v4; // r14
  char v5; // r15
  int v6; // esi
  __int64 v7; // rdi
  bool v8; // al
  int v9; // r8d
  char v10; // cl
  char v11; // bl
  __int64 *v12; // rax
  __int64 v13; // r8
  __int64 v15[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16[4]; // [rsp+50h] [rbp-20h] BYREF

  v3 = sub_180036808(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &qword_1801F8458, 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &qword_1801F8478, 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &qword_1801F8498, 0LL);
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &qword_1801F8858, 0LL);
  v7 = sub_180037388(a1);
  v8 = v6 != 0;
  if ( v9 )
    v8 = 1;
  v10 = v8;
  if ( v4 )
    v10 = 1;
  v11 = v10;
  if ( v5 )
    v11 = 1;
  v12 = sub_18001875C(v16, (__int64)&qword_1801F5FF8);
  sub_180057684(v7, v15, (char **)v12);
  LOBYTE(v13) = v11;
  sub_180069B6C(v15[0], &qword_1801F61F8, v13);
  sub_180057EA4(v7);
  sub_180057EA4(v7);
  return sub_180010910((__int64)v15);
}
