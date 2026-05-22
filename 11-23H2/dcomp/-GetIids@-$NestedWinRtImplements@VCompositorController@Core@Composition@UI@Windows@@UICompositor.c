/*
 * XREFs of ?GetIids@?$NestedWinRtImplements@VCompositorController@Core@Composition@UI@Windows@@UICompositorControllerPrivate@Private@2345@@WRL2@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18012CC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL2::NestedWinRtImplements<Windows::UI::Composition::Core::CompositorController,Windows::UI::Composition::Core::Private::ICompositorControllerPrivate>::GetIids(
        __int64 a1,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL2::NestableRuntimeClass::InternalGetIids(
           (Microsoft::WRL2::NestableRuntimeClass *)(a1 - 56),
           a2,
           a3);
}
