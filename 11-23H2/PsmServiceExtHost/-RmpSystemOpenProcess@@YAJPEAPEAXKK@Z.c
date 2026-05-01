/*
 * XREFs of ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18002B254
 * Callers:
 *     ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180010370 (-RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBX.c)
 *     ?GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x18002C7A0 (-GetPSMInfo@ResourceManager@ExecutionModel@@UEAAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003A5A4 (-RmHamFindHostByPid@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST.c)
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004E6A0 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 *     ?HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z @ 0x18008060C (-HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18008297C (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 *     RmGameModeRSrvDisableForRegisteredProcess @ 0x1800856A0 (RmGameModeRSrvDisableForRegisteredProcess.c)
 *     RmGameModeRSrvReenableForRegisteredProcess @ 0x180085700 (RmGameModeRSrvReenableForRegisteredProcess.c)
 *     RmGameModeRSrvRegisterPairedAuxiliaryProcess @ 0x180085760 (RmGameModeRSrvRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeRSrvRegisterProcess @ 0x180085820 (RmGameModeRSrvRegisterProcess.c)
 *     RmGameModeRSrvUnregisterProcess @ 0x1800858A0 (RmGameModeRSrvUnregisterProcess.c)
 *     ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x180088018 (-RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18008B70C (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpSystemOpenProcess(void **a1, ACCESS_MASK a2, unsigned int a3)
{
  unsigned __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v5; // [rsp+30h] [rbp-38h] BYREF

  v5.Length = 48;
  memset(&v5.RootDirectory, 0, 20);
  v4 = a3;
  *(_OWORD *)&v5.SecurityDescriptor = 0LL;
  return NtOpenProcess(a1, a2, &v5, (PCLIENT_ID)&v4);
}
