/*
 * XREFs of sub_1409A52C8 @ 0x1409A52C8
 * Callers:
 *     sub_1409A5C10 @ 0x1409A5C10 (sub_1409A5C10.c)
 * Callees:
 *     sub_1409A56A4 @ 0x1409A56A4 (sub_1409A56A4.c)
 *     sub_1409A5B64 @ 0x1409A5B64 (sub_1409A5B64.c)
 *     sub_1409A9460 @ 0x1409A9460 (sub_1409A9460.c)
 */

__int64 __fastcall sub_1409A52C8(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v4; // ebx
  __int64 v5; // r8
  __int64 v6; // r8

  v2 = *(_DWORD *)(a1 + 4);
  if ( (v2 & 8) == 0 )
  {
    if ( (v2 & 0x40) != 0 )
      return 259;
    if ( (v2 & 0x200) != 0 )
    {
      if ( (v2 & 0x100) != 0 )
        return 259;
      v5 = *(unsigned int *)(a1 + 12);
      *(_DWORD *)(a1 + 4) = v2 | 0x100;
      v4 = sub_1409A56A4(a1, 0LL, v5);
      if ( v4 )
        return v4;
      *(_DWORD *)(a1 + 4) &= 0xFFFFFCFF;
      v2 = *(_DWORD *)(a1 + 4);
      if ( (v2 & 0x10) == 0 )
        return 0;
    }
    if ( (v2 & 0x400) == 0 )
    {
      v4 = 0;
      *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFE7 | 8;
      sub_1409A9460();
      return v4;
    }
    if ( (v2 & 0x80u) == 0 )
    {
      v6 = *(unsigned int *)(a1 + 12);
      LOBYTE(a2) = 1;
      *(_DWORD *)(a1 + 4) = v2 | 0x80;
      sub_1409A5B64(a1, a2, v6);
    }
    return 259;
  }
  *(_DWORD *)(a1 + 4) = v2 & 0xFFFFFFEF;
  return 0;
}
