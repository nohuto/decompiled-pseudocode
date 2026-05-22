/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositorCommon@Composition@UI@Windows@@UICompositorWithRadialGradient@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18010FD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositorWithRadialGradient>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 248),
           a2,
           a3);
}
