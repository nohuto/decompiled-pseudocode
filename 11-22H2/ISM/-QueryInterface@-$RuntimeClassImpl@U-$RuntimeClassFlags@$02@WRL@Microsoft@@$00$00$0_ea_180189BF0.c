/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180189BF0
 * Callers:
 *     ?QueryInterface@MPCManagerClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007C4D0 (-QueryInterface@MPCManagerClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCManagerClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007C4F0 (-QueryInterface@MPCManagerClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManager@@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@UIMPCManagerConnection@6789@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007C510 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIMPCManage.c)
 *     ?QueryInterface@MPCManagerClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007C530 (-QueryInterface@MPCManagerClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>>(
           a1,
           a2,
           a3);
}
