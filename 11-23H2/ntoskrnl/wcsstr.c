/*
 * XREFs of wcsstr @ 0x1403DBD80
 * Callers:
 *     BcpGetProgressMessages @ 0x140384E10 (BcpGetProgressMessages.c)
 *     SmUniqueIdParseProductName @ 0x1405CAD68 (SmUniqueIdParseProductName.c)
 *     PiGetDeviceRegProperty @ 0x1407930F8 (PiGetDeviceRegProperty.c)
 *     SiIsWinPEBoot @ 0x1407BFD60 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1407BFDD4 (SiGetBootDeviceName.c)
 *     PfSnIsHostingApplication @ 0x1407C2EA8 (PfSnIsHostingApplication.c)
 *     EtwpGenerateFileName @ 0x1407E9570 (EtwpGenerateFileName.c)
 *     BiIsWinPEBoot @ 0x1408032E4 (BiIsWinPEBoot.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140805F48 (BiGetObjectReferenceFromEfiEntry.c)
 *     IopCheckIfNotNativeDriver @ 0x1409447E4 (IopCheckIfNotNativeDriver.c)
 *     PiGetDeviceRegistryProperty @ 0x140954F18 (PiGetDeviceRegistryProperty.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140A5F354 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetBiosSystemPartition @ 0x140A60704 (SiGetBiosSystemPartition.c)
 *     SubstringMatch @ 0x140A6F1EC (SubstringMatch.c)
 *     PopGetBitlockerKeyLocation @ 0x140AA0608 (PopGetBitlockerKeyLocation.c)
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
