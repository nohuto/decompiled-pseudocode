/*
 * XREFs of sub_1409BF008 @ 0x1409BF008
 * Callers:
 *     sub_140832E84 @ 0x140832E84 (sub_140832E84.c)
 * Callees:
 *     sub_1409BEEA8 @ 0x1409BEEA8 (sub_1409BEEA8.c)
 */

__int64 __fastcall sub_1409BF008(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v5; // ebx
  unsigned int i; // esi
  __int64 v7; // rcx
  int v8; // eax

  v5 = -1073741275;
  if ( a3 )
  {
    for ( i = 0; i < *a2; ++i )
    {
      v7 = 4LL * i;
      if ( a2[v7 + 1] == *(_DWORD *)a1
        && LOWORD(a2[v7 + 2]) == *(_WORD *)(a1 + 4)
        && ((a2[v7 + 2] & 0x10000) == 0 || (*(_BYTE *)(a1 + 6) & 1) != 0) )
      {
        v8 = sub_1409BEEA8(a1, (WNF_STATE_NAME *)&a2[v7 + 3]);
        if ( v8 >= 0 )
          v5 = v8;
      }
    }
  }
  return v5;
}
