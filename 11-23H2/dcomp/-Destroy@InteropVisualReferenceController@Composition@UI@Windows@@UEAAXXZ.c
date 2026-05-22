/*
 * XREFs of ?Destroy@InteropVisualReferenceController@Composition@UI@Windows@@UEAAXXZ @ 0x18019A7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024678 (-ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z.c)
 */

void __fastcall Windows::UI::Composition::InteropVisualReferenceController::Destroy(void **this)
{
  DirectComposition::CDevice::ReleaseProxyForInterop(this[24]);
  this[24] = 0LL;
  Windows::UI::Composition::ProxyObject::Destroy((Windows::UI::Composition::ProxyObject *)this);
}
