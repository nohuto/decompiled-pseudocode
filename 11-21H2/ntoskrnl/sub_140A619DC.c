/*
 * XREFs of sub_140A619DC @ 0x140A619DC
 * Callers:
 *     sub_140908918 @ 0x140908918 (sub_140908918.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A616F8 @ 0x140A616F8 (sub_140A616F8.c)
 */

__int64 __fastcall sub_140A619DC(__int64 a1, __int64 a2, int *a3, char a4)
{
  __int64 v4; // r11
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF

  v7 = 0LL;
  sub_140A616F8(a1, a3, a4, (__int64)&v7);
  v5 = *(_DWORD *)(v4 + 48);
  v8[1] = 0;
  v8[2] = v5;
  v8[3] = *(_DWORD *)(v4 + 52);
  v8[0] = 1;
  return sub_14042A5E0(v7, v8);
}
