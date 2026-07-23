/*
 * XREFs of BiCloseStore @ 0x1408028D8
 * Callers:
 *     BcdCloseStore @ 0x1408030C4 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x140803794 (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x140369B6C (BiSanitizeHandle.c)
 *     BiWasFirmwareModified @ 0x140373DF4 (BiWasFirmwareModified.c)
 *     BiSetFirmwareModified @ 0x140373EB4 (BiSetFirmwareModified.c)
 *     BiCloseKey @ 0x14080552C (BiCloseKey.c)
 *     BiLogMessage @ 0x1408058F0 (BiLogMessage.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140A5D694 (BiExportStoreAlterationsToFirmware.c)
 *     BiUnloadHiveByHandle @ 0x140A5D7B4 (BiUnloadHiveByHandle.c)
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
