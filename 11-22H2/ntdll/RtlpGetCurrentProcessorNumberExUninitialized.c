/*
 * XREFs of RtlpGetCurrentProcessorNumberExUninitialized @ 0x180084890
 * Callers:
 *     RtlpGetCurrentProcessorNumberUninitialized @ 0x180084860 (RtlpGetCurrentProcessorNumberUninitialized.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x1800A3CB0 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpGetCurrentProcessorNumberExUninitialized(PPROCESSOR_NUMBER ProcessorNumber)
{
  int v1; // eax

  v1 = 3;
  if ( MEMORY[0x7FFE0295] )
  {
    v1 = 1;
  }
  else if ( MEMORY[0x7FFE0294] )
  {
    v1 = 2;
  }
  RtlpGetCurrentProcessorNumberHow = v1;
  RtlGetCurrentProcessorNumberEx(ProcessorNumber);
}
