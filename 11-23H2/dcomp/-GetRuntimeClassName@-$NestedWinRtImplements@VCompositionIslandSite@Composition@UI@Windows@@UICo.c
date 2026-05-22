/*
 * XREFs of ?GetRuntimeClassName@?$NestedWinRtImplements@VCompositionIslandSite@Composition@UI@Windows@@UICompositionDeferralHandlerPrivate@Private@234@@WRL2@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18010FE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionIslandSite,Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate>::GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetRuntimeClassName(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 144),
           a2);
}
