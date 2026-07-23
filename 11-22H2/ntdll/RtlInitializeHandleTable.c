/*
 * XREFs of RtlInitializeHandleTable @ 0x1800819D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlInitializeHandleTable(
        ULONG MaximumNumberOfHandles,
        ULONG SizeOfHandleTableEntry,
        PRTL_HANDLE_TABLE HandleTable)
{
  ULONG v3; // eax

  *(_OWORD *)&HandleTable->MaximumNumberOfHandles = 0LL;
  v3 = SizeOfHandleTableEntry & 0x7FFFFFFF;
  *(_OWORD *)&HandleTable->FreeHandles = 0LL;
  *(_OWORD *)&HandleTable->UnCommittedHandles = 0LL;
  if ( (SizeOfHandleTableEntry & 0x80000000) == 0 )
    v3 = SizeOfHandleTableEntry;
  HandleTable->MaximumNumberOfHandles = MaximumNumberOfHandles;
  HandleTable->Reserved[0] = SizeOfHandleTableEntry >> 31;
  HandleTable->SizeOfHandleTableEntry = v3;
}
