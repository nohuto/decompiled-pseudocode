/*
 * XREFs of ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x180041F00
 * Callers:
 *     RmgrSrv_RmReleaseResources @ 0x180041DD0 (RmgrSrv_RmReleaseResources.c)
 *     ContextRmResourceHandle_rundown @ 0x18006CA70 (ContextRmResourceHandle_rundown.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180041FFC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x1800420D0 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmReleaseResources(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2)
{
  ExecutionModel::ResourceManager *v2; // rbx
  int ResourceSetFromHandle; // ebx
  struct ExecutionModel::ExternalResourceSet *v5; // rbx
  int v6; // ecx
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
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 9LL) )
  {
    v11 = a2;
    LODWORD(v10) = ResourceSetFromHandle;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v6,
      (int)&unk_1800C221F,
      v7,
      v8,
      (__int64)&v10,
      (__int64)&v11);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)ResourceSetFromHandle;
}
