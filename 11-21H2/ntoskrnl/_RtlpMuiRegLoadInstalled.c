/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x14083008C
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x14082FBD4 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403C6028 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     ZwQueryInstallUILanguage @ 0x14041E240 (ZwQueryInstallUILanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14082EFE4 (RtlpLoadInstallLanguageFallback.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x14082FC44 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegCreateLanguages @ 0x14082FF1C (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x14082FFE4 (RtlpMuiRegCreateStringPool.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408303C0 (_RtlpMuiRegValidateInstalled.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalled(__int64 a1, __int64 a2)
{
  int InstallUILanguage; // edi
  _QWORD *Languages; // rax
  _QWORD *StringPool; // rax
  __int64 result; // rax

  InstallUILanguage = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( PsUILanguageComitted )
  {
    InstallUILanguage = ZwQueryInstallUILanguage(a1 + 4, a2);
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_10;
    RtlpLoadInstallLanguageFallback(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  Languages = RtlpMuiRegCreateLanguages();
  *(_QWORD *)(a1 + 24) = Languages;
  if ( !Languages )
  {
    InstallUILanguage = -1073741801;
LABEL_10:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(-1, -1);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_10;
  *(_DWORD *)a1 |= 2u;
  InstallUILanguage = RtlpMuiRegLoadInstalledFromKey(a1);
  if ( InstallUILanguage < 0 )
    goto LABEL_10;
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_10;
  return result;
}
