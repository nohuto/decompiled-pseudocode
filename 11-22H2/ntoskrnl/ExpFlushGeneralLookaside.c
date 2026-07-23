/*
 * XREFs of ExpFlushGeneralLookaside @ 0x140357F10
 * Callers:
 *     ExDeletePagedLookasideList @ 0x140357EE0 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1403C6670 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140428870 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpFlushGeneralLookaside(__int64 a1)
{
  PSLIST_ENTRY v2; // rcx
  _SLIST_ENTRY *Next; // rbx

  v2 = RtlpInterlockedFlushSList((PSLIST_HEADER)a1);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      (*(void (**)(void))(a1 + 56))();
      v2 = Next;
    }
    while ( Next );
  }
  return 0LL;
}
