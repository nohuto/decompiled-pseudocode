/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18018A7D0
 * Callers:
 *     ?QueryInterface@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180069210 (-QueryInterface@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@W7EAAJAEBU_GUID@@PEA.c)
 *     ?QueryInterface@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180069230 (-QueryInterface@ConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@WBA@EAAJAEBU_GUID@@P.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>>(
           a1,
           a2,
           a3);
}
