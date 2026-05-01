/*
 * XREFs of IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180049F44
 * Callers:
 *     ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x18000F884 (-RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z.c)
 *     PsmInitializeServiceExtension4 @ 0x1800439F0 (PsmInitializeServiceExtension4.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180045040 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z @ 0x180046420 (-RmpSystemSetSystemAllowedCpuSets@@YAJPEA_K@Z.c)
 *     ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800467B8 (-RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpSystemQueryPackagePartitions@@YAJPEBGPEAPEAX1PEAK@Z @ 0x1800515D4 (-RmpSystemQueryPackagePartitions@@YAJPEBGPEAPEAX1PEAK@Z.c)
 *     ?RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z @ 0x18008F30C (-RmpSystemNotifyGameModeExtensionStateChange@@YAXPEAXE@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18004A2A0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsNotifyGameModeExtensionRecipientsPresentPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800DBEF0 == 1 )
    return 1;
  if ( dword_1800DBEF0 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"68", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800DBEF0 = 2 - (v1 != 0);
  return result;
}
