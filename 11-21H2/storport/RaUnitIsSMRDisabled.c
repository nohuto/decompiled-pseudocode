/*
 * XREFs of RaUnitIsSMRDisabled @ 0x1C001E0F4
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1C001F740 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C001F8A0 (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C0087340 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0089094 (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitIsSMRDisabled(__int64 a1)
{
  _BYTE *v1; // rax
  __int64 result; // rax

  v1 = *(_BYTE **)(a1 + 104);
  if ( !v1 )
    return 0LL;
  if ( (*v1 & 0x1F) != 0x14 )
    return 0LL;
  result = 1LL;
  if ( IsSMREnabled )
  {
    if ( *(int *)(*(_QWORD *)(a1 + 24) + 4536LL) <= 1 && (*(_BYTE *)(a1 + 451) & 1) == 0 )
      return 0LL;
  }
  return result;
}
