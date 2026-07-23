/*
 * XREFs of sub_1409E21EC @ 0x1409E21EC
 * Callers:
 *     sub_14067AE50 @ 0x14067AE50 (sub_14067AE50.c)
 *     sub_140681CB0 @ 0x140681CB0 (sub_140681CB0.c)
 *     sub_1406D7770 @ 0x1406D7770 (sub_1406D7770.c)
 *     sub_1406D78E0 @ 0x1406D78E0 (sub_1406D78E0.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140882F8A @ 0x140882F8A (sub_140882F8A.c)
 *     sub_1409E37A8 @ 0x1409E37A8 (sub_1409E37A8.c)
 */

void __fastcall sub_1409E21EC(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  int v5; // eax
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // r9
  unsigned int v9; // r10d
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+40h] [rbp-30h]
  unsigned int v12; // [rsp+48h] [rbp-28h]
  __int128 *v13; // [rsp+50h] [rbp-20h] BYREF
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]

  v11 = 0LL;
  v12 = 0;
  v10 = 0LL;
  sub_140882F8A(&v10, a1);
  if ( v6 )
    LODWORD(v11) = *(_DWORD *)(v6 + 1428);
  else
    LODWORD(v11) = v5 & v11;
  v15 = 0;
  HIDWORD(v11) = v7;
  v12 = v9;
  v13 = &v10;
  v14 = 28;
  if ( v8 && qword_140D05008 != -4540 && (*(_DWORD *)(qword_140D05008 + 4540) & 0x80000) != 0 )
    sub_1409E37A8(v8, v9, a4);
  sub_14035EDE4((__int64)&v13, 1u, 0x80000u, a4, 0x501904u);
}
