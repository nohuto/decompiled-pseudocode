/*
 * XREFs of ?QueryInterface@?$NestedComImplements@VVisualInteractionSource@Interactions@Composition@UI@Windows@@UIVisualInteractionSourceTest@345@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::Interactions::VisualInteractionSource,Windows::UI::Composition::IVisualInteractionSourceTest>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 184),
           a2,
           a3);
}
