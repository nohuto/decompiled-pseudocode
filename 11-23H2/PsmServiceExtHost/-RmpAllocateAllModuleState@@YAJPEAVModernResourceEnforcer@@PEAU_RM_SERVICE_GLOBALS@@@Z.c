/*
 * XREFs of ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800448B8
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180043E3C (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180044A60 (-RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180044AB8 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180044BAC (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044D54 (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180044E20 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800457A4 (-RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?AllocateState@ModernResourceEnforcer@@QEAAJPEAU_TP_CALLBACK_ENVIRON_V3@@@Z @ 0x18004F188 (-AllocateState@ModernResourceEnforcer@@QEAAJPEAU_TP_CALLBACK_ENVIRON_V3@@@Z.c)
 */

__int64 __fastcall RmpAllocateAllModuleState(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  unsigned int v4; // ebx
  int ModuleState; // r8d
  struct ExecutionModel::ResourceManager **v6; // r9
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-28h]
  int v12; // [rsp+48h] [rbp-20h]
  __int128 v13; // [rsp+50h] [rbp-18h]
  DWORD cbSid; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  ModuleState = RmpActivityHostAllocateModuleState(a2);
  if ( ModuleState >= 0 )
  {
    ModuleState = RmpCpuSetManagerAllocateState(a2);
    if ( ModuleState >= 0 )
    {
      ModuleState = RmpEnforcerContextAllocateState(a1, a2);
      if ( ModuleState >= 0 )
      {
        ModuleState = RmpGameModeAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2096));
        if ( ModuleState >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartition0");
          v9 = 48;
          p_DestinationString = &DestinationString;
          v10 = 0LL;
          v12 = 64;
          v13 = 0LL;
          ModuleState = NtOpenPartition((char *)a2 + 360, 1LL, &v9);
          if ( ModuleState >= 0 )
          {
            ModuleState = HampManagerAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2248));
            if ( ModuleState >= 0 )
            {
              ModuleState = TpAllocTimer((char *)a2 + 560, RmpTelemetryTimerCallback, a2, (char *)a2 + 3224);
              if ( ModuleState >= 0 )
              {
                cbSid = 68;
                if ( CreateWellKnownSid(WinNullSid, 0LL, (char *)a2 + 3460, &cbSid) )
                {
                  if ( !a1
                    || (ModuleState = ModernResourceEnforcer::AllocateState(
                                        a1,
                                        (struct _TP_CALLBACK_ENVIRON_V3 *)((char *)a2 + 3224)),
                        ModuleState >= 0) )
                  {
                    if ( (int)ExecutionModel::CreateResourceManager(
                                a2,
                                a1,
                                (struct _RM_SERVICE_GLOBALS *)((char *)a2 + 3536),
                                v6) < 0 )
                      return (unsigned int)-1073741823;
                    return v4;
                  }
                }
                else
                {
                  return (unsigned int)-1073741823;
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)ModuleState;
}
