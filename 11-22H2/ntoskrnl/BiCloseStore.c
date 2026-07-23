/*
 * XREFs of BiCloseStore @ 0x140804B8C
 * Callers:
 *     BcdCloseStore @ 0x140805378 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x140805A48 (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14036937C (BiSanitizeHandle.c)
 *     BiWasFirmwareModified @ 0x1403742A8 (BiWasFirmwareModified.c)
 *     BiSetFirmwareModified @ 0x140374368 (BiSetFirmwareModified.c)
 *     BiCloseKey @ 0x1408077DC (BiCloseKey.c)
 *     BiLogMessage @ 0x140807BA0 (BiLogMessage.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140A5D454 (BiExportStoreAlterationsToFirmware.c)
 *     BiUnloadHiveByHandle @ 0x140A5D574 (BiUnloadHiveByHandle.c)
 */

__int64 __fastcall BiCloseStore(__int64 a1, char a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rax
  void *v5; // rbx
  char v6; // dl
  int v8; // eax

  v3 = 0;
  v4 = BiSanitizeHandle(a1);
  v5 = (void *)v4;
  if ( (v6 & 4) != 0 && BiWasFirmwareModified(v4) )
  {
    BiLogMessage(2LL, L"Exporting alterations to firmware.");
    v8 = BiExportStoreAlterationsToFirmware(v5);
    v3 = v8;
    if ( v8 < 0 )
      BiLogMessage(4LL, L"Failed to export alterations to firmware. Status: %x", (unsigned int)v8);
    else
      BiSetFirmwareModified((__int64)v5, 0);
  }
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle(v5, 0LL);
  else
    BiCloseKey(v5);
  return v3;
}
