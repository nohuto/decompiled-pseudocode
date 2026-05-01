/*
 * XREFs of ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x18003AC48
 * Callers:
 *     RmgrSrv_RmReleaseResources @ 0x18003AB20 (RmgrSrv_RmReleaseResources.c)
 *     ContextRmResourceHandle_rundown @ 0x18006C150 (ContextRmResourceHandle_rundown.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x18003AD40 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x18003ADCC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmReleaseResources(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2)
{
  ExecutionModel::ResourceManager *v2; // rbx
  int ResourceSetFromHandle; // ebx
  struct ExecutionModel::ExternalResourceSet *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct ExecutionModel::ExternalResourceSet *v10; // [rsp+30h] [rbp-B8h] BYREF
  struct ExecutionModel::ResourceHandle__ *v11; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-A8h] BYREF

  v2 = g_pResourceManager;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  RmpAcquireGlobalLock();
  ResourceSetFromHandle = ExecutionModel::ResourceManager::GetResourceSetFromHandle(v2, a2, &v10);
  if ( ResourceSetFromHandle >= 0 )
  {
    v5 = v10;
    ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v10);
    (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v5 + 16LL))(v5);
    ResourceSetFromHandle = 0;
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 9LL) )
  {
    v11 = a2;
    LODWORD(v10) = ResourceSetFromHandle;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v6,
      byte_1800C339D,
      v7,
      v8,
      (__int64)&v10,
      (__int64)&v11);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)ResourceSetFromHandle;
}
