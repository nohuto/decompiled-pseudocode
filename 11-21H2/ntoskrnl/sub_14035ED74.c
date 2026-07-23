/*
 * XREFs of sub_14035ED74 @ 0x14035ED74
 * Callers:
 *     sub_1407D7E94 @ 0x1407D7E94 (sub_1407D7E94.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14035ED74(__int64 a1)
{
  int v1; // eax
  int v3; // [rsp+30h] [rbp-28h] BYREF
  int *v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]

  v1 = *(_DWORD *)(a1 + 1088);
  v6 = 0;
  v3 = v1;
  v5 = 4;
  v4 = &v3;
  return sub_14035EDE4((unsigned int)&v4, 1, 1, 779, 5249282);
}
