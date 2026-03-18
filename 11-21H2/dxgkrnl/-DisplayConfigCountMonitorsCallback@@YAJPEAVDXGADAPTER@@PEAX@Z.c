/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B3570
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0012B30 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     MonitorGetMonitorType @ 0x1C01B0AC4 (MonitorGetMonitorType.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C01B1404 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01E0260 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *a1, _BYTE *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int EmergentSimulatedTarget; // eax
  __int64 v9; // rbx
  _QWORD *v10; // rbx
  _QWORD *v11; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rbp
  struct HDXGMONITOR__ *v13; // rcx
  _QWORD *v15; // rax
  int MonitorType; // eax
  unsigned int v17; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v19[144]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2360LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContext != NULL", 2360LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v15[3] = a1;
      v15[4] = *((int *)a1 + 102);
      v15[5] = *((unsigned int *)a1 + 101);
    }
    else
    {
      v2 = v5;
    }
  }
  else if ( *((_QWORD *)a1 + 349) )
  {
    if ( a2[25] )
    {
      v17 = -1;
      EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(a1, &v17);
      if ( EmergentSimulatedTarget < 0 )
      {
        WdLogSingleEntry3(3LL, *((int *)a1 + 102), *((unsigned int *)a1 + 101), EmergentSimulatedTarget);
      }
      else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, a1, v17) >= 0
             && (*((_DWORD *)a1 + 109) & 1) != 0 )
      {
        a2[25] = 0;
      }
    }
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 349) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v18, v9);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 120) + 72LL));
    v10 = *(_QWORD **)(v9 + 120);
    v11 = (_QWORD *)v10[3];
    if ( v11 != v10 + 3 )
    {
      for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v11 - 1);
            i;
            i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v10, i) )
      {
        v13 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 14);
        if ( v13 && !*((_DWORD *)i + 23) )
        {
          v17 = 0;
          MonitorType = MonitorGetMonitorType(v13, &v17);
          if ( MonitorType < 0 )
          {
            WdLogSingleEntry2(3LL, i, MonitorType);
            break;
          }
          ++*(_DWORD *)a2;
          if ( (int)v17 > 0 )
          {
            if ( (int)v17 > 2 )
            {
              if ( v17 == 5 )
                ++*((_DWORD *)a2 + 2);
            }
            else
            {
              ++*((_DWORD *)a2 + 1);
            }
          }
        }
      }
    }
    ReferenceCounted::Release((ReferenceCounted *)(v10 + 8));
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v18 + 40));
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
  return v2;
}
