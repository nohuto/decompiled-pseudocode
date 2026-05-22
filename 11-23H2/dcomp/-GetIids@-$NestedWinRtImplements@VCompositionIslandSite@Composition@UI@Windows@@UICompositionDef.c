/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositionIslandSite@Composition@UI@Windows@@UICompositionDeferralHandlerPrivate@Private@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositionIslandSite,Windows::UI::Composition::Private::ICompositionDeferralHandlerPrivate>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 144),
           a2,
           a3);
}
