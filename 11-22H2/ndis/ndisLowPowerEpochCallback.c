/*
 * XREFs of ndisLowPowerEpochCallback @ 0x1C00592D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisLowPowerEpochCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
    v4 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
  if ( !v4 && ValueLength == 4 && Value && ndisLowPowerEpoch != (*Value != 0) )
    ndisLowPowerEpoch = *Value != 0;
  return 0LL;
}
