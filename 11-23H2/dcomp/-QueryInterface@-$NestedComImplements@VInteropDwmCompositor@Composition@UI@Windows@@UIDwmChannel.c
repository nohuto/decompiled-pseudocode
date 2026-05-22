/*
 * XREFs of ?QueryInterface@?$NestedComImplements@VInteropDwmCompositor@Composition@UI@Windows@@UIDwmChannelProvider@@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180110AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedComImplements<Windows::UI::Composition::InteropDwmCompositor,IDwmChannelProvider>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 1288),
           a2,
           a3);
}
