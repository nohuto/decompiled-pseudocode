/*
 * XREFs of ?ScGetDriveHeaderVersion@@YAEW4_SC_VERSION@@@Z @ 0x1C0007088
 * Callers:
 *     PmCreateSpacesMetadata @ 0x1C001EEA8 (PmCreateSpacesMetadata.c)
 * Callees:
 *     <none>
 */

char __fastcall ScGetDriveHeaderVersion(int a1)
{
  if ( a1 > 21 )
    return 3;
  if ( a1 <= 8 )
    return a1 > 0;
  return 2;
}
