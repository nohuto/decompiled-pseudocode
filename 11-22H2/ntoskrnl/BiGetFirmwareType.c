/*
 * XREFs of BiGetFirmwareType @ 0x1408065B4
 * Callers:
 *     BcdGetSystemStorePath @ 0x1408056F0 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x140805A48 (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140806574 (BiIsLinkedToFirmwareVariable.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140A5D454 (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041AD60 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int128 SystemInformation; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h]

  SystemInformation = 0LL;
  v3 = 0LL;
  if ( byte_140CF7B98 )
    return (unsigned int)dword_140C0B4E0;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, &SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( (int)v3 < 3 )
      v1 = v3;
  }
  dword_140C0B4E0 = v1;
  result = v1;
  byte_140CF7B98 = 1;
  return result;
}
