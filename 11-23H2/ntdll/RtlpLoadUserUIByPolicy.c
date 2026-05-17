/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x18000A690
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B650 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     OpenGlobalizationUserSettingsKey @ 0x18000C6F4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180012214 (RtlpMuiRegCreateLanguageList.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1801120FC (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1801135D4 (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(void *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // r8
  __int64 LanguageList; // rax
  HANDLE v11; // [rsp+20h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v15; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+58h] [rbp-18h]
  __int128 v18; // [rsp+60h] [rbp-10h]
  unsigned __int8 v19; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v20; // [rsp+B8h] [rbp+48h] BYREF

  Handle = 0LL;
  v11 = 0LL;
  v19 = 0;
  v20 = 0;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      v15 = a1;
    }
    else
    {
      v7 = OpenGlobalizationUserSettingsKey(0x2000000LL, v6, &Handle);
      if ( v7 < 0 )
        goto LABEL_6;
      v15 = Handle;
    }
    v14 = 48;
    p_DestinationString = &DestinationString;
    v17 = 64;
    v18 = 0LL;
    v7 = NtOpenKey(&v11, 131097LL, &v14);
    if ( v7 >= 0 )
    {
      v7 = RtlpLoadPolicyLanguageSpec(v11, a2, &v19, &v20);
      if ( !v7 )
      {
        v9 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v9 + 4) < *(_WORD *)(v9 + 6) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(v9 + 24) + 6LL * *(unsigned __int16 *)(v9 + 4)) = v19;
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v20;
            goto LABEL_6;
          }
          LanguageList = RtlpMuiRegGrowLanguageList(*a3);
        }
        else
        {
          LanguageList = RtlpMuiRegCreateLanguageList(1LL, 0LL, a2);
        }
        *a3 = LanguageList;
        v9 = LanguageList;
        if ( !LanguageList )
        {
          v7 = -1073741801;
          goto LABEL_6;
        }
        goto LABEL_20;
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_6:
  if ( v11 )
  {
    NtClose(v11);
    v11 = 0LL;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v7;
}
