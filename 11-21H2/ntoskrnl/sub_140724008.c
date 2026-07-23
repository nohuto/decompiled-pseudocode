/*
 * XREFs of sub_140724008 @ 0x140724008
 * Callers:
 *     sub_1406BC4A0 @ 0x1406BC4A0 (sub_1406BC4A0.c)
 *     sub_1406C5CA0 @ 0x1406C5CA0 (sub_1406C5CA0.c)
 *     sub_1406D7990 @ 0x1406D7990 (sub_1406D7990.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_14081A150 @ 0x14081A150 (sub_14081A150.c)
 *     sub_1409CAC10 @ 0x1409CAC10 (sub_1409CAC10.c)
 * Callees:
 *     sub_1402A70F0 @ 0x1402A70F0 (sub_1402A70F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140726520 @ 0x140726520 (sub_140726520.c)
 */

char __fastcall sub_140724008(__int64 a1, char a2)
{
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // r9
  char v7; // di
  _DWORD v9[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  int v11; // [rsp+40h] [rbp-18h]

  v9[0] = 1;
  v4 = *(_QWORD *)(a1 + 16);
  v9[1] = 1;
  v10 = qword_140D3CBC0;
  v11 = 0;
  v5 = sub_1402A70F0(v4, (__int64)&v10, 1u, 1, a2);
  v7 = v5;
  if ( a2 )
  {
    LOBYTE(v6) = v5;
    sub_140726520(0LL, a1, v9, v6);
  }
  return v7;
}
