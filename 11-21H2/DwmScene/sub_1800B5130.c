/*
 * XREFs of sub_1800B5130 @ 0x1800B5130
 * Callers:
 *     sub_1800B2EE0 @ 0x1800B2EE0 (sub_1800B2EE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180020870 @ 0x180020870 (sub_180020870.c)
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 *     sub_1800B4738 @ 0x1800B4738 (sub_1800B4738.c)
 *     sub_1800B4B60 @ 0x1800B4B60 (sub_1800B4B60.c)
 *     sub_1800FC250 @ 0x1800FC250 (sub_1800FC250.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800B5130(_QWORD *a1, char **a2, _QWORD *a3)
{
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v15; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v16; // [rsp+58h] [rbp-A8h]
  _BYTE v17[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v19[184]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v20[184]; // [rsp+138h] [rbp+38h] BYREF
  char **v21; // [rsp+1F0h] [rbp+F0h]
  char *v22[3]; // [rsp+1F8h] [rbp+F8h] BYREF
  unsigned __int64 v23; // [rsp+210h] [rbp+110h]

  v21 = a2;
  v16 = a3;
  sub_180020870((__int64)v22, a2);
  (*(void (__fastcall **)(_QWORD, char **))(*(_QWORD *)*a3 + 64LL))(*a3, v22);
  v6 = a1[114];
  v15 = 0LL;
  v7 = a1[113];
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
    v7 = a1[113];
  }
  *(_QWORD *)&v15 = a1[112];
  *((_QWORD *)&v15 + 1) = v7;
  v14 = 0LL;
  v8 = a3[1];
  if ( v8 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    v8 = a3[1];
  }
  *(_QWORD *)&v14 = *a3;
  *((_QWORD *)&v14 + 1) = v8;
  v9 = sub_1800B4B60((__int64)v17, 1, &v14, &v15, v6);
  sub_1800B4738(a1 + 110, &v13, (__int64)a2, v9);
  sub_1800B3DDC((__int64)v20);
  sub_1800B3DDC((__int64)v19);
  sub_1800FC250(v18);
  v10 = v13;
  if ( v23 >= 8 )
    sub_180010884(v22[0], 2 * v23 + 2);
  v22[2] = 0LL;
  v23 = 7LL;
  LOWORD(v22[0]) = 0;
  v11 = (unsigned __int64)a2[3];
  if ( v11 >= 0x10 )
    sub_180010884(*a2, v11 + 1);
  a2[2] = 0LL;
  a2[3] = (char *)15;
  *(_BYTE *)a2 = 0;
  sub_180010910((__int64)a3);
  return v10 + 64;
}
