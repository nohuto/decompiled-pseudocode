/*
 * XREFs of RtlpGetCurrentProcessorNumberExUninitialized @ 0x180085090
 * Callers:
 *     RtlpGetCurrentProcessorNumberUninitialized @ 0x180085060 (RtlpGetCurrentProcessorNumberUninitialized.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x1800A5D60 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     <none>
 */

__int64 RtlpGetCurrentProcessorNumberExUninitialized()
{
  int v0; // eax

  v0 = 3;
  if ( MEMORY[0x7FFE0295] )
  {
    v0 = 1;
  }
  else if ( MEMORY[0x7FFE0294] )
  {
    v0 = 2;
  }
  RtlpGetCurrentProcessorNumberHow = v0;
  return RtlGetCurrentProcessorNumberEx();
}
