/*
 * XREFs of ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C005C4B0
 * Callers:
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C005C014 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C005C4E0 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     ?IsPackedQueueRecalc@@YAHXZ @ 0x1C005C618 (-IsPackedQueueRecalc@@YAHXZ.c)
 */

struct _LIST_ENTRY *GetRecalcHeadPtiListEntry(void)
{
  __int64 v0; // rcx

  if ( (unsigned int)IsPackedQueueRecalc() )
    return (struct _LIST_ENTRY *)(SGDGetUserSessionState(v0) + 16880);
  else
    return (struct _LIST_ENTRY *)(*(_QWORD *)(gptiCurrent + 456LL) + 176LL);
}
