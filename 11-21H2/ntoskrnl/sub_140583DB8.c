/*
 * XREFs of sub_140583DB8 @ 0x140583DB8
 * Callers:
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 * Callees:
 *     sub_1402B1D10 @ 0x1402B1D10 (sub_1402B1D10.c)
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140583D60 @ 0x140583D60 (sub_140583D60.c)
 */

void __fastcall sub_140583DB8(__int64 a1, int a2, __int64 a3)
{
  unsigned __int16 v6; // ax
  int v7; // ecx
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF
  __int128 v9; // [rsp+40h] [rbp-38h] BYREF
  __int128 *v10; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v8 = 0LL;
  v9 = 0LL;
  sub_1402B1D10(a1, (__int64)&v8);
  if ( *(__int64 *)(a1 + 40) >= 0 )
  {
    v6 = 630;
    v7 = 24;
  }
  else
  {
    sub_140583D60((unsigned __int64 *)&v9 + 1, a2, a3);
    v6 = 642;
    v7 = 32;
  }
  v12 = 0;
  v10 = &v8;
  v11 = v7;
  sub_14035EDE4((__int64)&v10, 1u, 0x28000001u, v6, 0x11401B04u);
}
