/*
 * XREFs of ?AddRef@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@UEAAKXZ @ 0x18010E5C0
 * Callers:
 *     ?AddRef@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@W7EAAKXZ @ 0x1800ABA50 (-AddRef@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICo.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@WBA@EAAKXZ @ 0x1800ABA70 (-AddRef@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInt_ea_1800ABA70.c)
 *     ?AddRef@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@WBI@EAAKXZ @ 0x1800ABA90 (-AddRef@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInt_ea_1800ABA90.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositorInterop,Windows::UI::Composition::Desktop::ICompositorDesktopInterop,Windows::UI::Composition::ICompositorWithCompositionIslands,Windows::UI::Composition::Private::ICompositorForSystemPartner>::AddRef(
        __int64 a1)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)(a1 - 1128));
}
