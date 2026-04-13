/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInfoProvider@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C2CE0
 * Callers:
 *     ?QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C2CF0 (-QueryInterface@ContentDeliveryManagerAppInfoProvider@ApplicationModel@Extensions@Internal@Windo.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnAppInfoProvider@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C2D10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1800C2D10.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnAppInfoProvider,Microsoft::WRL::FtmBase>>(
           a1,
           a2,
           a3);
}
