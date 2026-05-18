/*
 * XREFs of sub_1800B15EC @ 0x1800B15EC
 * Callers:
 *     sub_18003D0D8 @ 0x18003D0D8 (sub_18003D0D8.c)
 * Callees:
 *     sub_1800AF080 @ 0x1800AF080 (sub_1800AF080.c)
 *     sub_1800AF32C @ 0x1800AF32C (sub_1800AF32C.c)
 *     sub_1800AF520 @ 0x1800AF520 (sub_1800AF520.c)
 *     sub_1800AF9AC @ 0x1800AF9AC (sub_1800AF9AC.c)
 *     sub_1800AFE3C @ 0x1800AFE3C (sub_1800AFE3C.c)
 *     sub_1800B0270 @ 0x1800B0270 (sub_1800B0270.c)
 *     sub_1800B07A4 @ 0x1800B07A4 (sub_1800B07A4.c)
 *     sub_1800B0A30 @ 0x1800B0A30 (sub_1800B0A30.c)
 *     sub_1800B0CB8 @ 0x1800B0CB8 (sub_1800B0CB8.c)
 *     sub_1800B12C8 @ 0x1800B12C8 (sub_1800B12C8.c)
 *     sub_1800B14A8 @ 0x1800B14A8 (sub_1800B14A8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_1800B15EC(_QWORD *a1, __int64 a2, __int64 a3)
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
  sub_1800AF32C((__int64)a1, a3);
  sub_1800B0270((__int64)(a1 + 8), a3);
  v6 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 192LL))(a2, &v14);
  sub_1800AF520((__int64)(a1 + 145), *v6, a3);
  v7 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v16);
  sub_1800AF9AC((__int64)(a1 + 579), *v7, a3);
  sub_1800B0CB8((__int64)(a1 + 1157), a3);
  sub_1800B0A30((__int64)(a1 + 1213), a3);
  sub_1800AF080((__int64)(a1 + 1222), a3);
  v8 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a2 + 200LL))(a2, &v14);
  sub_1800AFE3C((__int64)(a1 + 1231), *v8, v15);
  sub_1800B07A4(a1 + 1809, v15);
  sub_1800B12C8((__int64)(a1 + 1817), v15);
  sub_1800B14A8((__int64)(a1 + 1828), v9);
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
