/*
 * XREFs of sub_14053EBD8 @ 0x14053EBD8
 * Callers:
 *     sub_140911B58 @ 0x140911B58 (sub_140911B58.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_1406893EC @ 0x1406893EC (sub_1406893EC.c)
 *     sub_14069FD1C @ 0x14069FD1C (sub_14069FD1C.c)
 *     sub_14069FFC0 @ 0x14069FFC0 (sub_14069FFC0.c)
 *     sub_14069FFE8 @ 0x14069FFE8 (sub_14069FFE8.c)
 *     sub_1406CA514 @ 0x1406CA514 (sub_1406CA514.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14083D1A4 @ 0x14083D1A4 (sub_14083D1A4.c)
 *     sub_14083D56C @ 0x14083D56C (sub_14083D56C.c)
 *     sub_140910FCC @ 0x140910FCC (sub_140910FCC.c)
 *     sub_14091103C @ 0x14091103C (sub_14091103C.c)
 *     sub_14091111C @ 0x14091111C (sub_14091111C.c)
 *     sub_140911208 @ 0x140911208 (sub_140911208.c)
 *     sub_140911EA8 @ 0x140911EA8 (sub_140911EA8.c)
 *     sub_14091CA34 @ 0x14091CA34 (sub_14091CA34.c)
 *     sub_14091D790 @ 0x14091D790 (sub_14091D790.c)
 *     sub_140AB41E0 @ 0x140AB41E0 (sub_140AB41E0.c)
 *     sub_140AB41FC @ 0x140AB41FC (sub_140AB41FC.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_14053EBD8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rcx
  __int64 v5; // rdx
  void *v6; // rdi
  void *v7; // rsi
  __int64 v8; // rbx
  __int64 j; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edx
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 k; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 m; // rcx
  __int64 v21; // rbx
  ULONG_PTR n; // rcx
  __int64 v23; // rax
  ULONG_PTR v24; // rbx
  _OWORD v26[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v26[1], 0, 32);
  sub_14091111C(a1, a2, a3, a4, 0LL, 0LL);
  sub_14091CA34();
  sub_140AB4550(v26);
  for ( i = 0LL; ; i = v8 )
  {
    v8 = sub_14071B350(i);
    if ( !v8 )
      break;
    sub_1406893EC();
    sub_14071B6EC();
    LOBYTE(v5) = 1;
    v6 = (void *)sub_14069FFE8(*(_QWORD *)(v8 + 4152), v5);
    v7 = (void *)sub_14069FFC0(*(_QWORD *)(v8 + 4152));
    sub_140AB4260();
    sub_14068934C();
    if ( v6 )
    {
      ZwClose(v6);
      ZwClose(v7);
    }
  }
  sub_1406893EC();
  sub_14071B6EC();
  for ( j = sub_14071B350(0LL); ; j = sub_14071B350(v13) )
  {
    v13 = j;
    if ( !j )
      break;
    v10 = *(_QWORD *)(j + 4152);
    if ( v10 )
    {
      v11 = *(_QWORD *)(j + 64);
      v12 = *(_DWORD *)(v11 + 144) & 0xFFFFFFFE;
      if ( *(_QWORD *)(v10 + 16) != v10 + 16 )
        v12 = *(_DWORD *)(v11 + 144) | 1;
      *(_DWORD *)(v11 + 144) = v12;
      sub_1406CA514(j);
    }
  }
  if ( RMKey )
  {
    v14 = *(_QWORD *)(qword_140C02770 + 64);
    v15 = qword_140C02770;
    v16 = *(_DWORD *)(v14 + 144) & 0xFFFFFFFE;
    if ( *((PVOID *)RMKey + 2) != (char *)RMKey + 16 )
      v16 = *(_DWORD *)(v14 + 144) | 1;
    *(_DWORD *)(v14 + 144) = v16;
    sub_1406CA514(v15);
  }
  for ( k = 0LL; ; k = v19 )
  {
    v18 = sub_14071B350(k);
    v19 = v18;
    if ( !v18 )
      break;
    sub_14069FD1C(*(_QWORD *)(v18 + 4152), 0LL);
  }
  if ( !(_BYTE)dword_140D3B0D4 )
    sub_14091D790();
  sub_140AB4260();
  sub_14068934C();
  sub_140911208(1LL);
  sub_140911EA8();
  for ( m = 0LL; ; m = v21 )
  {
    v21 = sub_14071B350(m);
    if ( !v21 )
      break;
    sub_140AB4370();
    sub_140AB41FC(v21);
    *(_DWORD *)(v21 + 164) |= 2u;
    sub_140AB41E0(v21);
    sub_140AB4260();
  }
  sub_140910FCC();
  for ( n = 0LL; ; n = v24 )
  {
    v23 = sub_14071B350(n);
    v24 = v23;
    if ( !v23 )
      break;
    sub_14083D56C(v23);
    sub_140AB4370();
    sub_140AB41FC(v24);
    *(_DWORD *)(v24 + 164) |= 4u;
    sub_140AB41E0(v24);
    sub_140AB4260();
    sub_14083D1A4(v24);
    if ( !BYTE1(NlsMbOemCodePageTag) && (*(_DWORD *)(v24 + 160) & 2) == 0 )
      *(_BYTE *)(v24 + 4784) = (int)sub_1406885A4(v24) >= 0;
  }
  sub_14091103C();
  return sub_140AB4580(v26);
}
