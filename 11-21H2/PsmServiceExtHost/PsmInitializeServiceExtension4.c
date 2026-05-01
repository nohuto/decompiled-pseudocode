/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x180048C40
 * Callers:
 *     <none>
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18004822C (-CreateModernResourceEnforcer@@YAJPEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@PEAPEAVModernResourceEn.c)
 *     SystemStateTrackerCreate @ 0x1800483B4 (SystemStateTrackerCreate.c)
 *     SystemStateTrackerStart @ 0x18004850C (SystemStateTrackerStart.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180048EE8 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     ?ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z @ 0x1800490CC (-ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@PEAU_WNF_STATE_NAME@@@Z.c)
 *     RmpLaunchAllRpcServers @ 0x180049284 (RmpLaunchAllRpcServers.c)
 *     ?InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerProxy@@@Z @ 0x180049484 (-InitializeResourceManagerServerProxy@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAPEAVResourceManagerServerP.c)
 *     RmpCreateResourceManagerServer @ 0x1800494DC (RmpCreateResourceManagerServer.c)
 *     ??1?$CComPtrBase@VResourceManagerServerProxy@@@ATL@@QEAA@XZ @ 0x18004DCD0 (--1-$CComPtrBase@VResourceManagerServerProxy@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     IsQueryUserTokenPresent @ 0x18004EA0C (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x18004EAEC (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x18004ECE4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006D334 (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180083618 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800837C4 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

__int64 __fastcall PsmInitializeServiceExtension4(struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1)
{
  struct _ACTIVITY_RESTARTER *v2; // rcx
  int ResourceManagerServer; // ebx
  struct _ACTIVITY_RESTARTER **v4; // rcx
  struct _RM_SERVICE_GLOBALS *v5; // rbx
  int v7; // ebx
  struct _RM_SERVICE_GLOBALS *v8; // rdi
  struct ModernResourceEnforcer *v9; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v10[5]; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v11[144]; // [rsp+50h] [rbp-A8h] BYREF

  v9 = 0LL;
  HampLockTrackerId = TlsAlloc();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  RmSvcGlobals = 0LL;
  if ( (unsigned __int8)IsPsmQueryBackgroundActivationTypePresent()
    && (unsigned __int8)IsQueryUserTokenPresent()
    && (int)CreateModernResourceEnforcer(a1, &v9) >= 0 )
  {
    ResourceManagerServer = SystemStateTrackerCreate();
    if ( ResourceManagerServer < 0
      || (ResourceManagerServer = SystemStateTrackerStart(), ResourceManagerServer < 0)
      || (RmSvcGlobals = (struct _RM_SERVICE_GLOBALS *)&RmpSvcGlobals,
          TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1800DC1E0),
          TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1800DC218),
          ResourceManagerServer = RmpCreateResourceManagerServer(v9, RmSvcGlobals),
          ResourceManagerServer < 0) )
    {
LABEL_13:
      v7 = ResourceManagerServer | 0x10000000;
      if ( v7 >= 0 )
        goto LABEL_12;
      goto LABEL_14;
    }
    g_pResourceManager = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 404);
    (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)g_pResourceManager + 8LL))(g_pResourceManager);
    if ( (int)InitializeResourceManagerServerProxy(RmSvcGlobals, &g_pProxy) >= 0 )
    {
      ResourceManagerServer = RmpLaunchAllRpcServers();
      if ( ResourceManagerServer >= 0 )
      {
        ArLockTrackerId = TlsAlloc();
        ResourceManagerServer = ArManagerCreate(v4, &stru_1800DE160);
        if ( ResourceManagerServer >= 0 )
        {
          v5 = RmSvcGlobals;
          if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
          {
            v10[0] = RmGameModeCpuSetManagerCreateClientContext;
            v10[1] = RmGameModeCpuSetManagerAcquireExplicitCpuSets;
            v10[2] = RmGameModeCpuSetManagerRegisterProcessWithAllocation;
            v10[3] = RmGameModeCpuSetManagerReleaseAllocation;
            v10[4] = RmGameModeCpuSetManagerReleaseProcessRegistration;
            InitializeGameModeExtension(v10, v5);
          }
          goto LABEL_12;
        }
      }
      goto LABEL_13;
    }
  }
LABEL_14:
  v8 = RmSvcGlobals;
  if ( RmSvcGlobals )
  {
    RmpRundownAllModules(RmSvcGlobals);
    RmpCleanupAllModules(v8);
    RmSvcGlobals = 0LL;
  }
  if ( ArGlobals )
  {
    ArManagerDestroy(v2);
    ArGlobals = 0LL;
  }
LABEL_12:
  CempLockTrackerClearForThread(HampLockTrackerId);
  return ATL::CComPtrBase<ResourceManagerServerProxy>::~CComPtrBase<ResourceManagerServerProxy>(&v9);
}
