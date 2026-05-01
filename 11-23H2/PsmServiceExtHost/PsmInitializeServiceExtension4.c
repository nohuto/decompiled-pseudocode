/*
 * XREFs of PsmInitializeServiceExtension4 @ 0x180043960
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegister_EventRegister_EventSetInformation @ 0x180001008 (TraceLoggingRegister_EventRegister_EventSetInformation.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x180043C98 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     SystemStateTrackerStart @ 0x180043DE0 (SystemStateTrackerStart.c)
 *     RmpCreateResourceManagerServer @ 0x180043E3C (RmpCreateResourceManagerServer.c)
 *     SystemStateTrackerCreate @ 0x180043EA0 (SystemStateTrackerCreate.c)
 *     RmpLaunchAllRpcServers @ 0x1800446B8 (RmpLaunchAllRpcServers.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800494E4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     IsQueryUserTokenPresent @ 0x180049BDC (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x180049CBC (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180049EB4 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     ?ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18004B0D4 (-ArManagerCreate@@YAJPEAU_TP_CALLBACK_ENVIRON_V3@@PEAPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ??0ModernResourceEnforcer@@QEAA@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z @ 0x18004F020 (--0ModernResourceEnforcer@@QEAA@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE4@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006C774 (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180081EB0 (-RmpCleanupAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180082054 (-RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

void __fastcall PsmInitializeServiceExtension4(struct _PSM_EXT_INTERNAL_FUNCTION_TABLE4 *a1)
{
  struct _ACTIVITY_RESTARTER *v2; // rcx
  ModernResourceEnforcer *v3; // rax
  struct ModernResourceEnforcer *v4; // rdi
  int ResourceManagerServer; // ebx
  struct ModernResourceEnforcer *v6; // rcx
  struct _ACTIVITY_RESTARTER **v7; // rdx
  struct _RM_SERVICE_GLOBALS *v8; // rsi
  struct _RM_SERVICE_GLOBALS *v9; // rbx
  _QWORD v10[6]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v11[144]; // [rsp+50h] [rbp-A8h] BYREF

  HampLockTrackerId = TlsAlloc();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  RmSvcGlobals = 0LL;
  if ( !(unsigned __int8)IsPsmQueryBackgroundActivationTypePresent() )
    goto LABEL_14;
  if ( !(unsigned __int8)IsQueryUserTokenPresent() )
    goto LABEL_14;
  v3 = (ModernResourceEnforcer *)operator new(0x130uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v3 )
    goto LABEL_14;
  v4 = ModernResourceEnforcer::ModernResourceEnforcer(v3, a1);
  if ( !v4 )
    goto LABEL_14;
  ResourceManagerServer = SystemStateTrackerCreate();
  v6 = v4;
  if ( ResourceManagerServer >= 0 )
  {
    ResourceManagerServer = SystemStateTrackerStart(v4);
    v6 = v4;
    if ( ResourceManagerServer >= 0 )
    {
      RmSvcGlobals = (struct _RM_SERVICE_GLOBALS *)&RmpSvcGlobals;
      TraceLoggingRegister_EventRegister_EventSetInformation();
      TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1800DB218);
      ResourceManagerServer = RmpCreateResourceManagerServer(v4);
      v6 = v4;
      if ( ResourceManagerServer >= 0 )
      {
        g_pResourceManager = (ExecutionModel::ResourceManager *)*((_QWORD *)RmSvcGlobals + 442);
        (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)g_pResourceManager + 8LL))(g_pResourceManager);
        ResourceManagerServer = RmpLaunchAllRpcServers();
        v6 = v4;
        if ( ResourceManagerServer >= 0 )
        {
          ArLockTrackerId = TlsAlloc();
          ResourceManagerServer = ArManagerCreate((struct _TP_CALLBACK_ENVIRON_V3 *)((char *)RmSvcGlobals + 3224), v7);
          v6 = v4;
          if ( ResourceManagerServer >= 0 )
          {
            v8 = RmSvcGlobals;
            if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent(v4) )
            {
              v10[0] = RmGameModeCpuSetManagerCreateClientContext;
              v10[1] = RmGameModeCpuSetManagerAcquireExplicitCpuSets;
              v10[2] = RmGameModeCpuSetManagerRegisterProcessWithAllocation;
              v10[3] = RmGameModeCpuSetManagerReleaseAllocation;
              v10[4] = RmGameModeCpuSetManagerReleaseProcessRegistration;
              InitializeGameModeExtension(v10, v8);
            }
            v6 = v4;
          }
        }
      }
    }
  }
  (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( ResourceManagerServer < 0 )
  {
LABEL_14:
    if ( ArGlobals )
    {
      ArManagerDestroy(v2);
      ArGlobals = 0LL;
    }
    v9 = RmSvcGlobals;
    if ( RmSvcGlobals )
    {
      RmpRundownAllModules(RmSvcGlobals);
      RmpCleanupAllModules(v9);
      RmSvcGlobals = 0LL;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
