/*
 * XREFs of sub_1402482BC @ 0x1402482BC
 * Callers:
 *     sub_140313DE0 @ 0x140313DE0 (sub_140313DE0.c)
 * Callees:
 *     RtlFindLastBackwardRunClear @ 0x1402E43A0 (RtlFindLastBackwardRunClear.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 */

void __fastcall sub_1402482BC(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, unsigned int a3)
{
  ULONG SizeOfBitMap; // ebx
  ULONG v7; // ebx
  ULONG LastBackwardRunClear; // eax
  ULONG v9; // edi
  ULONG StartingRunIndex; // [rsp+40h] [rbp+8h] BYREF

  StartingRunIndex = 0;
  RtlSetBits(BitMapHeader, StartingIndex, 1u);
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  do
  {
    v7 = SizeOfBitMap - 1;
    if ( !v7 )
      break;
    LastBackwardRunClear = RtlFindLastBackwardRunClear(BitMapHeader, v7, &StartingRunIndex);
    SizeOfBitMap = StartingRunIndex;
    v9 = LastBackwardRunClear;
    if ( LastBackwardRunClear > a3 )
    {
      SizeOfBitMap = LastBackwardRunClear - a3 + StartingRunIndex;
      v9 = a3;
      StartingRunIndex = SizeOfBitMap;
    }
    RtlSetBits(BitMapHeader, SizeOfBitMap, v9);
    a3 -= v9;
  }
  while ( a3 );
  RtlClearBits(BitMapHeader, StartingIndex, 1u);
}
