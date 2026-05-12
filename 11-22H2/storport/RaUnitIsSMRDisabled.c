/*
 * XREFs of RaUnitIsSMRDisabled @ 0x1C00196F8
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1C001F9F8 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C001FB5C (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C00A0A34 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C00A0A94 (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitIsSMRDisabled(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = *(_BYTE **)(a1 + 104);
  if ( !v1 || (*v1 & 0x1F) != 0x14 )
    return 0LL;
  if ( IsSMREnabled && *(int *)(*(_QWORD *)(a1 + 24) + 4600LL) <= 1 )
    return *(_BYTE *)(a1 + 451) & 1;
  return 1LL;
}
