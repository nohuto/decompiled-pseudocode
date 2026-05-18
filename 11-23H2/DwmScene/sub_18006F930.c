/*
 * XREFs of sub_18006F930 @ 0x18006F930
 * Callers:
 *     sub_1800C9360 @ 0x1800C9360 (sub_1800C9360.c)
 *     sub_1800D9AF0 @ 0x1800D9AF0 (sub_1800D9AF0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180029870 @ 0x180029870 (sub_180029870.c)
 *     sub_18006F308 @ 0x18006F308 (sub_18006F308.c)
 *     sub_18006F6C0 @ 0x18006F6C0 (sub_18006F6C0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18006F930(__int64 *a1, _QWORD *a2, int a3)
{
  int v6; // r8d
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned int v12; // eax
  __int64 *result; // rax
  __int64 v14; // rcx

  sub_180029870((__int64)a1, 1, 0);
  sub_180029870(v7, v6 + 2, v6);
  sub_180029870(v9, v8 + 4, v8);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 64LL))(*a2);
  v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 56LL))(*a2);
  sub_18006F6C0(a1, v12, v11, v10, a3, 0LL);
  result = sub_18006F308(a1, a2);
  v14 = a2[1];
  if ( v14 )
    return (__int64 *)sub_180010530(v14);
  return result;
}
