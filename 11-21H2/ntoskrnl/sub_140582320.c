/*
 * XREFs of sub_140582320 @ 0x140582320
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402341A4 @ 0x1402341A4 (sub_1402341A4.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_14027D2D8 @ 0x14027D2D8 (sub_14027D2D8.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402D94D8 @ 0x1402D94D8 (sub_1402D94D8.c)
 *     sub_1402D96AC @ 0x1402D96AC (sub_1402D96AC.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402EA95C @ 0x1402EA95C (sub_1402EA95C.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_140313B20 @ 0x140313B20 (sub_140313B20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     sub_14039FDB0 @ 0x14039FDB0 (sub_14039FDB0.c)
 *     sub_1403B1DEC @ 0x1403B1DEC (sub_1403B1DEC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140582214 @ 0x140582214 (sub_140582214.c)
 *     sub_1405B1974 @ 0x1405B1974 (sub_1405B1974.c)
 */

__int64 __fastcall sub_140582320(__int64 *a1, unsigned __int64 a2, int a3)
{
  int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // eax
  char *v11; // r9
  int v12; // eax
  bool v13; // zf
  signed __int64 v14; // r12
  __m128i *v15; // r15
  int v16; // eax
  ULONG_PTR v18; // r12
  int v19; // ebx
  int v20; // eax
  __m128i *v21; // rdx
  __int64 v22; // r12
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int128 v27[7]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v28[7]; // [rsp+C0h] [rbp-40h] BYREF

  v5 = 0;
  v24 = 0LL;
  memset(v27, 0, sizeof(v27));
  if ( a3 )
    return 0LL;
  v6 = a1[21];
  v7 = *(_QWORD *)(v6 + 8);
  v26 = v7;
  v25 = a1[6];
  v8 = (__int64)(a2 << 25) >> 16;
  while ( 1 )
  {
    v23 = sub_140317A10(a2);
    v9 = v23;
    if ( (v23 & 1) != 0 )
      break;
    sub_1402341A4((__int64)a1);
    v10 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 == 1 )
    {
      sub_1402D94D8(v7 + 160, 0);
      v10 = *(_DWORD *)v6;
    }
    v11 = 0LL;
    if ( !v10 )
    {
      LOWORD(v27[1]) = 6;
      v11 = (char *)&v27[1] + 1;
      *((_QWORD *)&v27[1] + 1) = 0LL;
      memset(&v27[2], 0, 24);
    }
    v12 = sub_14031C860(0LL, (__int64)(a2 << 25) >> 16, 0, (ULONG_PTR)v11);
    v13 = *(_DWORD *)v6 == 1;
    LODWORD(v23) = v12;
    if ( v13 )
      sub_1402D96AC(v7 + 160, 0LL);
    sub_14027D2D8((__int64)a1, v25, 0);
    if ( (int)v23 < 0 )
      return 5LL;
  }
  v14 = 48 * (((unsigned __int64)sub_140317A10((unsigned __int64)&v23) >> 12) & 0xFFFFFFFFFFLL);
  v15 = (__m128i *)(v14 - 0x220000000000LL);
  v16 = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
    if ( v9 >= 0 )
    {
      *(_DWORD *)(v6 + 24) |= 1u;
      return 5LL;
    }
    if ( v15[2].m128i_i64[1] >= 0 && (unsigned int)sub_140313B20(v14 - 0x220000000000LL, 0, 0LL) )
    {
      *(_DWORD *)(v6 + 24) |= 2u;
      return 5LL;
    }
    goto LABEL_34;
  }
  if ( v16 == 1 )
  {
    sub_140582214(v26, a1[3], v8);
    goto LABEL_34;
  }
  if ( v16 != 2 )
  {
    v22 = 0xAAAAAAAAAAAAAAABuLL * (v14 >> 4);
    *(_QWORD *)&v27[0] = v8;
    if ( (int)sub_14039FDB0(v22, v27, 256) < 0 )
      KeBugCheckEx(0x1Au, 0x1106uLL, (ULONG_PTR)v15, v8, 0LL);
    memset(v28, 0, 0x68uLL);
    *((_QWORD *)&v28[0] + 1) = v22;
    v28[1] = v27[0];
    if ( (int)sub_140358A20(2u, 257, 0, (__int64)v28) < 0 )
      KeBugCheckEx(0x1Au, 0x1107uLL, v8, 0LL, 0LL);
    sub_14026C644((ULONG_PTR)v15, 0);
    goto LABEL_34;
  }
  if ( v15[2].m128i_i16[0] != 1
    || sub_140277C50(v14 - 0x220000000000LL) && (unsigned int)sub_1403B1DEC(v14 - 0x220000000000LL, 1) )
  {
LABEL_34:
    ++*(_QWORD *)(v6 + 16);
    return 0LL;
  }
  v18 = 0xAAAAAAAAAAAAAAABuLL * (v14 >> 4);
  v19 = *((_DWORD *)sub_1402C1550(v18) + 2);
  v20 = sub_1402E8990((__int64)v15);
  if ( sub_1402EB440(
         (__int64)&StartContext,
         1,
         (v20 << byte_140C506CD) | dword_140C50738 & v18 | (v19 << byte_140C506CC),
         2,
         &v24,
         0) != -1 )
  {
    LOBYTE(v5) = sub_140277C50((__int64)v15);
    sub_1402EA95C(v15, v21, v8, 0, 2u, v5);
    v15[1].m128i_i64[0] = 0LL;
    sub_1402E89B0((unsigned __int64 *)&v15[1]);
    sub_140268408((__int64)v15);
    goto LABEL_34;
  }
  if ( !v24 )
    return 5LL;
  sub_1402341A4((__int64)a1);
  sub_1405B1974(v24, &StartContext, 1LL, 0LL);
  sub_14027D2D8((__int64)a1, v25, 0);
  return 2LL;
}
