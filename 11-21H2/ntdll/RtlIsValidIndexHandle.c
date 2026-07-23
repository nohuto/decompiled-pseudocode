/*
 * XREFs of RtlIsValidIndexHandle @ 0x180062BB0
 * Callers:
 *     RtlpFreeHandleForAtom @ 0x1800624D8 (RtlpFreeHandleForAtom.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180062B74 (RtlpAtomMapAtomToHandleEntry.c)
 * Callees:
 *     RtlIsValidHandle @ 0x180062BF0 (RtlIsValidHandle.c)
 */

BOOLEAN __cdecl RtlIsValidIndexHandle(
        PRTL_HANDLE_TABLE HandleTable,
        ULONG HandleIndex,
        PRTL_HANDLE_TABLE_ENTRY *Handle)
{
  _RTL_HANDLE_TABLE_ENTRY *v4; // rbx

  v4 = (PRTL_HANDLE_TABLE_ENTRY)((char *)HandleTable->CommittedHandles
                               + HandleIndex * HandleTable->SizeOfHandleTableEntry);
  if ( !RtlIsValidHandle(HandleTable, v4) )
    return 0;
  *Handle = v4;
  return 1;
}
