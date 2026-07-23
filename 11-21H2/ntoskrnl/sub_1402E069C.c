/*
 * XREFs of sub_1402E069C @ 0x1402E069C
 * Callers:
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402E069C(__int64 a1)
{
  char v1; // dl
  int v3; // eax
  bool v4; // zf

  v1 = 1;
  if ( !byte_140C4E920 )
  {
    v3 = *(_DWORD *)(a1 + 128);
    if ( v3 != 1 )
    {
      if ( v3 == 2 )
      {
        v4 = dword_140C4E91C == 0;
        return !v4;
      }
      if ( v3 == 4 )
        goto LABEL_11;
      if ( v3 != 3 )
      {
        if ( v3 == 9 )
        {
          v4 = dword_140D01120 == 0;
          return !v4;
        }
        if ( v3 <= 9 || v3 > 11 )
          return v1;
LABEL_11:
        v4 = dword_140C4E918 == 0;
        return !v4;
      }
    }
    v4 = dword_140C4E914 == 0;
    return !v4;
  }
  return v1;
}
