/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x140A5D3E4
 * Callers:
 *     BiCloseStore @ 0x140802608 (BiCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C290 (BcdForciblyUnloadStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x140804030 (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x140A5E93C (BiExportStoreAlterationsToEfi.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(__int64 a1)
{
  int v2; // eax
  int v3; // eax

  v2 = BiGetFirmwareType() - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return BiExportStoreAlterationsToEfi(a1);
    if ( v3 != 1 )
      return 3221225659LL;
  }
  return 0LL;
}
