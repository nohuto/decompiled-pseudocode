/*
 * XREFs of sub_180094F44 @ 0x180094F44
 * Callers:
 *     sub_1800947A0 @ 0x1800947A0 (sub_1800947A0.c)
 * Callees:
 *     sub_180095024 @ 0x180095024 (sub_180095024.c)
 */

__int64 __fastcall sub_180094F44(void *Src, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx

  if ( a3 > 32 )
  {
    v4 = ((unsigned __int64)(a3 - 33) >> 5) + 1;
    do
    {
      Src = (void *)sub_180095024(Src);
      --v4;
    }
    while ( v4 );
  }
  return sub_180095024(Src);
}
