/*
 * XREFs of ?Destroy@InteropVisualReference@Composition@UI@Windows@@UEAAXXZ @ 0x18019A9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z @ 0x180024678 (-ReleaseProxyForInterop@CDevice@DirectComposition@@SAXPEAX@Z.c)
 */

void __fastcall Windows::UI::Composition::InteropVisualReference::Destroy(void **this)
{
  DirectComposition::CDevice::ReleaseProxyForInterop(this[21]);
  this[21] = 0LL;
  Windows::UI::Composition::ProxyObject::Destroy((Windows::UI::Composition::ProxyObject *)this);
}
