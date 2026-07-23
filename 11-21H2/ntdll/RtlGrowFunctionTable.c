/*
 * XREFs of RtlGrowFunctionTable @ 0x1800EBD50
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x180030B10 (RtlProtectHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x1800342E0 (LdrControlFlowGuardEnforced.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 */

void __cdecl RtlGrowFunctionTable(PVOID DynamicTable, DWORD NewEntryCount)
{
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edx

  if ( *((_DWORD *)DynamicTable + 20) != 3 || NewEntryCount < *((_DWORD *)DynamicTable + 21) )
    RtlRaiseStatus(-1073741811);
  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( v4 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v5 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      if ( v5 == -1 )
        goto LABEL_10;
    }
    else
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v5 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *((_DWORD *)DynamicTable + 21) = NewEntryCount;
  LOBYTE(v6) = LdrControlFlowGuardEnforced();
  if ( v6 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
LABEL_10:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
    *(_DWORD *)LdrpMrdataHeapUnprotected = v7 - 1;
    if ( v7 == 1 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
}
