/*
 * XREFs of RmgrSrv_RegisterWithServer @ 0x180032510
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z @ 0x180032678 (-RegisterCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAXPEAT_LARGE_INTEGER@@1@Z.c)
 *     CempRpcQueryClientInformation @ 0x18003378C (CempRpcQueryClientInformation.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RegisterWithServer(
        RPC_BINDING_HANDLE ClientBinding,
        union _LARGE_INTEGER *a2,
        union _LARGE_INTEGER *a3)
{
  ExecutionModel::ResourceManager *v6; // rcx
  NTSTATUS ClientInformation; // ebx
  unsigned int v8; // edi
  unsigned int v9; // ebx
  signed int v11; // eax
  unsigned int v12[4]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE DestinationSid[80]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[144]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v16; // [rsp+140h] [rbp+40h]
  int v17; // [rsp+148h] [rbp+48h]
  int v18; // [rsp+14Ch] [rbp+4Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  ClientInformation = CempRpcQueryClientInformation(ClientBinding, DestinationSid, 0LL, 0LL, 0LL);
  v8 = v12[0];
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 2LL) )
  {
    v18 = 0;
    v16 = v12;
    v17 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800BCD67,
      0LL,
      0LL,
      3u,
      &v15);
  }
  if ( ClientInformation < 0 )
  {
    v11 = RtlNtStatusToDosError(ClientInformation);
    v9 = v11;
    if ( v11 > 0 )
      v9 = (unsigned __int16)v11 | 0x80070000;
  }
  else
  {
    v9 = ExecutionModel::ResourceManager::RegisterCommitMemoryWnfStates(v6, v8, DestinationSid, a2, a3);
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DC1E0, 2LL) )
  {
    v18 = 0;
    v16 = v12;
    v12[0] = v9;
    v17 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC1E0,
      (unsigned __int8 *)dword_1800BCB41,
      0LL,
      0LL,
      3u,
      &v15);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v9;
}
