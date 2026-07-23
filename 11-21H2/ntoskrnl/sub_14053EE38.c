/*
 * XREFs of sub_14053EE38 @ 0x14053EE38
 * Callers:
 *     sub_140911B58 @ 0x140911B58 (sub_140911B58.c)
 * Callees:
 *     sub_140208994 @ 0x140208994 (sub_140208994.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14067BD84 @ 0x14067BD84 (sub_14067BD84.c)
 *     sub_14067C24C @ 0x14067C24C (sub_14067C24C.c)
 *     sub_14067C3A4 @ 0x14067C3A4 (sub_14067C3A4.c)
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_1406893EC @ 0x1406893EC (sub_1406893EC.c)
 *     sub_14068EC28 @ 0x14068EC28 (sub_14068EC28.c)
 *     sub_14071B350 @ 0x14071B350 (sub_14071B350.c)
 *     sub_14071B6EC @ 0x14071B6EC (sub_14071B6EC.c)
 *     sub_14079B518 @ 0x14079B518 (sub_14079B518.c)
 *     sub_140910800 @ 0x140910800 (sub_140910800.c)
 *     sub_1409110AC @ 0x1409110AC (sub_1409110AC.c)
 *     sub_14091118C @ 0x14091118C (sub_14091118C.c)
 *     sub_140911208 @ 0x140911208 (sub_140911208.c)
 *     sub_140911BAC @ 0x140911BAC (sub_140911BAC.c)
 *     sub_14091CA5C @ 0x14091CA5C (sub_14091CA5C.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 sub_14053EE38()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 i; // rcx
  unsigned int v5; // edi
  _PRIVILEGE_SET *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // ebx
  __int64 **v10; // rax
  _PRIVILEGE_SET *v11; // rcx
  _OWORD v13[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(&v13[1], 0, 32);
  sub_140911208(2LL);
  sub_14091CA5C(v1, v0, v2, v3, 0LL, 0LL);
  sub_1409110AC();
  if ( qword_140D3CB10 )
    ObfDereferenceObject(qword_140D3CB10);
  sub_140910800();
  sub_1406893EC();
  sub_14071B6EC();
  for ( i = 0LL; ; i = v8 )
  {
    v7 = sub_14071B350(i);
    v8 = v7;
    if ( !v7 )
      break;
    sub_140208994(v7);
    sub_14067C3A4(v8);
    v5 = *(_DWORD *)(v8 + 280) + 4096;
    sub_140AB4550(v13);
    sub_14079B518(v8);
    sub_140AB4580(v13);
    if ( *(_BYTE *)(v8 + 4784)
      && (*(_DWORD *)(v8 + 160) & 0x8000) == 0
      && (__int64)(*(_QWORD *)(v8 + 1800) - v5) > 0x100000 )
    {
      sub_14068EC28(v8, 0LL, v5, 0LL);
    }
    sub_14067C24C(v8);
    v6 = *(_PRIVILEGE_SET **)(v8 + 4792);
    if ( v6 )
      sub_14067BD84(v6);
  }
  byte_140D3CA35 = 1;
  if ( (dword_140C23508 & 8) != 0 && !(_BYTE)dword_140D3B0D4 )
    sub_140911BAC();
  sub_140AB4260();
  sub_14068934C();
  v9 = 0;
  v10 = &off_140D3B708;
  if ( off_140D3B708 )
  {
    do
    {
      v11 = (_PRIVILEGE_SET *)v10[1];
      if ( v11 )
        sub_14067BD84(v11);
      v10 = &(&off_140D3B708)[2 * (unsigned int)++v9];
    }
    while ( *v10 );
  }
  return sub_14091118C();
}
