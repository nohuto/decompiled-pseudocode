/*
 * XREFs of ExFlushLookasideListEx @ 0x1403585A0
 * Callers:
 *     ExDeleteLookasideListEx @ 0x140358560 (ExDeleteLookasideListEx.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140428F30 (RtlpInterlockedFlushSList.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

void __stdcall ExFlushLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PSLIST_ENTRY v2; // rcx
  struct _SLIST_ENTRY *Next; // rbx

  v2 = RtlpInterlockedFlushSList(&Lookaside->L.ListHead);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      Lookaside->L.FreeEx(v2, Lookaside);
      v2 = Next;
    }
    while ( Next );
  }
}
