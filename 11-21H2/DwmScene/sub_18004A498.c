/*
 * XREFs of sub_18004A498 @ 0x18004A498
 * Callers:
 *     sub_18004B9DC @ 0x18004B9DC (sub_18004B9DC.c)
 *     sub_18004C088 @ 0x18004C088 (sub_18004C088.c)
 *     sub_18008AF50 @ 0x18008AF50 (sub_18008AF50.c)
 *     sub_18008CCE4 @ 0x18008CCE4 (sub_18008CCE4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18004A2A8 @ 0x18004A2A8 (sub_18004A2A8.c)
 */

__int64 __fastcall sub_18004A498(__int64 a1, __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned __int64 v6; // rdx
  _QWORD v8[5]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF

  v8[2] = a1;
  v8[4] = a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *(_DWORD *)(a1 + 32) = 5;
  v9 = *a4;
  v8[0] = &v9;
  v8[1] = &v10;
  sub_18004A2A8((char **)(a1 + 40), (__int64)v8);
  v6 = *(_QWORD *)(a2 + 24);
  if ( v6 >= 0x10 )
    sub_180010884(*(char **)a2, v6 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
