/*
 * XREFs of TppCompleteThreadData @ 0x18004EF30
 * Callers:
 *     RtlpTpTimerCallback @ 0x18004BF00 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18004CE10 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x18004E410 (RtlpTpWaitCallback.c)
 *     TppExecuteWaitCallback @ 0x18004E764 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18004E890 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x18004E980 (TppSimplepExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180050860 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800B1DB0 (RtlpTpIoCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall TppCompleteThreadData(__int64 a1)
{
  if ( a1 )
  {
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - *(_QWORD *)(a1 + 24);
  }
}
