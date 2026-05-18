/*
 * XREFs of sub_180094EF0 @ 0x180094EF0
 * Callers:
 *     sub_1800946B8 @ 0x1800946B8 (sub_1800946B8.c)
 * Callees:
 *     sub_180094F98 @ 0x180094F98 (sub_180094F98.c)
 */

__int64 __fastcall sub_180094EF0(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_180094F98(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_180094F98(Src);
}
