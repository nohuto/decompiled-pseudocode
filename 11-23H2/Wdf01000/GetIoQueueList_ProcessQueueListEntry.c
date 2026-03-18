/*
 * XREFs of GetIoQueueList_ProcessQueueListEntry @ 0x1C0062880
 * Callers:
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C000F97E (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

void __fastcall GetIoQueueList_ProcessQueueListEntry(_LIST_ENTRY *QueueLE, _SINGLE_LIST_ENTRY *SListHead, void *a3)
{
  _SINGLE_LIST_ENTRY *Next; // rax
  _LIST_ENTRY **p_Blink; // rcx

  if ( LODWORD(QueueLE[1].Flink) == 1 )
  {
    Next = SListHead->Next;
    p_Blink = &QueueLE[-57].Blink;
    SListHead->Next = (_SINGLE_LIST_ENTRY *)(p_Blink + 116);
    p_Blink[116] = (_LIST_ENTRY *)Next;
    FxObject::AddRef(
      (FxObject *)p_Blink,
      (void *)0x65776F70,
      1479,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
}
