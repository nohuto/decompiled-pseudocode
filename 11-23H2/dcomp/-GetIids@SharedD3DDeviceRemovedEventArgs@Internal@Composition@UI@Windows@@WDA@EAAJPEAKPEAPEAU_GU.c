/*
 * XREFs of ?GetIids@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B0D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,Windows::UI::Composition::Internal::ISharedD3DDeviceRemovedEventArgs>::GetIids(
           a1 - 48,
           a2,
           a3);
}
