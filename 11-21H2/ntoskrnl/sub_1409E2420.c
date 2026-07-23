/*
 * XREFs of sub_1409E2420 @ 0x1409E2420
 * Callers:
 *     sub_1406A2200 @ 0x1406A2200 (sub_1406A2200.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140882F8A @ 0x140882F8A (sub_140882F8A.c)
 */

void __fastcall sub_1409E2420(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rdx
  int v3; // r8d
  __int128 v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h]
  __int128 *v6; // [rsp+48h] [rbp-20h] BYREF
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  v5 = 0LL;
  v4 = 0LL;
  sub_140882F8A(&v4, a1);
  if ( v2 )
    LODWORD(v5) = *(_DWORD *)(v2 + 1428);
  else
    LODWORD(v5) = v1 & v5;
  v8 = 0;
  HIDWORD(v5) = v3;
  v6 = &v4;
  v7 = 24;
  sub_14035EDE4((__int64)&v6, 1u, 0x80000u, 0x72Au, 0x501904u);
}
