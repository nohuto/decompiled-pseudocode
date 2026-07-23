/*
 * XREFs of sub_1405D7320 @ 0x1405D7320
 * Callers:
 *     <none>
 * Callees:
 *     sub_14023CBA4 @ 0x14023CBA4 (sub_14023CBA4.c)
 *     sub_140248720 @ 0x140248720 (sub_140248720.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1405D7320(_QWORD *a1)
{
  __int64 v2; // rax
  __int128 v4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+40h] [rbp-20h]
  __int128 *v6; // [rsp+48h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+54h] [rbp-Ch]

  v5 = 0LL;
  v4 = 0LL;
  if ( a1[4246] )
  {
    sub_140248720((__int64)a1, (unsigned __int64)&v4 + 4, 0LL, 0LL, &v4, 0LL);
    v8 = 0;
    DWORD2(v4) = DWORD1(v4);
    v5 = a1[25];
    v6 = &v4;
    v7 = 24;
    sub_14035EDE4((__int64)&v6, 1u, 0x80008000, 0x1233u, 0x401802u);
  }
  v2 = a1[4200];
  if ( v2 )
    sub_14023CBA4(*(_DWORD *)(v2 + 16), *(_DWORD *)(v2 + 16));
  return 0LL;
}
