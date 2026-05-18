/*
 * XREFs of sub_1800EF710 @ 0x1800EF710
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18001DC84 @ 0x18001DC84 (sub_18001DC84.c)
 *     sub_18002B9EC @ 0x18002B9EC (sub_18002B9EC.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 *     sub_18005D70C @ 0x18005D70C (sub_18005D70C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800EF710(__int64 a1, __int64 *a2, int *a3, int *a4)
{
  int v5; // esi
  int v6; // r14d
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v11[4]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v12[32]; // [rsp+70h] [rbp-9h] BYREF
  char *v13; // [rsp+90h] [rbp+17h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp+2Fh]

  v5 = *a4;
  v6 = *a3;
  v11[0] = *a2;
  v7 = v11[0];
  v11[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v11[2] = (__int64)v11;
  v8 = sub_18002B9EC(*(_QWORD *)(a1 + 8), (__int64 *)&v13);
  v9 = (__int64 *)sub_18001DC84((__int64)v12, v8);
  sub_18002BC44(v7, v9);
  if ( v14 >= 0x10 )
    sub_180010884(v13, v14 + 1);
  sub_18005D70C(
    v11[0],
    **(_DWORD **)(a1 + 16),
    **(_DWORD **)(a1 + 24),
    0,
    v6,
    0,
    v5 | **(_DWORD **)(a1 + 32),
    0LL,
    0,
    **(_QWORD **)(a1 + 40));
  return sub_180010910((__int64)v11);
}
