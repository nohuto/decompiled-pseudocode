/*
 * XREFs of ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C005C014
 * Callers:
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 * Callees:
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C005C4B0 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C005C4E0 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C005C5D4 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C01158D4 (-AreMultipleThreadsAttached@tagQ@@QEBA_NXZ.c)
 */

void zzzRecalcThreadAttachment(void)
{
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // rsi
  struct _LIST_ENTRY *i; // rbx
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ **v3; // rdi
  struct tagQ *v4; // r8
  struct tagQ *v5; // rdx
  __int64 v6; // rax

  RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
  for ( i = RecalcHeadPtiListEntry->Flink; i != RecalcHeadPtiListEntry; i = i->Flink )
  {
    RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(i);
    v3 = (struct tagQ **)RecalcPtiFromListEntry;
    if ( RecalcPtiFromListEntry && !*((_QWORD *)RecalcPtiFromListEntry + 82) )
    {
      if ( tagQ::AreMultipleThreadsAttached(*((tagQ **)RecalcPtiFromListEntry + 54)) )
      {
        v6 = AllocQueue(0LL, 0LL);
        if ( !v6 )
          return;
        v5 = (struct tagQ *)v6;
      }
      else
      {
        v5 = v4;
      }
      tagTHREADINFO::AssignAttachQueue((tagTHREADINFO *)v3, v5);
      zzzRecalc2(v3[82]);
    }
  }
}
