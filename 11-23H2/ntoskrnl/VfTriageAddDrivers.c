/*
 * XREFs of VfTriageAddDrivers @ 0x140B970A8
 * Callers:
 *     VfInitBootDriversLoaded @ 0x140B577A4 (VfInitBootDriversLoaded.c)
 * Callees:
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 *     TriageGetLoaderEntry @ 0x140679D98 (TriageGetLoaderEntry.c)
 *     VfDriverLock @ 0x140ACA75C (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140ACA880 (VfDriverUnlock.c)
 *     VfSuspectDriversAllocateEntry @ 0x140ADA3B4 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectDriversInsert @ 0x140ADA6F0 (VfSuspectDriversInsert.c)
 *     TriageGetDriverCount @ 0x140B9C05C (TriageGetDriverCount.c)
 */

__int64 __fastcall VfTriageAddDrivers(__int64 a1)
{
  __int64 v3; // r14
  unsigned int v4; // esi
  unsigned int i; // edi
  __int64 LoaderEntry; // rax
  const void **v7; // rbx
  _QWORD *Entry; // rbx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  if ( (VerifierTriageActionTaken & 0x40000000) == 0 )
  {
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: no suspect drivers will be selected for verification.\n");
    return 0LL;
  }
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: will select target drivers for verification.\n");
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 40LL);
  if ( (int)TriageGetDriverCount(v3, &v9) < 0 )
    return 0LL;
  v4 = 0;
  for ( i = 0; i < v9; ++i )
  {
    LoaderEntry = TriageGetLoaderEntry(v3, i);
    if ( LoaderEntry && (*(_DWORD *)(LoaderEntry + 104) & 0x8000000) == 0 )
    {
      v7 = (const void **)(LoaderEntry + 88);
      DbgPrintEx(0x5Du, 3u, "VfTriageAddDrivers: Marking %wZ for verification when it is loaded\n", LoaderEntry + 88);
      Entry = (_QWORD *)VfSuspectDriversAllocateEntry(v7);
      if ( Entry )
      {
        VfDriverLock();
        VfSuspectDriversInsert(Entry);
        VfDriverUnlock();
        v4 = 1;
      }
    }
  }
  return v4;
}
