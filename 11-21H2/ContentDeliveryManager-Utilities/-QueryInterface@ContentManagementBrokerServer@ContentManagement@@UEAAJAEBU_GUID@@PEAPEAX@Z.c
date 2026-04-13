/*
 * XREFs of ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050380
 * Callers:
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180050390 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800503B0 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800503D0 (-QueryInterface@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::QueryInterface(
           this,
           a2,
           a3);
}
