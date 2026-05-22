/*
 * XREFs of ?QueryInterface@?$NestedComImplements@VCompositorCommon@Composition@UI@Windows@@UICompositorInternalInterop@Internal@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801109F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::CompositorCommon,Windows::UI::Composition::Internal::ICompositorInternalInterop>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 280),
           a2,
           a3);
}
