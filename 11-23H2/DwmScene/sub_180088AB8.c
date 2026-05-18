/*
 * XREFs of sub_180088AB8 @ 0x180088AB8
 * Callers:
 *     sub_180088970 @ 0x180088970 (sub_180088970.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180026650 @ 0x180026650 (sub_180026650.c)
 *     sub_180029550 @ 0x180029550 (sub_180029550.c)
 *     sub_180029700 @ 0x180029700 (sub_180029700.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 *     sub_180088F6C @ 0x180088F6C (sub_180088F6C.c)
 *     sub_18008B478 @ 0x18008B478 (sub_18008B478.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180088AB8(__int64 *a1, __int64 *a2)
{
  _DWORD *v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r9d
  int v8; // r8d
  unsigned int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  __int64 v14; // [rsp+38h] [rbp-20h]
  char v15[24]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  sub_180029550((__int64)a1, a2);
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 56))(a1, &v13, *a2);
  v4 = (_DWORD *)a1[14];
  if ( v4 )
  {
    v5 = v4[5];
    v6 = v4[6];
    v7 = v4[4];
    v8 = v4[2];
  }
  else
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
  }
  sub_18008B478(v13, a1[17], v8, v7, v6, v5);
  v9 = sub_180026650(*a2);
  v16 = v9;
  v10 = sub_180054270(a1 + 15, (__int64)v15, &v16);
  sub_180011020((_QWORD *)(*(_QWORD *)v10 + 40LL), &v13);
  v11 = a1[14];
  if ( v11 && *(_DWORD *)(v11 + 24) == 2 )
    sub_180088F6C(a1, *a2);
  result = sub_180029700((__int64)a1, v9);
  if ( v14 )
    return sub_180010530(v14);
  return result;
}
