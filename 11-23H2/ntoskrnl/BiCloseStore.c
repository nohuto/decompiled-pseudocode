/*
 * XREFs of BiCloseStore @ 0x140802608
 * Callers:
 *     BcdCloseStore @ 0x140802DF4 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x1408034C4 (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1403699CC (BiSanitizeHandle.c)
 *     BiWasFirmwareModified @ 0x140373C54 (BiWasFirmwareModified.c)
 *     BiSetFirmwareModified @ 0x140373D14 (BiSetFirmwareModified.c)
 *     BiCloseKey @ 0x14080525C (BiCloseKey.c)
 *     BiLogMessage @ 0x140805620 (BiLogMessage.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140A5D3E4 (BiExportStoreAlterationsToFirmware.c)
 *     BiUnloadHiveByHandle @ 0x140A5D504 (BiUnloadHiveByHandle.c)
 */

__int64 __fastcall BiCloseStore(__int64 a1, char a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // dl
  int v8; // eax

  v3 = 0;
  v4 = BiSanitizeHandle(a1);
  v5 = v4;
  if ( (v6 & 4) != 0 && BiWasFirmwareModified(v4) )
  {
    BiLogMessage(2LL, L"Exporting alterations to firmware.");
    v8 = BiExportStoreAlterationsToFirmware(v5);
    v3 = v8;
    if ( v8 < 0 )
      BiLogMessage(4LL, L"Failed to export alterations to firmware. Status: %x", (unsigned int)v8);
    else
      BiSetFirmwareModified(v5, 0);
  }
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle(v5, 0LL);
  else
    BiCloseKey(v5);
  return v3;
}
