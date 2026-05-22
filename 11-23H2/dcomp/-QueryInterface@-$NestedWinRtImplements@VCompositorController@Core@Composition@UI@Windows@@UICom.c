/*
 * XREFs of ?QueryInterface@?$NestedWinRtImplements@VCompositorController@Core@Composition@UI@Windows@@UICompositorControllerPrivate@Private@2345@@WRL2@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18012CCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Core::CompositorController,Windows::UI::Composition::Core::Private::ICompositorControllerPrivate>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 56),
           a2,
           a3);
}
