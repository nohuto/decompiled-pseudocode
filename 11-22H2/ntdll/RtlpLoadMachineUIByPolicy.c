/*
 * XREFs of RtlpLoadMachineUIByPolicy @ 0x180087880
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18000B870 (RtlpMuiRegLoadPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateLanguageList @ 0x180012424 (RtlpMuiRegCreateLanguageList.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180110C4C (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGrowLanguageList @ 0x180112124 (RtlpMuiRegGrowLanguageList.c)
 */

__int64 __fastcall RtlpLoadMachineUIByPolicy(HANDLE a1, __int64 a2, __int64 *a3)
{
  NTSTATUS PolicyLanguageSpec; // ebx
  __int64 v7; // r8
  __int64 LanguageList; // rax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-48h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF

  KeyHandle = 0LL;
  if ( a2 && a3 )
  {
    if ( !a1 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      PolicyLanguageSpec = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( PolicyLanguageSpec < 0 )
        goto LABEL_5;
      a1 = KeyHandle;
    }
    PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(a1);
    if ( !PolicyLanguageSpec )
    {
      v7 = *a3;
      if ( *a3 )
      {
        if ( *(_WORD *)(v7 + 4) < *(_WORD *)(v7 + 6) )
        {
LABEL_16:
          *(_WORD *)(*(_QWORD *)(v7 + 24) + 6LL * *(unsigned __int16 *)(v7 + 4)) = 0;
          *(_WORD *)(*(_QWORD *)(*a3 + 24) + 6LL * (unsigned __int16)(*(_WORD *)(*a3 + 4))++ + 4) = 0;
          goto LABEL_5;
        }
        LanguageList = RtlpMuiRegGrowLanguageList(*a3);
      }
      else
      {
        LanguageList = RtlpMuiRegCreateLanguageList(1, 1, a2);
      }
      *a3 = LanguageList;
      v7 = LanguageList;
      if ( !LanguageList )
      {
        PolicyLanguageSpec = -1073741801;
        goto LABEL_5;
      }
      goto LABEL_16;
    }
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_5:
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)PolicyLanguageSpec;
}
