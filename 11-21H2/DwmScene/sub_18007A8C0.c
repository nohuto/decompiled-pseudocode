/*
 * XREFs of sub_18007A8C0 @ 0x18007A8C0
 * Callers:
 *     sub_1800DF6B0 @ 0x1800DF6B0 (sub_1800DF6B0.c)
 *     sub_1800F2C64 @ 0x1800F2C64 (sub_1800F2C64.c)
 * Callees:
 *     sub_18002BCC0 @ 0x18002BCC0 (sub_18002BCC0.c)
 *     sub_18007A1F8 @ 0x18007A1F8 (sub_18007A1F8.c)
 *     sub_18007A618 @ 0x18007A618 (sub_18007A618.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007A8C0(__int64 *a1, _QWORD *a2, int a3)
{
  int v6; // r8d
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax

  sub_18002BCC0((__int64)a1, 1, 0);
  sub_18002BCC0(v7, v6 + 2, v6);
  sub_18002BCC0(v9, v8 + 4, v8);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_18007A618(a1, v12, v11, v10, a3, 0LL);
  sub_18007A1F8(a1, a2);
  return sub_180010910((__int64)a2);
}
