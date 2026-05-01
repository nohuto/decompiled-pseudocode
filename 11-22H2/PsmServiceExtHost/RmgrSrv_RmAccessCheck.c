/*
 * XREFs of RmgrSrv_RmAccessCheck @ 0x180005E80
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180006188 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheck(RPC_BINDING_HANDLE ClientBinding, unsigned int a2, unsigned int a3)
{
  ExecutionModel::ResourceManager *v6; // rsi
  DWORD v7; // ebx
  __int64 v8; // r9
  unsigned int v9; // ebx
  unsigned int v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v13; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+3Ch] [rbp-C4h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v16; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[56]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp-60h]
  _BYTE TlsValue[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+160h] [rbp+60h] BYREF
  void *v22; // [rsp+170h] [rbp+70h]
  int v23; // [rsp+178h] [rbp+78h]
  int v24; // [rsp+17Ch] [rbp+7Ch]
  int *v25; // [rsp+180h] [rbp+80h]
  int v26; // [rsp+188h] [rbp+88h]
  int v27; // [rsp+18Ch] [rbp+8Ch]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+190h] [rbp+90h] BYREF
  void *v29; // [rsp+1A0h] [rbp+A0h]
  int v30; // [rsp+1A8h] [rbp+A8h]
  int v31; // [rsp+1ACh] [rbp+ACh]
  int *v32; // [rsp+1B0h] [rbp+B0h]
  __int64 v33; // [rsp+1B8h] [rbp+B8h]
  int *v34; // [rsp+1C0h] [rbp+C0h]
  __int64 v35; // [rsp+1C8h] [rbp+C8h]
  int *v36; // [rsp+1D0h] [rbp+D0h]
  __int64 v37; // [rsp+1D8h] [rbp+D8h]

  RpcCallAttributes[1] = 16;
  RpcCallAttributes[0] = 2;
  memset_0(v18, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 2) != 0 && (qword_1800DB1F8 & 2) == qword_1800DB1F8 )
  {
    v11 = v19;
    v36 = (int *)&v12;
    v34 = (int *)&v13;
    v32 = (int *)&v11;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DB1E8;
    v12 = a2;
    v13 = a3;
    v37 = 4LL;
    v35 = 4LL;
    v33 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 2LL;
    UserData.Size = *(unsigned __int16 *)off_1800DB1E8;
    v29 = &unk_1800BDD17;
    UserData.Reserved = 2;
    v30 = 66;
    v31 = 1;
    v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v6 = g_pResourceManager;
  memset_0(TlsValue, 0, 0x88uLL);
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, TlsValue);
  }
  RmpAcquireGlobalLock();
  LOBYTE(v8) = 1;
  v9 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v6, a2, a3, v8);
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB1E0 > 4 && (byte_1800DB1F0 & 2) != 0 && (qword_1800DB1F8 & 2) == qword_1800DB1F8 )
  {
    v27 = 0;
    v25 = (int *)&v11;
    *(_DWORD *)&v16.Level = 516;
    v21.Ptr = (ULONGLONG)off_1800DB1E8;
    v11 = v9;
    v26 = 4;
    *(_DWORD *)&v16.Id = 184549376;
    v16.Keyword = 2LL;
    v21.Size = *(unsigned __int16 *)off_1800DB1E8;
    v22 = &unk_1800BD9A5;
    v21.Reserved = 2;
    v23 = 35;
    v24 = 1;
    v14 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v16, 0LL, 0LL, 3u, &v21);
  }
  return v9;
}
