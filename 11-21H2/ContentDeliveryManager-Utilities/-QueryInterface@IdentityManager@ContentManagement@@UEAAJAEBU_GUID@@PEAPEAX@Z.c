/*
 * XREFs of ?QueryInterface@IdentityManager@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003EE30
 * Callers:
 *     ?QueryInterface@IdentityManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003EE40 (-QueryInterface@IdentityManager@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@IdentityManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003EE60 (-QueryInterface@IdentityManager@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@IdentityManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003EE80 (-QueryInterface@IdentityManager@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::IdentityManager::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::QueryInterface(
           this,
           a2,
           a3);
}
