/*
 * XREFs of ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180043430
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x18000C110 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x180043590 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180055166 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x180082B00 (-RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180082BE4 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

__int64 __fastcall RmpSystemNotificationPowerCallback(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, _QWORD *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  int v7; // ecx
  unsigned int v8; // ebx
  DWORD TickCount; // eax
  unsigned __int64 v10; // r8
  ExecutionModel::ResourceManager *v11; // rcx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v16; // edx
  __int64 v17; // rax
  unsigned int v18; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-B4h]
  unsigned int v20; // [rsp+38h] [rbp-B0h] BYREF
  int v21; // [rsp+3Ch] [rbp-ACh] BYREF
  _BYTE v22[144]; // [rsp+40h] [rbp-A8h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  RmpAcquireGlobalLock();
  v5 = *((_DWORD *)a1 + 164);
  v6 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a3;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a3 )
    v6 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a3[1];
  v7 = *((_DWORD *)a3 + 5);
  if ( v6 )
  {
    if ( v7 )
      v8 = v5 & 0xFFFFFFFD;
    else
      v8 = v5 | 2;
  }
  else
  {
    v8 = v5 | 1;
    if ( !v7 )
      v8 = *((_DWORD *)a1 + 164) & 0xFFFFFFFE;
  }
  v18 = *((_DWORD *)a1 + 164);
  v19 = v8;
  RmpPartitionTableActOnActivePartitions(
    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
    v6,
    (int (*)(struct _RM_PARTITION *, void *))RmpMemoryMonitorInstanceOnSystemStateChanged,
    &v18);
  TickCount = GetTickCount();
  RmpTelemetrySetTimer(a1, (v8 & 1) != 0 ? 3600000 : 900000, TickCount);
  v10 = *((unsigned int *)a1 + 131);
  v11 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 442);
  if ( (_DWORD)v10 )
  {
    v16 = (v19 >> 1) & 1;
    if ( ((v18 >> 1) & 1) != v16 )
    {
      if ( v16 )
      {
        ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(
          v11,
          *((unsigned int *)a1 + 131),
          (struct ExecutionModel::BaseResourceSet *)v10);
      }
      else
      {
        v17 = *((_QWORD *)v11 + 4);
        *((_QWORD *)v11 + 6) -= v10;
        if ( (*(_BYTE *)(v17 + 1272) & 4) == 0 )
          ExecutionModel::ResourceManager::ReplenishIoCounterPool(v11, v10);
      }
    }
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v21 = *((_DWORD *)a1 + 164);
    v20 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned int)&unk_1800C50ED,
      v13,
      v14,
      (__int64)&v21,
      (__int64)&v20);
  }
  *((_DWORD *)a1 + 164) = v8;
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
