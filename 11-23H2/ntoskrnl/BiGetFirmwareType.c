/*
 * XREFs of BiGetFirmwareType @ 0x140804030
 * Callers:
 *     BcdGetSystemStorePath @ 0x14080316C (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x1408034C4 (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140803FF0 (BiIsLinkedToFirmwareVariable.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140A5D3E4 (BiExportStoreAlterationsToFirmware.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041B420 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  __int128 v2; // [rsp+20h] [rbp-38h] BYREF
  __int128 v3; // [rsp+30h] [rbp-28h]

  v2 = 0LL;
  v3 = 0LL;
  if ( byte_140CF7AE0 )
    return (unsigned int)dword_140C0B4E0;
  v1 = 1;
  if ( (int)ZwQuerySystemInformation(90LL, (__int64)&v2) >= 0 )
  {
    v1 = 0;
    if ( (int)v3 < 3 )
      v1 = v3;
  }
  dword_140C0B4E0 = v1;
  result = v1;
  byte_140CF7AE0 = 1;
  return result;
}
