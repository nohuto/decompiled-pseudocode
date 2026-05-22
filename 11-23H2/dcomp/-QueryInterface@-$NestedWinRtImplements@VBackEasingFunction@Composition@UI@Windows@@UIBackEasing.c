/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VBackEasingFunction@Composition@UI@Windows@@UIBackEasingFunction@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074E90
 * Callers:
 *     ?QueryInterface@?$NestedWinRtImplements@VDropShadow@Composition@UI@Windows@@UIDropShadow@234@UIDropShadow2@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE9F0 (-QueryInterface@-$NestedWinRtImplements@VDropShadow@Composition@UI@Windows@@UIDropShadow@234@UID.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::BackEasingFunction,Windows::UI::Composition::IBackEasingFunction>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 152),
           a2,
           a3);
}
