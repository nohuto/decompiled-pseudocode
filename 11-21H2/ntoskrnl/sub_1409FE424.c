/*
 * XREFs of sub_1409FE424 @ 0x1409FE424
 * Callers:
 *     sub_1409FCD60 @ 0x1409FCD60 (sub_1409FCD60.c)
 *     sub_1409FF6B0 @ 0x1409FF6B0 (sub_1409FF6B0.c)
 * Callees:
 *     towlower @ 0x1403E3150 (towlower.c)
 */

__int64 __fastcall sub_1409FE424(wint_t *a1, int *a2)
{
  wint_t *v4; // r14
  int v5; // edi
  unsigned int i; // esi
  wint_t v7; // ax
  int v8; // edi

  if ( towlower(*a1) != 98 || towlower(a1[1]) != 111 || towlower(a1[2]) != 111 || towlower(a1[3]) != 116 )
    return 0LL;
  v4 = a1 + 4;
  v5 = 0;
  for ( i = 4; i < 8; ++i )
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
  if ( a1[8] )
    return 0LL;
  *a2 = v5;
  return 1LL;
}
