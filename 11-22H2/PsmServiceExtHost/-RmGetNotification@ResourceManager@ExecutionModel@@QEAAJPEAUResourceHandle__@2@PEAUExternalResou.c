/*
 * XREFs of ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x180082EF4
 * Callers:
 *     RmgrSrv_RmGetNotification @ 0x18006C660 (RmgrSrv_RmGetNotification.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x180039BFC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x18003ADC0 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z @ 0x18008B7AC (-GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmGetNotification(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2,
        struct ExecutionModel::ExternalResourceNotification *a3)
{
  ExecutionModel::ResourceManager *v3; // rbx
  int ResourceSetFromHandle; // eax
  ExecutionModel::ExternalResourceSet *v7; // rdi
  int NextMessage; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  ExecutionModel::ExternalResourceSet *v13; // [rsp+40h] [rbp-D8h] BYREF
  int v14; // [rsp+48h] [rbp-D0h] BYREF
  struct ExecutionModel::ResourceHandle__ *v15; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v16[144]; // [rsp+60h] [rbp-B8h] BYREF

  v3 = g_pResourceManager;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  v13 = 0LL;
  RmpAcquireGlobalLock();
  ResourceSetFromHandle = ExecutionModel::ResourceManager::GetResourceSetFromHandle(v3, a2, &v13);
  v7 = v13;
  NextMessage = ResourceSetFromHandle;
  if ( ResourceSetFromHandle >= 0 )
  {
    NextMessage = ExecutionModel::ExternalResourceSet::GetNextMessage(v13, a3);
    if ( NextMessage >= 0 )
      NextMessage = 0;
  }
  RmpReleaseGlobalLock();
  if ( v7 )
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v14 = *(_DWORD *)a3;
    v15 = a2;
    LODWORD(v13) = NextMessage;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v9,
      byte_1800C3672,
      v10,
      v11,
      (__int64)&v13,
      (__int64)&v15,
      (__int64)&v14);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)NextMessage;
}
