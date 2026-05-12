/*
 * XREFs of RaidDiagnosticIoctlStatusToNtStatus @ 0x1C00399AC
 * Callers:
 *     RaidAdapterDiagnosticIoctl @ 0x1C008BED4 (RaidAdapterDiagnosticIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C008F264 (RaUnitStorageDiagnosticIoctl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidDiagnosticIoctlStatusToNtStatus(unsigned int a1)
{
  if ( !a1 )
    return 0LL;
  if ( a1 == 1 )
    return 3221225507LL;
  if ( a1 <= 3 )
    return 3221225485LL;
  switch ( a1 )
  {
    case 4u:
      return 3221266432LL;
    case 5u:
      return 3221225485LL;
    case 6u:
      return 2147483653LL;
  }
  return 3221225473LL;
}
