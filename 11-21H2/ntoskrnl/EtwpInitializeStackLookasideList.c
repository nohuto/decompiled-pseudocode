/*
 * XREFs of EtwpInitializeStackLookasideList @ 0x140865288
 * Callers:
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

union _SLIST_HEADER *EtwpInitializeStackLookasideList()
{
  union _SLIST_HEADER *result; // rax

  result = &EtwpStackLookAsideList;
  if ( ((unsigned __int8)&EtwpStackLookAsideList & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  dword_140C5A6C0 = 0;
  dword_140C5A6C4 = 0;
  EtwpStackLookAsideList = 0LL;
  return result;
}
