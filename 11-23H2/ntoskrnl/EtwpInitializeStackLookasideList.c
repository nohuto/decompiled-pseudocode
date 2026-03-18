/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x140865D74
 * Callers:
 *     EtwpInitialize @ 0x140B47A50 (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403217B0 (RtlRaiseStatus.c)
 */

union _SLIST_HEADER *EtwpInitializeStackLookasideList()
{
  union _SLIST_HEADER *result; // rax

  result = &EtwpStackLookAsideList;
  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_140C6B410 = 0;
  dword_140C6B414 = 0;
  EtwpStackLookAsideList = 0LL;
  return result;
}
