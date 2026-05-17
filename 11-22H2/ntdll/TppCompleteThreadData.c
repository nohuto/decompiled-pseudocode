/*
 * XREFs of TppCompleteThreadData @ 0x18004F090
 * Callers:
 *     RtlpTpTimerCallback @ 0x18004C060 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18004CF70 (RtlpTpWorkCallback.c)
 *     RtlpTpWaitCallback @ 0x18004E570 (RtlpTpWaitCallback.c)
 *     TppExecuteWaitCallback @ 0x18004E8C4 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18004E9F0 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x18004EAE0 (TppSimplepExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x1800509C0 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800AFCE0 (RtlpTpIoCallback.c)
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
