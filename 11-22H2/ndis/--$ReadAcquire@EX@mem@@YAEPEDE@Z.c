/*
 * XREFs of ??$ReadAcquire@EX@mem@@YAEPEDE@Z @ 0x1C0057904
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x1C012B14C (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 mem::ReadAcquire<unsigned char,void>()
{
  return ndisEnableNicAutoPowerSaverInSleepStudy;
}
