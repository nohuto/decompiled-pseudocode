/*
 * XREFs of sub_14062DB60 @ 0x14062DB60
 * Callers:
 *     sub_14021119C @ 0x14021119C (sub_14021119C.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062DB60(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // [rsp+30h] [rbp-38h] BYREF
  int v3; // [rsp+38h] [rbp-30h]
  int v4; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  v1 = *(_DWORD *)(a1 + 1088);
  v4 = 0;
  v3 = v1;
  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFF000uLL;
  v5 = &v2;
  v7 = 0;
  v6 = 12;
  sub_14035EDE4((__int64)&v5, 1u, 0x20000800u, 0x323u, 0x501902u);
}
