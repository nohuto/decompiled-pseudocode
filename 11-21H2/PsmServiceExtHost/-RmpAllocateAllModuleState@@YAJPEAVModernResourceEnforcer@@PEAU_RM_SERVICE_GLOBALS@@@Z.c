/*
 * XREFs of ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180049BB4
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x1800494DC (RmpCreateResourceManagerServer.c)
 * Callees:
 *     ?CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@PEAPEAVResourceManager@1@@Z @ 0x180049D48 (-CreateResourceManager@ExecutionModel@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@P.c)
 *     ?HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z @ 0x18004A9A8 (-HampWakeManagerAllocateState@@YAJPEAU_HAM_WAKE_REFERENCE_MANAGER@@@Z.c)
 *     ?HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18004AA08 (-HampPdcAllocateState@@YAJPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18004AAC4 (-RmpGameModeAllocateState@@YAJPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004ABE4 (-RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004ACE8 (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18004ADB4 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
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
            ModuleState = HampPdcAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2584));
            if ( ModuleState >= 0 )
            {
              ModuleState = HampWakeManagerAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2712));
              if ( ModuleState >= 0 )
              {
                ModuleState = TpAllocTimer((char *)a2 + 560, RmpTelemetryTimerCallback, a2, 0LL);
                if ( ModuleState >= 0 )
                {
                  cbSid = 68;
                  if ( CreateWellKnownSid(WinNullSid, 0LL, (char *)a2 + 3156, &cbSid) )
                  {
                    if ( (int)ExecutionModel::CreateResourceManager(
                                a2,
                                a1,
                                (struct _RM_SERVICE_GLOBALS *)((char *)a2 + 3232),
                                v6) < 0 )
                      return (unsigned int)-1073741823;
                    return v4;
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
  }
  return (unsigned int)ModuleState;
}
