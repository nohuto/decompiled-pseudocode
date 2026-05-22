/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FCF0
 * Callers:
 *     ?GetIids@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AC2B0 (-GetIids@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UIC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositorInterop,Windows::UI::Composition::Desktop::ICompositorDesktopInterop,Windows::UI::Composition::ICompositorWithCompositionIslands,Windows::UI::Composition::Private::ICompositorForSystemPartner>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 1144),
           a2,
           a3);
}
