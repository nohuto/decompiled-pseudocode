/*
 * XREFs of sub_14076E8F0 @ 0x14076E8F0
 * Callers:
 *     sub_140776CFC @ 0x140776CFC (sub_140776CFC.c)
 * Callees:
 *     sub_1402DE3A4 @ 0x1402DE3A4 (sub_1402DE3A4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407795E4 @ 0x1407795E4 (sub_1407795E4.c)
 */

__int64 __fastcall sub_14076E8F0(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v7[2]; // [rsp+38h] [rbp-50h] BYREF
  _OWORD *v8; // [rsp+40h] [rbp-48h]
  _OWORD v9[3]; // [rsp+48h] [rbp-40h] BYREF

  v6 = 0;
  v7[0] = 1;
  v7[1] = 0;
  v8 = v9;
  memset(v9, 0, sizeof(v9));
  if ( (unsigned int)sub_1407795E4((unsigned int)sub_1406DAC50, (unsigned int)v7, a1, a2, (__int64)&v6) != -1073741811 )
  {
    v4 = 0;
    if ( !a1 )
      return 1LL;
    while ( sub_1402DE3A4(a2 + 56LL * v4) )
    {
      if ( ++v4 >= a1 )
        return 1LL;
    }
  }
  return 0LL;
}
