/*
 * XREFs of TppCompleteThreadData @ 0x1800212E8
 * Callers:
 *     TppExecuteWaitCallback @ 0x18001FE54 (TppExecuteWaitCallback.c)
 *     RtlpTpTimerCallback @ 0x180020130 (RtlpTpTimerCallback.c)
 *     TppTimerpExecuteCallback @ 0x180020330 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180021330 (TppSimplepExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x180070EB0 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x18007F040 (RtlpTpWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x180087BD0 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800B1BE0 (RtlpTpIoCallback.c)
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
