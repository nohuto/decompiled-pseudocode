/*
 * XREFs of RaidDiagnosticIoctlStatusToNtStatus @ 0x1C003B008
 * Callers:
 *     RaidAdapterDiagnosticIoctl @ 0x1C00A5C58 (RaidAdapterDiagnosticIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C00A99B0 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidDiagnosticIoctlStatusToNtStatus(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return 0LL;
  v1 = a1 - 1;
  if ( !v1 )
    return 3221225507LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 3221225485LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3221225485LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3221266432LL;
  v5 = v4 - 1;
  if ( !v5 )
    return 3221225485LL;
  if ( v5 == 1 )
    return 2147483653LL;
  return 3221225473LL;
}
