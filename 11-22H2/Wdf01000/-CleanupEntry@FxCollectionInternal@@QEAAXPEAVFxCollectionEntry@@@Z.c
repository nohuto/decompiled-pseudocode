/*
 * XREFs of ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C004F158
 * Callers:
 *     imp_WdfCollectionRemove @ 0x1C004C4E0 (imp_WdfCollectionRemove.c)
 *     imp_WdfCollectionRemoveItem @ 0x1C004C630 (imp_WdfCollectionRemoveItem.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C004F208 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxCollectionInternal::CleanupEntry(FxCollectionInternal *this, FX_POOL_TRACKER *Entry)
{
  _LIST_ENTRY *Blink; // r8
  _LIST_ENTRY *Pool; // rax

  Blink = Entry->Link.Blink;
  if ( (_LIST_ENTRY **)Blink->Blink != &Entry->Link.Blink
    || (Pool = (_LIST_ENTRY *)Entry->Pool, (_LIST_ENTRY **)Pool->Flink != &Entry->Link.Blink) )
  {
    __fastfail(3u);
  }
  Pool->Flink = Blink;
  Blink->Blink = Pool;
  if ( Entry )
    FxPoolFree(Entry);
  --this->m_Count;
}
