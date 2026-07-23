/*
 * XREFs of ExFlushLookasideListEx @ 0x140246070
 * Callers:
 *     ExDeleteLookasideListEx @ 0x140246030 (ExDeleteLookasideListEx.c)
 * Callees:
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __stdcall ExFlushLookasideListEx(PLOOKASIDE_LIST_EX Lookaside)
{
  PSLIST_ENTRY v2; // rcx
  _SLIST_ENTRY *Next; // rbx

  v2 = ExpInterlockedFlushSList(&Lookaside->L.ListHead);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      sub_14042A5E0(v2, Lookaside);
      v2 = Next;
    }
    while ( Next );
  }
}
