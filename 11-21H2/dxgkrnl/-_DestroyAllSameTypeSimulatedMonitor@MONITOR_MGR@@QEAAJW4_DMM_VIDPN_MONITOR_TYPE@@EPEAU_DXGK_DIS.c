/*
 * XREFs of ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01B4D88
 * Callers:
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C01B8534 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 *     MonitorAdapterPowerChange @ 0x1C01F2BB8 (MonitorAdapterPowerChange.c)
 * Callees:
 *     ??$?9V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1C000954C (--$-9V-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@det.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C0012EA0 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01E285C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3F00 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C020B6F8 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C039C424 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C03B3B18 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z @ 0x1C03B5C54 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXPEAV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // r15
  __int64 *v12; // rax
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 *v16; // rcx
  __int64 **v17; // rax
  __int64 **v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 *v22; // rcx
  DXGMONITOR *v23; // rsi
  unsigned int v24; // ebx
  unsigned int v25; // eax
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+28h] [rbp-40h]
  struct _KTHREAD **v28; // [rsp+30h] [rbp-38h] BYREF
  struct _KTHREAD **v29; // [rsp+38h] [rbp-30h] BYREF
  struct _KTHREAD **v30; // [rsp+40h] [rbp-28h] BYREF
  __int64 *v31; // [rsp+48h] [rbp-20h] BYREF
  __int64 **v32; // [rsp+50h] [rbp-18h]
  struct _KTHREAD **v33; // [rsp+B0h] [rbp+48h] BYREF
  int v34; // [rsp+B8h] [rbp+50h]
  char v35; // [rsp+C0h] [rbp+58h]
  __int64 v36; // [rsp+C8h] [rbp+60h]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v4 = a4;
  if ( a2 == 1 )
    WdLogSingleEntry0(1LL);
  v32 = &v31;
  v31 = (__int64 *)&v31;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v33, (struct DXGFASTMUTEX *)(a1 + 80));
  v6 = (__int64 *)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 40);
  if ( v7 == a1 + 40 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (__int64 *)(v7 - 152);
    if ( !v7 )
      v8 = 0LL;
  }
  MUTEX_LOCK::~MUTEX_LOCK(&v33);
  if ( v8 )
  {
    while ( 1 )
    {
      MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v28, (struct DXGFASTMUTEX *)(a1 + 80));
      v9 = v8 + 19;
      v10 = (__int64 *)v8[19];
      if ( v10 == v6 )
      {
        v11 = 0LL;
      }
      else
      {
        v11 = v10 - 19;
        if ( !v10 )
          v11 = 0LL;
      }
      MUTEX_LOCK::~MUTEX_LOCK(&v28);
      if ( v34 == *((_DWORD *)v8 + 78) )
      {
        if ( !v35
          || (v14 = *(_QWORD *)(a1 + 24),
              v15 = *((_DWORD *)v8 + 45),
              LOBYTE(v33) = 0,
              DmmIsTargetInClientVidPnTopology(*(void *const *)(v14 + 16), v15, (unsigned __int8 *)&v33) >= 0)
          && !(_BYTE)v33 )
        {
          MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v29, (struct DXGFASTMUTEX *)(a1 + 80));
          v16 = (__int64 *)*v9;
          if ( *(__int64 **)(*v9 + 8) != v9 )
            goto LABEL_36;
          v17 = (__int64 **)v8[20];
          if ( *v17 != v9 )
            goto LABEL_36;
          *v17 = v16;
          v16[1] = (__int64)v17;
          v18 = v32;
          if ( *v32 != (__int64 *)&v31 )
            goto LABEL_36;
          v8[20] = (__int64)v32;
          *v9 = (__int64)&v31;
          *v18 = v9;
          v32 = (__int64 **)(v8 + 19);
          MUTEX_LOCK::~MUTEX_LOCK(&v29);
          v19 = v8[40];
          if ( v19 )
          {
            if ( *(_DWORD *)(v19 + 312) != 1 )
              WdLogSingleEntry0(1LL);
            MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v30, (struct DXGFASTMUTEX *)(a1 + 80));
            v20 = *v6;
            v21 = (_QWORD *)(v8[40] + 152);
            if ( *(__int64 **)(*v6 + 8) != v6 )
              goto LABEL_36;
            *v21 = v20;
            v21[1] = v6;
            *(_QWORD *)(v20 + 8) = v21;
            *v6 = (__int64)v21;
            MUTEX_LOCK::~MUTEX_LOCK(&v30);
            if ( MONITOR_MGR::_UsingCCDNameForTTM
              || wil::operator!=<wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>>((_QWORD *)(v8[25] + 40)) )
            {
              DXGMONITOR::_CreateTtmDevice((DXGMONITOR *)v8[40]);
            }
          }
          else
          {
            --*(_DWORD *)(a1 + 32);
          }
        }
      }
      v8 = v11;
      if ( !v11 )
      {
        v4 = v36;
        break;
      }
    }
  }
  while ( 1 )
  {
    v12 = v31;
    if ( v31 == (__int64 *)&v31 )
      break;
    if ( (__int64 **)v31[1] != &v31 || (v22 = (__int64 *)*v31, *(__int64 **)(*v31 + 8) != v31) )
LABEL_36:
      __fastfail(3u);
    v23 = (DXGMONITOR *)(v31 - 19);
    v31 = (__int64 *)*v31;
    v22[1] = (__int64)&v31;
    if ( v12 == (__int64 *)152 )
      break;
    v24 = *((_DWORD *)v23 + 45);
    v27 = v4;
    LODWORD(v26) = *((_DWORD *)v23 + 78);
    MONITOR_MGR::_IssueMonitorEvent(a1 + 8, v24, 0LL, 2LL, v26, v4);
    DXGMONITOR::_SetAttachedPhysicalMonitor(v23, 0LL);
    v25 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v23);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 1073741826LL, v24, v25, 0LL);
  }
  return 0LL;
}
