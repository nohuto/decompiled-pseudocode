/*
 * XREFs of ?TrackReference@Visual@Composition@UI@Windows@@UEAAXI@Z @ 0x18002E4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z @ 0x18002BD64 (-FindSlot@AllocatedStorage@CSparseStorage@@AEBAPEAVDataInfo@2@I@Z.c)
 */

void __fastcall Windows::UI::Composition::Visual::TrackReference(
        CSparseStorage::AllocatedStorage **this,
        unsigned int a2)
{
  Windows::UI::Composition::ProxyObject *v2; // r10
  unsigned int v3; // r11d
  CSparseStorage::AllocatedStorage *v4; // rcx
  struct Windows::UI::Composition::ProxyObject *v5; // r8

  v2 = (Windows::UI::Composition::ProxyObject *)this;
  v3 = a2;
  v4 = this[14];
  if ( (*((_DWORD *)v4 + 1) & 0x1000000) != 0 )
    v5 = *(struct Windows::UI::Composition::ProxyObject **)((char *)CSparseStorage::AllocatedStorage::FindSlot(v4, 8) + 4);
  else
    v5 = 0LL;
  Windows::UI::Composition::ProxyObject::TrackReferenceForRedirectableProperty(v2, v3, v5);
}
