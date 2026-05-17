/*
 * XREFs of RtlpLoadUserUIByPolicy @ 0x18006F390
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18006EC44 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180049C30 (RtlpMuiRegCreateLanguageList.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F1DC (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1801107CC (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x180111CB8 (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadUserUIByPolicy(void *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 LanguageList; // rax
  HANDLE v12; // [rsp+20h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+40h] [rbp-30h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-20h]
  int v18; // [rsp+58h] [rbp-18h]
  __int128 v19; // [rsp+60h] [rbp-10h]
  unsigned __int8 v20; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v21; // [rsp+B8h] [rbp+48h] BYREF

  Handle = 0LL;
  v12 = 0LL;
  v20 = 0;
  v21 = 0;
  if ( a2 && a3 )
  {
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    if ( a1 )
    {
      v16 = a1;
    }
    else
    {
      v7 = OpenGlobalizationUserSettingsKey(0x2000000u, v6, (__int64)&Handle);
      if ( v7 < 0 )
        goto LABEL_6;
      v16 = Handle;
    }
    v15 = 48;
    p_DestinationString = &DestinationString;
    v18 = 64;
    v19 = 0LL;
    v7 = NtOpenKey(&v12, 131097LL, &v15);
    if ( v7 >= 0 )
    {
      v7 = RtlpLoadPolicyLanguageSpec(v12, a2, &v20, &v21);
      if ( !v7 )
      {
        v10 = *a3;
        if ( *a3 )
        {
          if ( *(_WORD *)(v10 + 4) < *(_WORD *)(v10 + 6) )
          {
LABEL_20:
            *(_WORD *)(*(_QWORD *)(v10 + 24) + 6LL * *(unsigned __int16 *)(v10 + 4)) = v20;
            *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v21;
            goto LABEL_6;
          }
          LanguageList = RtlpMuiRegGrowLanguageList(*a3, v9);
        }
        else
        {
          LanguageList = RtlpMuiRegCreateLanguageList(1, 0, a2);
        }
        *a3 = LanguageList;
        v10 = LanguageList;
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
  if ( v12 )
  {
    NtClose(v12);
    v12 = 0LL;
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v7;
}
