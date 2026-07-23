/*
 * XREFs of sub_1409FE4F8 @ 0x1409FE4F8
 * Callers:
 *     sub_1409FCDB0 @ 0x1409FCDB0 (sub_1409FCDB0.c)
 *     sub_1409FFD10 @ 0x1409FFD10 (sub_1409FFD10.c)
 * Callees:
 *     towlower @ 0x1403E3150 (towlower.c)
 */

__int64 __fastcall sub_1409FE4F8(wint_t *a1, int *a2)
{
  wint_t *v4; // r14
  int v5; // edi
  unsigned int i; // esi
  wint_t v7; // ax
  int v8; // edi

  if ( towlower(*a1) != 100
    || towlower(a1[1]) != 114
    || towlower(a1[2]) != 105
    || towlower(a1[3]) != 118
    || towlower(a1[4]) != 101
    || towlower(a1[5]) != 114 )
  {
    return 0LL;
  }
  v4 = a1 + 6;
  v5 = 0;
  for ( i = 6; i < 0xA; ++i )
  {
    v7 = towlower(*v4);
    if ( (unsigned __int16)(v7 - 48) > 9u )
    {
      if ( (unsigned __int16)(v7 - 97) > 5u )
        return 0LL;
      v8 = 16 * v5 - 87;
    }
    else
    {
      v8 = 16 * v5 - 48;
    }
    v5 = v7 + v8;
    ++v4;
  }
  if ( a1[10] )
    return 0LL;
  *a2 = v5;
  return 1LL;
}
