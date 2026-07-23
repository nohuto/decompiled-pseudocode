/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x140A5D694
 * Callers:
 *     BiCloseStore @ 0x1408028D8 (BiCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C540 (BcdForciblyUnloadStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x140804300 (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x140A5EBEC (BiExportStoreAlterationsToEfi.c)
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
