/*
 * XREFs of ?QueryInterface@LaunchManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003EEA0
 * Callers:
 *     ?QueryInterface@LaunchManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003EEB0 (-QueryInterface@LaunchManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LaunchManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003EED0 (-QueryInterface@LaunchManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@LaunchManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003EEF0 (-QueryInterface@LaunchManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2@@Z @ 0x180049810 (-get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::LaunchManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::ILaunchManager>::QueryInterface(
           this,
           a2,
           a3);
}
