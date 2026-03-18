/*
 * XREFs of ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3D18
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021864C (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C03AFD5C (MonitorCreateSimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3F00 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C0207674 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0208748 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0208A68 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C020B6F8 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C03B34FC (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3618 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C03B3B18 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C03B452C (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C03B5418 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z @ 0x1C03B5C54 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateSimulatedMonitor(
        MONITOR_MGR *a1,
        unsigned int a2,
        unsigned int a3,
        struct DXGMONITOR *a4,
        struct DXGMONITOR *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  struct DXGMONITOR *v6; // r12
  struct DXGMONITOR *v11; // rdi
  int MonitorInstance; // eax
  struct DXGMONITOR *v13; // rsi
  int v14; // r13d
  int v16; // ebx
  int EmergencySimulatedMonitor; // eax
  int v18; // r13d
  struct DXGMONITOR *v19; // rbx
  char v20; // dl
  __int64 v21; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct DXGMONITOR *v26; // [rsp+30h] [rbp-38h] BYREF

  v6 = a5;
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( a2 == -1 )
    WdLogSingleEntry0(1LL);
  if ( a3 == 1 )
    WdLogSingleEntry0(1LL);
  a5 = 0LL;
  v11 = 0LL;
  v26 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, a2, 0, &a5);
  v13 = a5;
  v14 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( a5 )
      WdLogSingleEntry0(1LL);
    if ( v14 != -1073741275 )
      WdLogSingleEntry0(1LL);
    EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(a1, &v26);
    if ( EmergencySimulatedMonitor < 0 )
    {
      if ( EmergencySimulatedMonitor != -1073741275 )
        WdLogSingleEntry0(1LL);
      v11 = v26;
      if ( !v26 )
        goto LABEL_30;
    }
    else
    {
      v11 = v26;
      if ( v26 )
        goto LABEL_30;
    }
    WdLogSingleEntry0(1LL);
    goto LABEL_30;
  }
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  if ( a3 == 5 )
    return 3223192973LL;
  if ( *((_DWORD *)v13 + 78) != 1 )
  {
    v16 = MONITOR_MGR::_MigrateSimulatedMonitor(a1, a2, a3, a4, v6);
    if ( v16 >= 0 )
    {
      if ( !*(_QWORD *)v6 )
        WdLogSingleEntry0(1LL);
      MONITOR_MGR::_IssueMonitorEvent((_QWORD *)a1 + 1, a2, 0, 3LL, a3, (__int64)a6);
    }
    return (unsigned int)v16;
  }
  MONITOR_MGR::_RemoveMonitorFromList(a1, v13);
LABEL_30:
  a5 = 0LL;
  if ( !a4 )
    a4 = v13;
  v18 = MONITOR_MGR::_CreateSimulatedMonitor((__int64)a1, a2, a3, a4, &a5, a6);
  if ( v18 >= 0 )
  {
    v19 = a5;
    if ( !a5 )
      WdLogSingleEntry0(1LL);
    if ( v13 )
    {
      if ( *((_DWORD *)v13 + 78) != 1 )
        WdLogSingleEntry0(1LL);
      *((_BYTE *)v19 + 176) ^= (*((_BYTE *)v13 + 176) ^ *((_BYTE *)v19 + 176)) & 2;
      v20 = *((_BYTE *)v19 + 176) ^ (*((_BYTE *)v19 + 176) ^ *((_BYTE *)v13 + 176)) & 4;
      *((_BYTE *)v19 + 176) = v20;
      *((_BYTE *)v19 + 176) = v20 ^ (v20 ^ *((_BYTE *)v13 + 176)) & 0x20;
      DXGMONITOR::_SetAttachedPhysicalMonitor(v19, v13);
      DXGMONITOR::_DestroyTtmDevice(v13);
    }
    if ( v11 )
      MONITOR_MGR::_RemoveMonitorFromList(a1, v11);
    MONITOR_MGR::_InsertMonitorToList(a1, v19);
    if ( a3 == 2 )
      v18 = MONITOR_MGR::_AddTargetIntoPersistencyRegistry(a1, a2);
    if ( *((_QWORD *)v19 + 40) )
      v21 = 3LL;
    else
      v21 = *(_DWORD *)(*((_QWORD *)v19 + 30) + 16LL) != 0 ? 4LL : 1LL;
    v22 = a6;
    MONITOR_MGR::_IssueMonitorEvent(
      (_QWORD *)a1 + 1,
      *((_DWORD *)v19 + 45),
      (*((_BYTE *)v19 + 176) & 0x40) != 0 ? 0 : 7,
      v21,
      *((_DWORD *)v19 + 78),
      (__int64)a6);
    if ( v11 )
    {
      MONITOR_MGR::_IssueMonitorEvent(
        (_QWORD *)a1 + 1,
        *((_DWORD *)v11 + 45),
        0,
        2LL,
        *((_DWORD *)v11 + 78),
        (__int64)v22);
      MONITOR_MGR::_DestroySimulatedMonitor(a1, v11);
    }
    DXGMONITOR::_CreateTtmDevice(v19, v23, v24, v25);
    *(_QWORD *)v6 = v19;
  }
  return (unsigned int)v18;
}
