/*
 * XREFs of sub_14062D3AC @ 0x14062D3AC
 * Callers:
 *     sub_1402447EC @ 0x1402447EC (sub_1402447EC.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062D3AC(__int64 a1, char a2)
{
  int v2; // eax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  __int16 v4; // [rsp+34h] [rbp-24h]
  char v5; // [rsp+36h] [rbp-22h]
  char v6; // [rsp+37h] [rbp-21h]
  int *v7; // [rsp+38h] [rbp-20h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]

  v3 = *(_DWORD *)(a1 + 1232);
  v2 = *(_DWORD *)(a1 + 536);
  v9 = 0;
  v4 = v2;
  v5 = a2;
  v7 = &v3;
  v6 = 0;
  v8 = 8;
  sub_14035EDE4((__int64)&v7, 1u, 0x40000001u, 0x53Cu, 0x401802u);
}
