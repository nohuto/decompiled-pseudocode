/*
 * XREFs of ExpFlushGeneralLookaside @ 0x140358510
 * Callers:
 *     ExDeletePagedLookasideList @ 0x1403584E0 (ExDeletePagedLookasideList.c)
 *     ExDeleteNPagedLookasideList @ 0x1403C6CD0 (ExDeleteNPagedLookasideList.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140428F30 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpFlushGeneralLookaside(__int64 a1)
{
  PSLIST_ENTRY v2; // rcx
  struct _SLIST_ENTRY *Next; // rbx

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
