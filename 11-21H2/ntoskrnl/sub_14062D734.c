/*
 * XREFs of sub_14062D734 @ 0x14062D734
 * Callers:
 *     sub_140928E80 @ 0x140928E80 (sub_140928E80.c)
 *     sub_14092A070 @ 0x14092A070 (sub_14092A070.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14062D734(__int64 a1, __int64 a2, int a3)
{
  _DWORD v3[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v3[0] = *(_DWORD *)(a1 + 1088);
  v3[1] = *(_DWORD *)(a2 + 1232);
  v4 = v3;
  v6 = 0;
  v3[2] = a3;
  v5 = 12;
  sub_14035EDE4((__int64)&v4, 1u, 0x400000u, 0x370u, 0x401A02u);
}
