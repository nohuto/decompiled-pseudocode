/*
 * XREFs of RaidUnitDeviceHealthTelemetrySupported @ 0x1C001C818
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C001B5D8 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     <none>
 */

char __fastcall RaidUnitDeviceHealthTelemetrySupported(__int64 a1)
{
  char v1; // dl
  _BYTE *v2; // rax
  char v3; // al
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v10; // ecx
  int v11; // ecx

  v1 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 5296LL) )
    return 0;
  v2 = *(_BYTE **)(a1 + 104);
  if ( !v2 )
    return 0;
  v3 = *v2 & 0x1F;
  if ( v3 )
  {
    if ( v3 != 20 )
      return 0;
  }
  if ( *(_DWORD *)(a1 + 48) != 1 )
    return 0;
  v4 = *(_DWORD *)(a1 + 3344) - 1;
  if ( !v4 )
    return 1;
  v5 = v4 - 1;
  if ( !v5 )
    return 1;
  v6 = v5 - 1;
  if ( !v6 )
    return 1;
  v7 = v6 - 5;
  if ( !v7 )
    return 1;
  v8 = v7 - 2;
  if ( !v8 )
    return 1;
  v10 = v8 - 1;
  if ( !v10 )
    return 1;
  v11 = v10 - 6;
  if ( !v11 || v11 == 2 )
    return 1;
  return v1;
}
