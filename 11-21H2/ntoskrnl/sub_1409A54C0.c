/*
 * XREFs of sub_1409A54C0 @ 0x1409A54C0
 * Callers:
 *     sub_1409A5C10 @ 0x1409A5C10 (sub_1409A5C10.c)
 * Callees:
 *     sub_1409A56A4 @ 0x1409A56A4 (sub_1409A56A4.c)
 *     sub_1409A5B64 @ 0x1409A5B64 (sub_1409A5B64.c)
 *     sub_1409A959C @ 0x1409A959C (sub_1409A959C.c)
 */

__int64 __fastcall sub_1409A54C0(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // r8

  v2 = *(_DWORD *)(a1 + 4);
  if ( (v2 & 4) != 0 )
    return 0LL;
  if ( (v2 & 0x180) == 0 )
  {
    if ( (v2 & 8) != 0 )
    {
      *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFF7;
      sub_1409A959C();
      v2 = *(_DWORD *)(a1 + 4);
    }
    if ( (v2 & 0x400) != 0 )
    {
      if ( (v2 & 0x200) == 0 )
      {
        LOBYTE(a2) = 1;
        sub_1409A56A4(a1, a2, *(unsigned int *)(a1 + 16));
        v2 = *(_DWORD *)(a1 + 4) | 0x200;
      }
      *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFDF;
      return 0LL;
    }
    if ( (v2 & 0x40) == 0 )
    {
      v5 = *(unsigned int *)(a1 + 16);
      *(_DWORD *)(a1 + 4) = v2 | 0x40;
      sub_1409A5B64(a1, 0LL, v5);
    }
  }
  return 259LL;
}
