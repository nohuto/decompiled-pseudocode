/*
 * XREFs of ?QueryInterface@?$NestedComImplements@VCompositor@Composition@UI@Windows@@UICompositorInterop2@234@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A2630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositorInterop2>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 1168),
           a2,
           a3);
}
