/*
 * XREFs of BiSetFirmwareModified @ 0x1403A7718
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x14064CD04 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x140811EB0 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x140813744 (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x140A1CB84 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x140812318 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x1408123B4 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
