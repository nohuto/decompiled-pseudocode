/*
 * XREFs of sub_18009F624 @ 0x18009F624
 * Callers:
 *     sub_180039000 @ 0x180039000 (sub_180039000.c)
 * Callees:
 *     sub_18009D860 @ 0x18009D860 (sub_18009D860.c)
 *     sub_18009DA50 @ 0x18009DA50 (sub_18009DA50.c)
 *     sub_18009DBD0 @ 0x18009DBD0 (sub_18009DBD0.c)
 *     sub_18009DF74 @ 0x18009DF74 (sub_18009DF74.c)
 *     sub_18009E320 @ 0x18009E320 (sub_18009E320.c)
 *     sub_18009E648 @ 0x18009E648 (sub_18009E648.c)
 *     sub_18009EAA8 @ 0x18009EAA8 (sub_18009EAA8.c)
 *     sub_18009ECCC @ 0x18009ECCC (sub_18009ECCC.c)
 *     sub_18009EE9C @ 0x18009EE9C (sub_18009EE9C.c)
 *     sub_18009F2E8 @ 0x18009F2E8 (sub_18009F2E8.c)
 *     sub_18009F4E0 @ 0x18009F4E0 (sub_18009F4E0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_18009F624(_QWORD *a1, __int64 a2, __int64 a3)
{
  int *v6; // rax
  int *v7; // rax
  int *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r8
  _QWORD *v11; // rcx
  char v14; // [rsp+78h] [rbp+10h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h]
  char v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = a3;
  sub_18009DA50((__int64)a1, a3);
  sub_18009E648((__int64)(a1 + 8), a3);
  v6 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 192LL))(a2, &v14);
  sub_18009DBD0((__int64)(a1 + 145), *v6, a3);
  v7 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v16);
  sub_18009DF74((__int64)(a1 + 579), *v7, a3);
  sub_18009EE9C((__int64)(a1 + 1157), a3);
  sub_18009ECCC((__int64)(a1 + 1213), a3);
  sub_18009D860((__int64)(a1 + 1222), a3);
  v8 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v14);
  sub_18009E320((__int64)(a1 + 1231), *v8, v15);
  sub_18009EAA8(a1 + 1809, v15);
  sub_18009F2E8((__int64)(a1 + 1817), v15);
  sub_18009F4E0((__int64)(a1 + 1828), v9);
  *a1 = &Spectre::Engine::CommandListState::`vftable';
  a1[8] = &Spectre::Engine::CommandListState::`vftable';
  a1[145] = &Spectre::Engine::CommandListState::`vftable';
  a1[579] = &Spectre::Engine::CommandListState::`vftable';
  a1[1157] = &Spectre::Engine::CommandListState::`vftable';
  a1[1213] = &Spectre::Engine::CommandListState::`vftable';
  a1[1222] = &Spectre::Engine::CommandListState::`vftable';
  a1[1231] = &Spectre::Engine::CommandListState::`vftable';
  a1[1809] = &Spectre::Engine::CommandListState::`vftable';
  *v10 = &Spectre::Engine::CommandListState::`vftable';
  *v11 = &Spectre::Engine::CommandListState::`vftable';
  return a1;
}
