/*
 * XREFs of sub_140245FE0 @ 0x140245FE0
 * Callers:
 *     ExDeleteNPagedLookasideList @ 0x140245F80 (ExDeleteNPagedLookasideList.c)
 *     ExDeletePagedLookasideList @ 0x140245FB0 (ExDeletePagedLookasideList.c)
 * Callees:
 *     ExpInterlockedFlushSList @ 0x140429900 (ExpInterlockedFlushSList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140245FE0(_SLIST_HEADER *a1)
{
  __int64 v1; // rdx
  PSLIST_ENTRY v2; // rcx
  _SLIST_ENTRY *Next; // rbx

  v2 = ExpInterlockedFlushSList(a1);
  if ( v2 )
  {
    do
    {
      Next = v2->Next;
      sub_14042A5E0(v2, v1);
      v2 = Next;
    }
    while ( Next );
  }
  return 0LL;
}
