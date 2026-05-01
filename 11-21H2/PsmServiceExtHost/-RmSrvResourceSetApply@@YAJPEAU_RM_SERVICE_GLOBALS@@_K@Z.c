/*
 * XREFs of ?RmSrvResourceSetApply@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18002AC6C
 * Callers:
 *     RmCoreRpcSrvApplyResourceSet @ 0x18002AF70 (RmCoreRpcSrvApplyResourceSet.c)
 *     RmtSrv_RS_Apply @ 0x18006D050 (RmtSrv_RS_Apply.c)
 * Callees:
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18002889C (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x18002AB6C (-Apply@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     CempLockTrackerIsSetForThread @ 0x18002AF38 (CempLockTrackerIsSetForThread.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall RmSrvResourceSetApply(struct _RM_SERVICE_GLOBALS *a1, unsigned __int64 a2)
{
  DWORD v4; // ebx
  int v5; // esi
  int EmSetById; // eax
  ExecutionModel::ResourceSet *v7; // rdi
  int v8; // ebx
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  struct ExecutionModel::ResourceSet *v11; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v13; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v16; // [rsp+100h] [rbp+0h]
  int v17; // [rsp+108h] [rbp+8h]
  int v18; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+110h] [rbp+10h] BYREF
  void *v20; // [rsp+120h] [rbp+20h]
  int v21; // [rsp+128h] [rbp+28h]
  int v22; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v23; // [rsp+130h] [rbp+30h]
  int v24; // [rsp+138h] [rbp+38h]
  int v25; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+140h] [rbp+40h]
  int v27; // [rsp+148h] [rbp+48h]
  int v28; // [rsp+14Ch] [rbp+4Ch]

  if ( (unsigned int)CempLockTrackerIsSetForThread(a1, a2) )
  {
    v5 = 0;
  }
  else
  {
    memset_0(TlsValue, 0, 0x88uLL);
    v4 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v4, TlsValue);
    }
    v5 = 1;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 1) != 0 && (qword_1800DC1F8 & 1) == qword_1800DC1F8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800DC1E8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800DC1E8;
    v16 = &unk_1800C28FE;
    UserData.Reserved = 2;
    v17 = 21;
    v18 = 1;
    v10 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v11 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 536), a2, &v11);
  v7 = v11;
  if ( EmSetById < 0 )
  {
    v8 = EmSetById | 0x10000000;
    RmpReleaseGlobalLock();
  }
  else
  {
    RmpReleaseGlobalLock();
    v8 = ExecutionModel::ResourceSet::Apply(v7);
    if ( v8 >= 0 )
      v8 = 0;
  }
  if ( (unsigned int)dword_1800DC1E0 > 4 && (byte_1800DC1F0 & 9) != 0 && (qword_1800DC1F8 & 9) == qword_1800DC1F8 )
  {
    v28 = 0;
    v25 = 0;
    p_EventDescriptor = &EventDescriptor;
    v23 = &v10;
    *(_DWORD *)&v13.Level = 516;
    v19.Ptr = (ULONGLONG)off_1800DC1E8;
    v24 = 4;
    *(_QWORD *)&EventDescriptor.Id = a2;
    v10 = v8;
    v27 = 8;
    *(_DWORD *)&v13.Id = 184549376;
    v13.Keyword = 9LL;
    v19.Size = *(unsigned __int16 *)off_1800DC1E8;
    v20 = &unk_1800C25E9;
    v19.Reserved = 2;
    v21 = 39;
    v22 = 1;
    LODWORD(v11) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v13, 0LL, 0LL, 4u, &v19);
  }
  if ( v7 )
    (*(void (__fastcall **)(ExecutionModel::ResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v5 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v8;
}
