/*
 * XREFs of ?QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8BE0
 * Callers:
 *     ?QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8BF0 (-QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@I_ea_1800D8BF0.c)
 *     ?QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D8C10 (-QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@I_ea_1800D8C10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfoProvider::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
