/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VDelegatedInkTrailVisual@Composition@UI@Windows@@UIDelegatedInkTrailVisual@234@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18011B5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::DelegatedInkTrailVisual,Windows::UI::Composition::IDelegatedInkTrailVisual>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 296),
           a2,
           a3);
}
