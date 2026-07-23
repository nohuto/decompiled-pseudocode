/*
 * XREFs of sub_14023CBA4 @ 0x14023CBA4
 * Callers:
 *     sub_140305BD0 @ 0x140305BD0 (sub_140305BD0.c)
 *     sub_1405D7320 @ 0x1405D7320 (sub_1405D7320.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14023CBA4(int a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+38h] [rbp-30h]
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v3[0] = a1;
    v3[1] = a2;
    v7 = 0;
    v6 = 16;
    v4 = *((_QWORD *)KeGetCurrentPrcb() + 25);
    v5 = v3;
    return sub_14035EDE4((unsigned int)&v5, 1, -2147450880, 4661, 1538);
  }
  return result;
}
