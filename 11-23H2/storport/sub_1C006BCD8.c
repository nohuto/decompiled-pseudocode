/*
 * XREFs of sub_1C006BCD8 @ 0x1C006BCD8
 * Callers:
 *     sub_1C0062A44 @ 0x1C0062A44 (sub_1C0062A44.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall sub_1C006BCD8(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int8 result; // al
  __int64 v4; // r9

  result = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      v4 = result;
      if ( a3 <= qword_1C008AE18[result] )
        break;
      if ( ++result >= 5u )
        return result;
    }
    ++*(_DWORD *)(a1 + 12LL * result + 5088);
    result = a2 & 0x3F;
    if ( (a2 & 0x3F) == 1 )
      ++*(_DWORD *)(a1 + 12 * v4 + 5092);
    else
      *(_BYTE *)(a1 + 12 * v4 + 5096) = a2;
  }
  return result;
}
