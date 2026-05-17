/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x180088080
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B650 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180012214 (RtlpMuiRegCreateLanguageList.c)
 *     RtlInitUnicodeString @ 0x1800187C0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1801120FC (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x1801135D4 (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(HANDLE a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rsi
  int v5; // ebx
  __int64 v7; // r8
  __int64 LanguageList; // rax
  HANDLE Handle; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  int v11; // [rsp+38h] [rbp-38h] BYREF
  __int64 v12; // [rsp+40h] [rbp-30h]
  UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-28h]
  int v14; // [rsp+50h] [rbp-20h]
  __int128 v15; // [rsp+58h] [rbp-18h]
  unsigned __int8 v16; // [rsp+A8h] [rbp+38h] BYREF
  __int16 v17; // [rsp+B8h] [rbp+48h] BYREF

  Handle = 0LL;
  v4 = a2;
  v16 = 0;
  v17 = 0;
  if ( a2 && a3 )
  {
    if ( !a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
      v11 = 48;
      p_DestinationString = &DestinationString;
      v12 = 0LL;
      v14 = 64;
      v15 = 0LL;
      v5 = NtOpenKey(&Handle, 131097LL, &v11);
      if ( v5 < 0 )
        goto LABEL_5;
      a1 = Handle;
      a2 = v4;
    }
    v5 = RtlpLoadPolicyLanguageSpec(a1, a2, &v16, &v17);
    if ( !v5 )
    {
      v7 = *a3;
      if ( *a3 )
      {
        if ( *(_WORD *)(v7 + 4) < *(_WORD *)(v7 + 6) )
        {
LABEL_16:
          *(_WORD *)(*(_QWORD *)(v7 + 24) + 6LL * *(unsigned __int16 *)(v7 + 4)) = v16;
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = v17;
          goto LABEL_5;
        }
        LanguageList = RtlpMuiRegGrowLanguageList(*a3);
      }
      else
      {
        LanguageList = RtlpMuiRegCreateLanguageList(1, 1, v4);
      }
      *a3 = LanguageList;
      v7 = LanguageList;
      if ( !LanguageList )
      {
        v5 = -1073741801;
        goto LABEL_5;
      }
      goto LABEL_16;
    }
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_5:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v5;
}
