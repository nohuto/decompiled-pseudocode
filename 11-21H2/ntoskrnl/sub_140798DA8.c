/*
 * XREFs of sub_140798DA8 @ 0x140798DA8
 * Callers:
 *     sub_140798C10 @ 0x140798C10 (sub_140798C10.c)
 * Callees:
 *     sub_1406ED114 @ 0x1406ED114 (sub_1406ED114.c)
 *     sub_140798E18 @ 0x140798E18 (sub_140798E18.c)
 */

__int64 __fastcall sub_140798DA8(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( !*(_DWORD *)(a1 + 344) || *(_DWORD *)(a1 + 424) || (result = sub_140798E18(a1, a2), (int)result < 0) )
  {
    if ( !a3 )
      return sub_1406ED114(a1, a2);
  }
  else if ( !a3 )
  {
    return result;
  }
  if ( !*(_DWORD *)(a1 + 344) || *(_DWORD *)(a1 + 424) )
    return 0LL;
  return result;
}
