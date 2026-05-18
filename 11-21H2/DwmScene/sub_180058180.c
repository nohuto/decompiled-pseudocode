/*
 * XREFs of sub_180058180 @ 0x180058180
 * Callers:
 *     sub_180031EE8 @ 0x180031EE8 (sub_180031EE8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18004A344 @ 0x18004A344 (sub_18004A344.c)
 *     sub_180055F4C @ 0x180055F4C (sub_180055F4C.c)
 *     sub_180056524 @ 0x180056524 (sub_180056524.c)
 *     sub_180090184 @ 0x180090184 (sub_180090184.c)
 *     sub_180090304 @ 0x180090304 (sub_180090304.c)
 *     sub_180090D00 @ 0x180090D00 (sub_180090D00.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180058180(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-29h] BYREF
  __int64 v11; // [rsp+28h] [rbp-21h]
  char *v12[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v13; // [rsp+40h] [rbp-9h]
  unsigned __int64 v14; // [rsp+48h] [rbp-1h]
  char *v15; // [rsp+50h] [rbp+7h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+1Fh]
  char *v17; // [rsp+78h] [rbp+2Fh]
  __int128 v18; // [rsp+80h] [rbp+37h]

  v2 = sub_180056524((__int128 *)a1, v12, 1u);
  v3 = *v2;
  v4 = v2[1];
  *v2 = 0LL;
  v2[1] = 0LL;
  v10 = *(_QWORD *)(a1 + 18632);
  *(_QWORD *)(a1 + 18632) = v3;
  v11 = *(_QWORD *)(a1 + 18640);
  *(_QWORD *)(a1 + 18640) = v4;
  sub_180010910((__int64)&v10);
  sub_180010910((__int64)v12);
  v5 = *(_QWORD *)(a1 + 18632);
  v13 = 0LL;
  v14 = 15LL;
  LOBYTE(v12[0]) = 0;
  sub_180012190((__int64 *)v12, "Global", 6uLL);
  sub_180090D00(v5, v12);
  if ( v14 >= 0x10 )
    sub_180010884(v12[0], v14 + 1);
  sub_180090304(*(_QWORD *)(a1 + 18632));
  v6 = (__int64 *)sub_180090184(*(_QWORD *)(a1 + 18632), v12);
  v7 = *v6;
  v8 = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  v10 = *(_QWORD *)(a1 + 18648);
  *(_QWORD *)(a1 + 18648) = v7;
  v11 = *(_QWORD *)(a1 + 18656);
  *(_QWORD *)(a1 + 18656) = v8;
  sub_180010910((__int64)&v10);
  sub_180010910((__int64)v12);
  v13 = 0LL;
  v14 = 15LL;
  LOBYTE(v12[0]) = 0;
  sub_180012190((__int64 *)v12, "Global/RenderTargetSize", 0x17uLL);
  sub_18004A344((__int64)&v15, (__int64)v12, 5);
  result = sub_180055F4C(a1);
  if ( v17 )
  {
    result = sub_180010884(v17, (*((_QWORD *)&v18 + 1) - (_QWORD)v17) & 0xFFFFFFFFFFFFFFFCuLL);
    v17 = 0LL;
    v18 = 0LL;
  }
  if ( v16 >= 0x10 )
    return sub_180010884(v15, v16 + 1);
  return result;
}
