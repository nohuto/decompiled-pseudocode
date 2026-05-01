/*
 * XREFs of RmgrSrv_RmAccessCheckOnCaller @ 0x18006C380
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180006188 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180055166 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheckOnCaller(RPC_BINDING_HANDLE ClientBinding, unsigned int a2)
{
  DWORD v4; // esi
  __int64 v5; // r8
  __int64 v6; // r9
  struct _RM_SERVICE_GLOBALS **v7; // rbx
  DWORD v8; // ebx
  DWORD v10; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v11[3]; // [rsp+34h] [rbp-CCh] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v13[56]; // [rsp+48h] [rbp-B8h] BYREF
  DWORD v14; // [rsp+80h] [rbp-80h]
  char v15[144]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+140h] [rbp+40h] BYREF
  DWORD *v17; // [rsp+160h] [rbp+60h]
  int v18; // [rsp+168h] [rbp+68h]
  int v19; // [rsp+16Ch] [rbp+6Ch]

  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v13, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v4 = v14;
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 2LL) )
  {
    v11[0] = a2;
    v10 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800DB1E0,
      byte_1800BDBAA,
      v5,
      v6,
      (__int64)&v10,
      (__int64)v11);
  }
  v7 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  RmpAcquireGlobalLock();
  v8 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v7, a2, v4, 1);
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 2LL) )
  {
    v19 = 0;
    v17 = &v10;
    v10 = v8;
    v18 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB1E0,
      (unsigned __int8 *)dword_1800BDB3A,
      0LL,
      0LL,
      3u,
      &v16);
  }
  return v8;
}
