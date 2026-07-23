/*
 * XREFs of sub_140925338 @ 0x140925338
 * Callers:
 *     sub_140924D00 @ 0x140924D00 (sub_140924D00.c)
 *     sub_140925070 @ 0x140925070 (sub_140925070.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140925444 @ 0x140925444 (sub_140925444.c)
 *     sub_140925494 @ 0x140925494 (sub_140925494.c)
 *     sub_1409259BC @ 0x1409259BC (sub_1409259BC.c)
 */

__int64 __fastcall sub_140925338(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // ebx
  int v6; // ecx
  unsigned int v7; // eax
  _OWORD v9[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-18h]

  v2 = *(_DWORD *)a1;
  v3 = 0;
  v10 = 0LL;
  memset(v9, 0, sizeof(v9));
  if ( !v2 || v2 + 40 < v2 )
    return (unsigned int)-2147483622;
  v6 = sub_1409259BC(v2, *(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v9);
  if ( v6 >= 0 )
  {
    if ( (unsigned __int8)sub_140925494(v9, v2) && HIDWORD(v9[0]) == *(_DWORD *)(a1 + 4) )
    {
      v6 = sub_14042A5E0(*(_QWORD *)(a1 + 16), v2);
      if ( v6 < 0 )
        goto LABEL_5;
      if ( (unsigned __int8)sub_140925444(0LL, v9) )
      {
        ++*(_DWORD *)(a1 + 4);
        *(_DWORD *)a1 = v2 + DWORD1(v9[0]);
        *a2 = 0LL;
        return v3;
      }
    }
    return (unsigned int)-2147483622;
  }
LABEL_5:
  v7 = -1073741491;
  if ( v6 == -1073741807 )
    return (unsigned int)-2147483622;
  return v7;
}
