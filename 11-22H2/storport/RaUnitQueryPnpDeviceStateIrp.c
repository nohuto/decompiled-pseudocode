/*
 * XREFs of RaUnitQueryPnpDeviceStateIrp @ 0x1C00A0A34
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00076A0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitIsSMRDisabled @ 0x1C00196F8 (RaUnitIsSMRDisabled.c)
 */

__int64 __fastcall RaUnitQueryPnpDeviceStateIrp(_DWORD *a1, __int64 a2)
{
  CCHAR v2; // dl
  __int64 v3; // rcx
  __int64 v4; // r9

  if ( a1[243] || a1[244] || a1[245] )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (unsigned int)RaUnitIsSMRDisabled((__int64)a1) )
    *(_DWORD *)(v4 + 56) |= 2u;
  if ( (*(_BYTE *)(v3 + 450) & 0x20) != 0 )
    *(_DWORD *)(v4 + 56) |= 4u;
  return RaidCompleteRequestEx((PIRP)v4, v2, 0);
}
