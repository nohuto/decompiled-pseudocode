/*
 * XREFs of BiSetFirmwareModified @ 0x140373EB4
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140373E68 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x1408028D8 (BiCloseStore.c)
 *     BcdCreateObject @ 0x14080302C (BcdCreateObject.c)
 *     BiOpenSystemStore @ 0x140803794 (BiOpenSystemStore.c)
 * Callees:
 *     BiSetRegistryValue @ 0x140803CEC (BiSetRegistryValue.c)
 *     BiDeleteRegistryValue @ 0x140807544 (BiDeleteRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
