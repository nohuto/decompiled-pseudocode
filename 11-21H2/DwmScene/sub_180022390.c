/*
 * XREFs of sub_180022390 @ 0x180022390
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001130 @ 0x180001130 (sub_180001130.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 */

volatile signed __int32 *sub_180022390()
{
  volatile signed __int32 *result; // rax

  result = (volatile signed __int32 *)sub_18001DE70((__int64)&unk_1801F74C4);
  if ( !_InterlockedExchangeAdd(result, 1u) )
    return (volatile signed __int32 *)sub_180001130((ULONGLONG *)&dword_1801EA188);
  return result;
}
