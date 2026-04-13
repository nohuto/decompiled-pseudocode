/*
 * XREFs of ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004ADF0
 * Callers:
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004AE00 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIContentManagementBroker@ContentManagement@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004AE20 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004AE20.c)
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004AE40 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::QueryInterface(
        __int64 this,
        struct _GUID *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>>(
           this,
           a2,
           a3);
}
