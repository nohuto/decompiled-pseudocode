/*
 * XREFs of ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00A609C
 * Callers:
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 *     LinkWindow @ 0x1C00F2760 (LinkWindow.c)
 *     DirtyVisRgnTrackers @ 0x1C00F319C (DirtyVisRgnTrackers.c)
 *     UnlinkWindow @ 0x1C010B5E0 (UnlinkWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisRgnTrackerProp::MarkDirty(CVisRgnTrackerProp *this)
{
  struct _LIST_ENTRY *v1; // rcx
  struct _LIST_ENTRY *Flink; // rax

  if ( !*((_BYTE *)this + 73) )
  {
    *((_BYTE *)this + 73) = 1;
    v1 = (struct _LIST_ENTRY *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
    Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
    if ( CVisRgnTrackerProp::s_DirtyList.Flink->Blink != &CVisRgnTrackerProp::s_DirtyList )
      __fastfail(3u);
    v1->Flink = CVisRgnTrackerProp::s_DirtyList.Flink;
    v1->Blink = &CVisRgnTrackerProp::s_DirtyList;
    Flink->Blink = v1;
    CVisRgnTrackerProp::s_DirtyList.Flink = v1;
  }
}
