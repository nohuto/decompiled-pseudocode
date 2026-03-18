/*
 * XREFs of BiSetFirmwareModified @ 0x140373D14
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140373CC8 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x140802608 (BiCloseStore.c)
 *     BcdCreateObject @ 0x140802D5C (BcdCreateObject.c)
 *     BiOpenSystemStore @ 0x1408034C4 (BiOpenSystemStore.c)
 * Callees:
 *     BiSetRegistryValue @ 0x140803A1C (BiSetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x140807274 (BiDeleteRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
