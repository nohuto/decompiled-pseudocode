/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VDropShadow@Composition@UI@Windows@@UIDropShadow@234@UIDropShadow2@234@@WRL2@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::DropShadow,Windows::UI::Composition::IDropShadow,Windows::UI::Composition::IDropShadow2>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::BackEasingFunction,Windows::UI::Composition::IBackEasingFunction>::QueryInterface(
           a1 - 8,
           a2,
           a3);
}
