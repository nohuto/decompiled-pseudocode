/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18010FF10
 * Callers:
 *     ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AC410 (-GetRuntimeClassName@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInt.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositorInterop,Windows::UI::Composition::Desktop::ICompositorDesktopInterop,Windows::UI::Composition::ICompositorWithCompositionIslands,Windows::UI::Composition::Private::ICompositorForSystemPartner>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 1144),
           a2);
}
