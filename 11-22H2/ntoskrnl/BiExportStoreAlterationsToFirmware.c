/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x140A5D454
 * Callers:
 *     BiCloseStore @ 0x140804B8C (BiCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C300 (BcdForciblyUnloadStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x1408065B4 (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x140A5E9AC (BiExportStoreAlterationsToEfi.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(HANDLE BcdStoreHandle)
{
  int v2; // eax
  int v3; // eax

  v2 = BiGetFirmwareType() - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return BiExportStoreAlterationsToEfi(BcdStoreHandle);
    if ( v3 != 1 )
      return 3221225659LL;
  }
  return 0LL;
}
