/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIServerConnectionArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015C9A0
 * Callers:
 *     ?QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051700 (-QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@W7EAAJAEBU_GUID@@PEAPEAX.c)
 *     ?QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051720 (-QueryInterface@ServerConnectionArgs@MPCManager@Input@Internal@Windows@@WBA@EAAJAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IServerConnectionArgs,Microsoft::WRL::FtmBase>>(
           a1,
           a2,
           a3);
}
