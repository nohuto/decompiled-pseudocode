/*
 * XREFs of ?QueryInterface@?$NestedComImplements@VInteropCompositor@Composition@UI@Windows@@UIDCompositionHolographicDevicePartner@@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::InteropCompositor,IDCompositionHolographicDevicePartner>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 1264),
           a2,
           a3);
}
