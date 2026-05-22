/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110AF0
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC7B0 (-QueryInterface@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC7D0 (-QueryInterface@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompo_ea_1800AC7D0.c)
 *     ?QueryInterface@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AC7F0 (-QueryInterface@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompo_ea_1800AC7F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositorInterop,Windows::UI::Composition::Desktop::ICompositorDesktopInterop,Windows::UI::Composition::ICompositorWithCompositionIslands,Windows::UI::Composition::Private::ICompositorForSystemPartner>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 1128),
           a2,
           a3);
}
