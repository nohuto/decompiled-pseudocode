/*
 * XREFs of sub_18007F724 @ 0x18007F724
 * Callers:
 *     sub_18007F0F0 @ 0x18007F0F0 (sub_18007F0F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 *     sub_18003D2BC @ 0x18003D2BC (sub_18003D2BC.c)
 *     sub_1800B4528 @ 0x1800B4528 (sub_1800B4528.c)
 *     sub_1800B4684 @ 0x1800B4684 (sub_1800B4684.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall sub_18007F724(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v13; // [rsp+20h] [rbp-29h] BYREF
  __int128 v14; // [rsp+30h] [rbp-19h] BYREF
  _QWORD **v15[2]; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp+7h] BYREF
  char *v17[3]; // [rsp+60h] [rbp+17h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+2Fh]

  *(_QWORD *)&v13 = a2;
  v6 = sub_180028460(*a4);
  v7 = *(_QWORD *)(v6 + 8);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(v6 + 8);
  }
  v15[0] = *(_QWORD ***)v6;
  v15[1] = (_QWORD **)v7;
  v17[2] = 0LL;
  v18 = 15LL;
  LOBYTE(v17[0]) = 0;
  sub_180012190((__int64 *)v17, "IPM_ResolveMultisampledInput", 0x1CuLL);
  sub_1800B4528(v16, v15, v17);
  if ( v18 >= 0x10 )
    sub_180010884(v17[0], v18 + 1);
  v8 = a1[57];
  v14 = 0LL;
  v9 = *(_QWORD *)(v8 + 144);
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  v14 = *(_OWORD *)(v8 + 136);
  v13 = 0LL;
  v10 = a1[9];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a1[9];
  }
  *(_QWORD *)&v13 = a1[8];
  *((_QWORD *)&v13 + 1) = v10;
  sub_18003D2BC(v15[0], (__int64)&v13, (__int64)&v14);
  *a2 = 0LL;
  a2[1] = 0LL;
  v11 = a1[9];
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  *a2 = a1[8];
  a2[1] = a1[9];
  sub_180010910((__int64)&v13);
  sub_180010910((__int64)&v14);
  sub_1800B4684(v16);
  sub_180010910((__int64)v15);
  return a2;
}
