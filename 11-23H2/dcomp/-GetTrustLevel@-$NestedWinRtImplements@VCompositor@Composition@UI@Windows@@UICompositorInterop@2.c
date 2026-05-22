/*
 * XREFs of ?GetTrustLevel@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18008FA60
 * Callers:
 *     ?GetTrustLevel@?$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop@234@UICompositorDesktopInterop@Desktop@234@UICompositorWithCompositionIslands@234@UICompositorForSystemPartner@Private@234@@WRL2@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800AC570 (-GetTrustLevel@-$NestedWinRtImplements@VCompositor@Composition@UI@Windows@@UICompos_ea_1800AC570.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositorInterop,Windows::UI::Composition::Desktop::ICompositorDesktopInterop,Windows::UI::Composition::ICompositorWithCompositionIslands,Windows::UI::Composition::Private::ICompositorForSystemPartner>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(a1 - 1136) + 32LL);
  return result;
}
