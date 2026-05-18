/*
 * XREFs of sub_180068C20 @ 0x180068C20
 * Callers:
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_180034094 @ 0x180034094 (sub_180034094.c)
 *     sub_180034870 @ 0x180034870 (sub_180034870.c)
 *     sub_1800502A4 @ 0x1800502A4 (sub_1800502A4.c)
 *     sub_180050854 @ 0x180050854 (sub_180050854.c)
 *     sub_180061204 @ 0x180061204 (sub_180061204.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180068C20(__int64 a1, __int64 a2)
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
  _QWORD *v12; // rax
  __int64 result; // rax
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  _QWORD v16[4]; // [rsp+50h] [rbp-20h] BYREF

  v3 = sub_180034094(a1, *(_DWORD *)(*(_QWORD *)a2 + 112LL));
  v4 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_1801D43E8, 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 64LL))(v3, &unk_1801D4408, 0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1801D4428, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, &unk_1801D47E8, 0LL);
  v7 = sub_180034870(a1);
  v8 = v6 != 0;
  if ( v9 )
    v8 = 1;
  v10 = v8;
  if ( v4 )
    v10 = 1;
  v11 = v10;
  if ( v5 )
    v11 = 1;
  v12 = sub_180017648(v16, (__int64)&unk_1801D7EC8);
  sub_1800502A4(v7, &v14, v12);
  sub_180061204(v14, qword_1801D8228, v11);
  sub_180050854(v7);
  result = sub_180050854(v7);
  if ( v15 )
    return sub_180010530(v15);
  return result;
}
