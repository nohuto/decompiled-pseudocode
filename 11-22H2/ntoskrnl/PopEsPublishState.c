/*
 * XREFs of PopEsPublishState @ 0x140864600
 * Callers:
 *     PopEsUpdateState @ 0x1403C5BF4 (PopEsUpdateState.c)
 *     PopEsWorker @ 0x140873B60 (PopEsWorker.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x1407A7A80 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopEsPublishState()
{
  int v0; // eax
  int Buffer; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]

  v3 = -1;
  v0 = 1;
  if ( PopEsState == 1 )
    v0 = 3;
  Buffer = v0;
  ZwUpdateWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, &Buffer, 8u, 0LL, 0LL, 0, 0);
  return PopSetPowerSettingValueAcDc(&GUID_POWER_SAVING_STATUS, 4u, &PopEsState);
}
