/*
 * XREFs of HvpCompareLogSequenceNumbers @ 0x1407FE10C
 * Callers:
 *     HvAnalyzeLogFiles @ 0x1407FDDD8 (HvAnalyzeLogFiles.c)
 *     HvpDetermineLogFileApplicationOrder @ 0x1407FE7C4 (HvpDetermineLogFileApplicationOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpCompareLogSequenceNumbers(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax

  if ( a1 == a2 )
  {
    v2 = 0;
    v3 = 0;
  }
  else if ( a1 >= a2 )
  {
    v2 = a1 - a2;
    v3 = 1;
  }
  else
  {
    v2 = a2 - a1;
    v3 = -1;
  }
  result = -v3;
  if ( v2 <= 0x7FFFFFFF )
    return v3;
  return result;
}
