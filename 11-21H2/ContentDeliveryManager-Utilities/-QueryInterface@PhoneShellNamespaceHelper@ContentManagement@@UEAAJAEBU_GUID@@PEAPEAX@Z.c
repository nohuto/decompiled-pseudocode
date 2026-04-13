/*
 * XREFs of ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003EFF0
 * Callers:
 *     ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F000 (-QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F020 (-QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F040 (-QueryInterface@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPhoneShellNamespaceHelper@2@@Z @ 0x18004A050 (-get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPho.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IPhoneShellNamespaceHelper>::QueryInterface(
           this,
           a2,
           a3);
}
