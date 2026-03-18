/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021864C
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02185D4 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01E285C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0206098 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x1C02186E0 (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3D18 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x1C03B47DC (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v3; // r9
  ULONG v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // r15
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  NTSTATUS v14; // eax
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r14
  int IsTargetForceable; // eax
  MONITOR_MGR *v19; // rcx
  __int64 v20; // rax
  void *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  int SimulatedMonitor; // esi
  NTSTATUS v25; // eax
  unsigned __int8 v26[8]; // [rsp+30h] [rbp-89h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-79h] BYREF
  __int64 v29; // [rsp+48h] [rbp-71h]
  UNICODE_STRING String2; // [rsp+50h] [rbp-69h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  char KeyValueInformation[12]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v33; // [rsp+7Ch] [rbp-3Dh]
  WCHAR SourceString[32]; // [rsp+90h] [rbp-29h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
  {
    if ( !KeyHandle )
      WdLogSingleEntry0(1LL);
    v5 = -1;
    ResultLength = 0;
    v6 = 0LL;
    v7 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        ++v5;
        if ( !v6 )
        {
          v6 = operator new[](0x60uLL, 0x4D677844u, 256LL, v3);
          if ( !v6 )
          {
            WdLogSingleEntry0(6LL);
            return 3221225495LL;
          }
        }
        *(_DWORD *)(v6 + 8) = -1;
        v8 = v6 + 12;
        v9 = ZwEnumerateValueKey(KeyHandle, v5, KeyValueBasicInformation, (PVOID)(v6 + 12), 0x4Eu, &ResultLength);
        if ( v9 == -2147483622 )
        {
          v20 = WdLogNewEntry5_WdTrace(v11, v10);
          *(_QWORD *)(v20 + 24) = v5;
          v21 = (void *)v6;
          *(_QWORD *)(v20 + 32) = this;
          while ( 1 )
          {
            operator delete[](v21);
            if ( !v7 )
              break;
            v22 = v7;
            v7 = *(_QWORD *)v7;
            v23 = *(unsigned int *)(v22 + 8);
            if ( (_DWORD)v23 == -1 )
            {
              v25 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, (PCWSTR)(v22 + 24));
              if ( v25 < 0 )
                WdLogSingleEntry1(2LL, v25);
            }
            else
            {
              v29 = 0LL;
              SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(this, v23, 2LL);
              if ( SimulatedMonitor >= 0 && !v29 )
                WdLogSingleEntry0(1LL);
              MONITOR_MGR::_LogMonitorPresentEvent(
                (__int64)this,
                1073741825,
                *(_DWORD *)(v22 + 8),
                SimulatedMonitor,
                0LL);
            }
            v21 = (void *)v22;
          }
          ZwClose(KeyHandle);
          return 0LL;
        }
        if ( v9 < 0 )
        {
          v12 = v9;
          goto LABEL_15;
        }
        *(_WORD *)(v6 + 12 + 2 * ((unsigned __int64)*(unsigned int *)(v6 + 20) >> 1) + 12) = 0;
        *(_QWORD *)v6 = v7;
        v7 = v6;
        v13 = *(_DWORD *)(v6 + 16);
        v6 = 0LL;
        if ( v13 == 4 )
          break;
        v12 = *(unsigned int *)(v8 + 4);
LABEL_15:
        WdLogSingleEntry2(3LL, v5, v12);
      }
      v14 = ZwEnumerateValueKey(KeyHandle, v5, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v15 = v14;
      if ( v14 == -2147483622 )
        break;
      if ( v14 < 0 )
      {
LABEL_7:
        WdLogSingleEntry2(3LL, v5, v15);
      }
      else
      {
        v16 = *((_QWORD *)this + 3);
        v17 = v33;
        v26[0] = 0;
        IsTargetForceable = DmmIsTargetForceable(*(DXGADAPTER **)(v16 + 16), v33, v26, 0);
        if ( IsTargetForceable < 0 )
        {
          if ( IsTargetForceable == -1071774971 )
LABEL_26:
            WdLogSingleEntry1(3LL, v17);
        }
        else
        {
          if ( !v26[0] )
            goto LABEL_26;
          if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(v19, v17, SourceString) >= 0 )
          {
            DestinationString = 0LL;
            String2 = 0LL;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)(v8 + 12));
            RtlInitUnicodeString(&String2, SourceString);
            if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
              WdLogSingleEntry0(3LL);
            else
              *(_DWORD *)(v7 + 8) = v17;
          }
        }
      }
    }
    WdLogSingleEntry0(1LL);
    goto LABEL_7;
  }
  return 0LL;
}
