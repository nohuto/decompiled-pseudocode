/*
 * XREFs of sub_1800B60F8 @ 0x1800B60F8
 * Callers:
 *     sub_1800B3504 @ 0x1800B3504 (sub_1800B3504.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800B3DDC @ 0x1800B3DDC (sub_1800B3DDC.c)
 *     sub_1800B4738 @ 0x1800B4738 (sub_1800B4738.c)
 *     sub_1800B4B60 @ 0x1800B4B60 (sub_1800B4B60.c)
 *     sub_1800FC250 @ 0x1800FC250 (sub_1800FC250.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800B60F8(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int128 v13; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v15; // [rsp+50h] [rbp-B0h]
  __int64 v16; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v17[8]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[24]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v19[184]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v20[184]; // [rsp+138h] [rbp+38h] BYREF
  __int64 v21; // [rsp+1F0h] [rbp+F0h]

  v21 = a2;
  v15 = a3;
  v6 = a1 + 110;
  v7 = a1[114];
  v14 = 0LL;
  v8 = a1[113];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a1[113];
  }
  *(_QWORD *)&v14 = a1[112];
  *((_QWORD *)&v14 + 1) = v8;
  v13 = 0LL;
  v9 = a3[1];
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    v9 = a3[1];
  }
  *(_QWORD *)&v13 = *a3;
  *((_QWORD *)&v13 + 1) = v9;
  v10 = sub_1800B4B60((__int64)v17, 0, &v13, &v14, v7);
  sub_1800B4738(v6, &v16, a2, v10);
  sub_1800B3DDC((__int64)v20);
  sub_1800B3DDC((__int64)v19);
  sub_1800FC250(v18);
  v11 = *(_QWORD *)(a2 + 24);
  if ( v11 >= 0x10 )
    sub_180010884(*(char **)a2, v11 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return sub_180010910((__int64)a3);
}
