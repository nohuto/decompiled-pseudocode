/*
 * XREFs of KeFlushCurrentTbImmediately @ 0x14039AFB0
 * Callers:
 *     HalpFlushTLB @ 0x14037E63C (HalpFlushTLB.c)
 *     KiSetPageAttributesTable @ 0x140A8C7B0 (KiSetPageAttributesTable.c)
 *     KeLoadMTRR @ 0x140A8F7D0 (KeLoadMTRR.c)
 *     PopHandleNextState @ 0x140AA7F8C (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeFlushCurrentTbImmediately()
{
  unsigned __int64 v0; // rcx
  unsigned __int64 result; // rax

  v0 = __readcr4();
  if ( (v0 & 0x20080) != 0 )
  {
    result = v0 ^ 0x80;
    __writecr4(v0 ^ 0x80);
    __writecr4(v0);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
