/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositionDrawingSurfaceDiagnostics@Composition@UI@Windows@@UICompositionInteropDiagnostics@567@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180100C00
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositionDrawingSurfaceDiagnostics@Composition@UI@Windows@@UICompositionInteropDiagnostics@567@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800A9490 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositionDrawi.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::UI::Composition::ICompositionDrawingSurfaceDiagnostics,Windows::UI::Composition::ICompositionInteropDiagnostics>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 20), a2);
}
