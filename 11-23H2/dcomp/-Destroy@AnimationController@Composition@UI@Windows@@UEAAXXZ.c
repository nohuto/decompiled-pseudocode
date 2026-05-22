/*
 * XREFs of ?Destroy@AnimationController@Composition@UI@Windows@@UEAAXXZ @ 0x180009460
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z @ 0x1800094A4 (-RemoveDirtyRebuildableObject@CDevice@DirectComposition@@QEAAXPEAVCRebuildableObject@2@@Z.c)
 */

void __fastcall Windows::UI::Composition::AnimationController::Destroy(DirectComposition::CDevice **this)
{
  if ( ((_BYTE)this[19] & 1) != 0 )
    DirectComposition::CDevice::RemoveDirtyRebuildableObject(
      this[20],
      (struct DirectComposition::CRebuildableObject *)((unsigned __int64)(this + 17) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  Windows::UI::Composition::ProxyObject::Destroy((Windows::UI::Composition::ProxyObject *)this);
}
