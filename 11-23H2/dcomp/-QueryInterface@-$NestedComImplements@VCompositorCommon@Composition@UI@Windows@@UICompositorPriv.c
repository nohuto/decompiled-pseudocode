/*
 * XREFs of ?QueryInterface@?$NestedComImplements@VCompositorCommon@Composition@UI@Windows@@UICompositorPrivate@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::ICompositorPrivate>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 328),
           a2,
           a3);
}
