/*
 * XREFs of ??$ReadAcquire@EX@mem@@YAEPEDE@Z @ 0x1C0052520
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x1C011F458 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 mem::ReadAcquire<unsigned char,void>()
{
  return ndisEnableNicAutoPowerSaverInSleepStudy;
}
