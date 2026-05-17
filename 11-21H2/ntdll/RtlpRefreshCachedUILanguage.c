/*
 * XREFs of RtlpRefreshCachedUILanguage @ 0x180112EA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x1800430C0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18004B778 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x18004BE40 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     NtFlushInstallUILanguage @ 0x1800A5E00 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A5FE0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A6B40 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpRefreshCachedUILanguage(PCWSTR SourceString)
{
  int InstallUILanguage; // ebx
  unsigned __int16 v3; // si
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  __int16 v7; // [rsp+80h] [rbp+40h] BYREF
  int v8; // [rsp+88h] [rbp+48h] BYREF

  v8 = 0;
  v7 = -1;
  v5 = 0LL;
  if ( SourceString )
  {
    InstallUILanguage = NtQueryInstallUILanguage();
    if ( InstallUILanguage >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString.Length, &v8) )
      {
        v3 = v8;
        InstallUILanguage = NtFlushInstallUILanguage();
        if ( InstallUILanguage >= 0 )
        {
          InstallUILanguage = RtlpCreateProcessRegistryInfo(&v5);
          if ( InstallUILanguage >= 0 )
          {
            InstallUILanguage = RtlpMuiRegGetInstalledLanguageIndexByLangId(v5, v3, 1, &v7);
            if ( InstallUILanguage < 0 )
              NtFlushInstallUILanguage();
            else
              InstallUILanguage = NtFlushInstallUILanguage();
            ZwGetMUIRegistryInfo();
          }
        }
      }
      else
      {
        return (unsigned int)-1073741762;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)InstallUILanguage;
}
