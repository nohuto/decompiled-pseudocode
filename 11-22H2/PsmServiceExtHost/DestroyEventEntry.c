/*
 * XREFs of DestroyEventEntry @ 0x18005717A
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1800043E0 (InsertEventEntryInLookUpTable.c)
 *     FlushEventEntryList @ 0x18008FBF0 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  void *v1; // rbx
  HANDLE ProcessHeap; // rax

  if ( a1 )
  {
    v1 = *(void **)(a1 + 16);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v1);
  }
}
