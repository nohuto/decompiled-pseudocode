/*
 * XREFs of RtlpGetSubSegmentBlockCount @ 0x18002DB7C
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180029530 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x18002D268 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetSubSegmentBlockCount(unsigned int a1, unsigned int a2, char a3, int a4)
{
  char v4; // r10
  char v5; // cl
  __int64 result; // rax

  v4 = a3 - 1;
  if ( a1 >= 0x100 )
    v4 = a3;
  v5 = v4 - 1;
  if ( !a4 )
    v5 = v4;
  result = 4LL;
  if ( a2 < 1 << (3 - v5) )
    a2 = 1 << (3 - v5);
  if ( a2 >= 4 )
  {
    result = a2;
    if ( a2 > 0x400 )
      return 1024LL;
  }
  return result;
}
