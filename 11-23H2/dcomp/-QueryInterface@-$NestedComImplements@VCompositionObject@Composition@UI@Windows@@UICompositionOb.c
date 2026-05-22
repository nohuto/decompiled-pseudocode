/*
 * XREFs of ?QueryInterface@?$NestedComImplements@VCompositionObject@Composition@UI@Windows@@UICompositionObjectPartner@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801092E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::CompositionObject,Windows::UI::Composition::ICompositionObjectPartner>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 96),
           a2,
           a3);
}
