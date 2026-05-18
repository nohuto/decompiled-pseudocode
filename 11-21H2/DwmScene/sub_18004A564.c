/*
 * XREFs of sub_18004A564 @ 0x18004A564
 * Callers:
 *     sub_18004A774 @ 0x18004A774 (sub_18004A774.c)
 *     sub_18004B9DC @ 0x18004B9DC (sub_18004B9DC.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18004A2A8 @ 0x18004A2A8 (sub_18004A2A8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004A564(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  unsigned __int64 v6; // rdx
  float v8; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+24h] [rbp-44h] BYREF
  _QWORD v10[5]; // [rsp+30h] [rbp-38h] BYREF

  v10[2] = a1;
  v10[4] = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 2;
  v8 = a4;
  v10[0] = &v8;
  v10[1] = &v9;
  sub_18004A2A8((char **)(a1 + 40), (__int64)v10);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 >= 0x10 )
    sub_180010884(*(char **)a2, v6 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
