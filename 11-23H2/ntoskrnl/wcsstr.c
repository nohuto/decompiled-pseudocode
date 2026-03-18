/*
 * XREFs of wcsstr @ 0x1403DBBA0
 * Callers:
 *     BcpGetProgressMessages @ 0x140384C30 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x1405CA7F8 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x140792F08 (PiGetDeviceRegProperty.c)
 *     SiIsWinPEBoot @ 0x1407BFA90 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1407BFB04 (SiGetBootDeviceName.c)
 *     PfSnIsHostingApplication @ 0x1407C2BD8 (PfSnIsHostingApplication.c)
 *     EtwpGenerateFileName @ 0x1407E92A0 (EtwpGenerateFileName.c)
 *     BiIsWinPEBoot @ 0x140803014 (BiIsWinPEBoot.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140805C78 (BiGetObjectReferenceFromEfiEntry.c)
 *     IopCheckIfNotNativeDriver @ 0x1409445E4 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x140954D18 (PiGetDeviceRegistryProperty.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A5F0A4 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x140A60454 (SiGetBiosSystemPartition.c)
 *     SubstringMatch @ 0x140A6EF3C (SubstringMatch.c)
 *     PopGetBitlockerKeyLocation @ 0x140AA0798 (PopGetBitlockerKeyLocation.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsstr(const wchar_t *Str, const wchar_t *SubStr)
{
  wchar_t *v3; // r8
  signed __int64 v5; // r9
  const wchar_t *v6; // rdx

  v3 = (wchar_t *)Str;
  if ( !*SubStr )
    return (wchar_t *)Str;
  if ( *Str )
  {
    v5 = (char *)Str - (char *)SubStr;
    while ( 2 )
    {
      v6 = SubStr;
      do
      {
        if ( !*v6 )
          return v3;
        if ( *(const wchar_t *)((char *)v6 + v5) != *v6 )
          break;
        ++v6;
      }
      while ( *(const wchar_t *)((char *)v6 + v5) );
      if ( !*v6 )
        return v3;
      ++v3;
      v5 += 2LL;
      if ( *v3 )
        continue;
      break;
    }
  }
  return 0LL;
}
