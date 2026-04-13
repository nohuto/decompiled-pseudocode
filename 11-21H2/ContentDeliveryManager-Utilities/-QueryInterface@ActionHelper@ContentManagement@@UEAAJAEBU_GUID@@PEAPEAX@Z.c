/*
 * XREFs of ?QueryInterface@ActionHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003ED20
 * Callers:
 *     ?QueryInterface@ActionHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003ED30 (-QueryInterface@ActionHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ActionHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003ED50 (-QueryInterface@ActionHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ActionHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003ED70 (-QueryInterface@ActionHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@Z @ 0x180048CB0 (-get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ActionHelper::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IActionHelper>::QueryInterface(
           this,
           a2,
           a3);
}
