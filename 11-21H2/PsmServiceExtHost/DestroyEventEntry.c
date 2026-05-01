/*
 * XREFs of DestroyEventEntry @ 0x18005256C
 * Callers:
 *     FlushEventEntryList @ 0x1800949B8 (FlushEventEntryList.c)
 *     InsertEventEntryInLookUpTable @ 0x180094AB0 (InsertEventEntryInLookUpTable.c)
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
