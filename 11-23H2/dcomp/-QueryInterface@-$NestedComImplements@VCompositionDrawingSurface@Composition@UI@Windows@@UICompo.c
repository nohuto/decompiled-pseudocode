/*
 * XREFs of ?QueryInterface@?$NestedComImplements@VCompositionDrawingSurface@Composition@UI@Windows@@UICompositionDrawingSurfaceInteropPrivate@Internal@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074EF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::CompositionDrawingSurface,Windows::UI::Composition::Internal::ICompositionDrawingSurfaceInteropPrivate>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 224),
           a2,
           a3);
}
