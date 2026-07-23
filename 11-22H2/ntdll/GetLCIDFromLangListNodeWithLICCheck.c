/*
 * XREFs of GetLCIDFromLangListNodeWithLICCheck @ 0x18001EC3C
 * Callers:
 *     LdrResFallbackLangList @ 0x180007264 (LdrResFallbackLangList.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001F3F8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180027340 (LdrpSearchResourceSection_U.c)
 *     LdrLoadAlternateResourceModule @ 0x180084070 (LdrLoadAlternateResourceModule.c)
 *     RtlGetThreadLangIdByIndex @ 0x1800FA210 (RtlGetThreadLangIdByIndex.c)
 * Callees:
 *     RtlpIsALicensedLIPLanguage @ 0x18000C874 (RtlpIsALicensedLIPLanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x180010694 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x180014994 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x180015CC0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180016750 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall GetLCIDFromLangListNodeWithLICCheck(__int64 a1, __int64 a2, unsigned int a3, _WORD *a4, bool *a5)
{
  unsigned __int64 v5; // r12
  unsigned int v7; // ebx
  _QWORD *v9; // rdi
  LCID v10; // eax
  __int64 v11; // r10
  __int16 v12; // ax
  __int64 v13; // rax
  __int16 v15; // ax
  int InstalledLanguageIndexByName; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  _WORD v20[2]; // [rsp+20h] [rbp-C1h] BYREF
  DWORD Lcid; // [rsp+24h] [rbp-BDh] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-B9h] BYREF
  _BYTE v23[176]; // [rsp+40h] [rbp-A1h] BYREF

  v5 = a3;
  v7 = 0;
  Lcid = 0;
  v20[0] = 0;
  memset_thunk_772440563353939046(v23, 0, 0xAAuLL);
  if ( !a2 || !a4 || !a5 || (unsigned __int16)v5 >= *(_WORD *)(a2 + 4) )
    return (unsigned int)-1073741811;
  v9 = g_RegInfo;
  if ( *(_QWORD *)(a2 + 16) )
    v9 = *(_QWORD **)(a2 + 16);
  *a5 = 0;
  v10 = (unsigned __int16)*a4;
  if ( !(_WORD)v10 )
  {
    *a4 = 0;
    v11 = *(_QWORD *)(a2 + 24);
    switch ( *(_WORD *)(v11 + 6 * v5) )
    {
      case 1:
        v15 = *(_WORD *)(v11 + 6 * v5 + 4);
LABEL_14:
        *a4 = v15;
        goto LABEL_11;
      case 2:
        v12 = *(_WORD *)(28LL * *(__int16 *)(v11 + 6 * v5 + 4) + *(_QWORD *)(v9[3] + 16LL) + 4);
        *a4 = v12;
        if ( v12 )
        {
LABEL_11:
          v13 = *(_QWORD *)(a2 + 32);
          *a5 = !_bittest64(&v13, v5);
          return v7;
        }
        v18 = 28LL * *(__int16 *)(v11 + 6 * v5 + 4);
        v19 = *(_QWORD *)(v9[3] + 16LL);
        if ( *(__int16 *)(v18 + v19 + 6) <= 0 )
          return (unsigned int)-1073741595;
        v17 = *(__int16 *)(v18 + v19 + 6);
        break;
      case 3:
        v17 = *(__int16 *)(v11 + 6 * v5 + 4);
        break;
      default:
        return (unsigned int)-1073741595;
    }
    RtlInitUnicodeString(
      &String,
      (PCWSTR)(*(_QWORD *)(v9[4] + 24LL) + 2LL * *(__int16 *)(*(_QWORD *)(v9[4] + 16LL) + 2 * v17)));
    if ( RtlCultureNameToLCID(&String, &Lcid) )
    {
      v15 = Lcid;
      goto LABEL_14;
    }
    return (unsigned int)-1073741595;
  }
  String.MaximumLength = 170;
  String.Buffer = (wchar_t *)v23;
  if ( !RtlLCIDToCultureName(v10, &String) )
    return (unsigned int)-1073741823;
  if ( *((_DWORD *)v9 + 30) < 0x3E8u )
  {
    InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v9, String.Buffer, 1, v20);
  }
  else
  {
    if ( (int)RtlpIsALicensedRegularLanguage(v9, String.Buffer) >= 0 )
      return v7;
    InstalledLanguageIndexByName = RtlpIsALicensedLIPLanguage((__int64)v9, String.Buffer);
  }
  if ( InstalledLanguageIndexByName < 0 )
    *a5 = 1;
  return v7;
}
