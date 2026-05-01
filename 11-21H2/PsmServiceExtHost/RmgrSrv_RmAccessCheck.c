/*
 * XREFs of RmgrSrv_RmAccessCheck @ 0x18002C050
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180006418 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18002B4FC (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheck(RPC_BINDING_HANDLE ClientBinding, unsigned int a2, DWORD a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  struct _RM_SERVICE_GLOBALS **v8; // r14
  DWORD v9; // ebx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+44h] [rbp-BCh] BYREF
  DWORD v14; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[56]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v17; // [rsp+90h] [rbp-70h]
  _BYTE TlsValue[144]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+150h] [rbp+50h] BYREF
  int *v20; // [rsp+170h] [rbp+70h]
  int v21; // [rsp+178h] [rbp+78h]
  int v22; // [rsp+17Ch] [rbp+7Ch]

  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v16, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 2) != 0 && (qword_1800DC1F8 & 2) == qword_1800DC1F8 )
  {
    v12 = v17;
    v13 = a2;
    v14 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1800DC1E0,
      (int)&unk_1800BCE1C,
      v6,
      v7,
      (__int64)&v12,
      (__int64)&v14,
      (__int64)&v13);
  }
  v8 = (struct _RM_SERVICE_GLOBALS **)g_pResourceManager;
  memset_0(TlsValue, 0, 0x88uLL);
  v9 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v9, TlsValue);
  }
  RmpAcquireGlobalLock();
  v10 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v8, a2, a3, 1);
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 2) != 0 && (qword_1800DC1F8 & 2) == qword_1800DC1F8 )
  {
    v22 = 0;
    v20 = (int *)&v12;
    v12 = v10;
    v21 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800BCAAA,
      0LL,
      0LL,
      3u,
      &v19);
  }
  return v10;
}
