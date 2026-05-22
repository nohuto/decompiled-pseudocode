/*
 * XREFs of ?Destroy@CompositionDebugSettings@Diagnostics@Composition@UI@Windows@@UEAAXXZ @ 0x18012DAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18008D740 (-InternalRelease@-$ComPtr@VInteropDwmCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::Diagnostics::CompositionDebugSettings::Destroy(
        Microsoft::WRL2::ContextRuntimeClass **this)
{
  Microsoft::WRL2::ContextRuntimeClass::Dispose(this[7]);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::InteropDwmCompositor>::InternalRelease(this + 7);
  Microsoft::WRL2::ContextRuntimeClass::Destroy((Microsoft::WRL2::ContextRuntimeClass *)this);
}
