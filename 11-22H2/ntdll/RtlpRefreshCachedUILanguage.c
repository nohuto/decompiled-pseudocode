/*
 * XREFs of RtlpRefreshCachedUILanguage @ 0x180113300
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x180015DA8 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18001F370 (RtlpCreateProcessRegistryInfo.c)
 *     NtFlushInstallUILanguage @ 0x1800A0BA0 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x1800A0D80 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x1800A1920 (NtQueryInstallUILanguage.c)
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
