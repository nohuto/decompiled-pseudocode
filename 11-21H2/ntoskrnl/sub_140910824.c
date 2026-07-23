/*
 * XREFs of sub_140910824 @ 0x140910824
 * Callers:
 *     sub_1402089E0 @ 0x1402089E0 (sub_1402089E0.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_140910824(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  unsigned int v3; // edx
  __int64 v4; // rax
  unsigned int v5; // edx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  _WORD v9[8]; // [rsp+30h] [rbp-19h] BYREF
  __int64 *v10; // [rsp+40h] [rbp-9h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-1h]
  int v12; // [rsp+58h] [rbp+Fh]
  int v13; // [rsp+5Ch] [rbp+13h]
  __int64 v14; // [rsp+B0h] [rbp+67h] BYREF

  v14 = a1;
  v11[0] = 8LL;
  v9[0] = 0;
  v1 = *(_QWORD *)(a1 + 1848);
  v2 = *(_QWORD *)(a1 + 1864);
  v10 = &v14;
  v3 = 1;
  if ( v1 )
  {
    v11[1] = v1;
    v3 = 2;
    v12 = *(unsigned __int16 *)(a1 + 1840);
    v13 = 0;
  }
  v4 = 2LL * v3;
  v5 = v3 + 1;
  v11[v4 - 1] = v9;
  v11[v4] = 2LL;
  if ( v2 )
  {
    v6 = *(unsigned __int16 *)(a1 + 1856);
    v7 = 2LL * v5++;
    v11[v7 - 1] = v2;
    LODWORD(v11[v7]) = v6;
    HIDWORD(v11[v7]) = 0;
  }
  v8 = 2LL * v5;
  v11[v8 - 1] = v9;
  v11[v8] = 2LL;
  sub_14035EDE4((__int64)&v10, v5 + 1, 0x41000000u, 0x925u, 0x501902u);
}
