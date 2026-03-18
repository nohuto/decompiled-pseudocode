/*
 * XREFs of HalpInterruptParseAcpiTables @ 0x1403B85D0
 * Callers:
 *     HalpInitializeInterrupts @ 0x140AF82A8 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x140213A40 (HalpAcpiGetTable.c)
 *     HalpInterruptParseMadt @ 0x1403B8644 (HalpInterruptParseMadt.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptParseAcpiTables(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 Table; // rax
  int v5; // eax

  v3 = 0;
  Table = HalpAcpiGetTable(a1, 1128878145, 0, 0);
  if ( Table && (v5 = HalpInterruptParseMadt(Table, a2), v3 = v5, v5 < 0) )
  {
    HalpInterruptSetProblemEx(0, 1, v5, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 271);
  }
  else
  {
    if ( !HalpInterruptMaxProcessors )
      HalpInterruptMaxProcessors = 1;
    if ( a2 == 1 )
    {
      HalpInterruptProcessorStateInitialized = 1;
      *(_WORD *)(HalpInterruptProcessorState + 12) = 257;
    }
  }
  return v3;
}
