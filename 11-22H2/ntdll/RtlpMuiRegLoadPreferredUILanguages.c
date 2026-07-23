/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x18000B870
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180011D50 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x180012AD4 (RtlpSetProcUserMachineLangList.c)
 *     InitializeUserOrMachineLangList @ 0x180070780 (InitializeUserOrMachineLangList.c)
 * Callees:
 *     RtlpLoadUserUIByPolicy @ 0x18000A8B0 (RtlpLoadUserUIByPolicy.c)
 *     LdrpQueryValueKey @ 0x18000BCE0 (LdrpQueryValueKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18000C904 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180012424 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180015960 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180087880 (RtlpLoadMachineUIByPolicy.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x180110BB4 (RtlpHasMachineUILock.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        _BYTE *a5,
        _QWORD *a6)
{
  BOOL v7; // r14d
  PVOID Heap; // r15
  _BYTE *v10; // rdi
  HANDLE v11; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  const WCHAR *v14; // rdx
  PVOID v15; // rsi
  int v16; // ecx
  int v18; // eax
  unsigned int v19; // r8d
  __int64 LanguageList; // [rsp+40h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  HANDLE v22; // [rsp+50h] [rbp-49h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-41h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-29h] BYREF
  _UNICODE_STRING ValueName; // [rsp+A0h] [rbp+7h] BYREF
  HANDLE v27; // [rsp+F0h] [rbp+57h] BYREF
  int v28; // [rsp+F8h] [rbp+5Fh]
  __int64 v29; // [rsp+100h] [rbp+67h] BYREF

  v28 = a2;
  LODWORD(v29) = 7;
  v22 = 0LL;
  Handle = 0LL;
  v7 = a3;
  KeyHandle = 0LL;
  LODWORD(v27) = 0;
  Heap = 0LL;
  LanguageList = 0LL;
  LOBYTE(v28) = 0;
  if ( !a1 || (v10 = a5) == 0LL || !a6 )
  {
    v12 = -1073741811;
    goto LABEL_23;
  }
  *a5 = 0;
  if ( a3 > 1 )
    return (unsigned int)-1073741811;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v12 = RtlpLoadMachineUIByPolicy(KeyHandle, a1, &LanguageList);
    if ( !v12 && LanguageList )
    {
      v15 = 0LL;
      goto LABEL_18;
    }
    v11 = KeyHandle;
  }
  else
  {
    v11 = 0LL;
    KeyHandle = 0LL;
  }
  if ( v7 && v11 && (int)RtlpHasMachineUILock(v11) >= 0 )
    v7 = (_BYTE)v28 != 1;
  v12 = OpenGlobalizationUserSettingsKey(0x2000000u);
  if ( v12 < 0 )
    goto LABEL_51;
  if ( v7 )
  {
    v12 = RtlpLoadUserUIByPolicy(v22, a1, &LanguageList);
    if ( !v12 && LanguageList )
    {
LABEL_19:
      if ( !LanguageList )
      {
        LOBYTE(v13) = !v7;
        LanguageList = RtlpMuiRegCreateLanguageList(1LL, v13, a1);
        if ( !LanguageList )
          v12 = -1073741801;
      }
      goto LABEL_22;
    }
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    ObjectAttributes.RootDirectory = v22;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = NtOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( v12 >= 0 )
    {
      v14 = L"PreferredUILanguages";
      if ( a4 != 3 )
        v14 = L"PreferredUILanguagesPending";
      RtlInitUnicodeString(&DestinationString, v14);
      v15 = 0LL;
      goto LABEL_16;
    }
LABEL_51:
    *v10 = 1;
    goto LABEL_23;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  ObjectAttributes.RootDirectory = v22;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = 0LL;
  if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_17;
  RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
LABEL_16:
  v12 = -1073741772;
  v16 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v27);
  if ( v16 == -1073741772 || !(_DWORD)v27 )
    goto LABEL_17;
  if ( v16 != -2147483643 )
    goto LABEL_23;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)((_DWORD)v27 + 2));
  if ( !Heap )
  {
    v12 = -1073741801;
    goto LABEL_23;
  }
  v12 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v27);
  if ( v12 >= 0 )
  {
    if ( (_DWORD)v29 == 7 || (_DWORD)v29 == 1 )
    {
      v12 = RtlpMuiRegAddMultiSzToLangFallbackList(
              a1,
              Heap,
              (unsigned int)v27 >> 1,
              8LL,
              (unsigned int)!v7 + 2,
              1,
              &LanguageList);
      goto LABEL_49;
    }
LABEL_17:
    v12 = 0;
    *v10 = 1;
    goto LABEL_18;
  }
LABEL_49:
  if ( v12 )
    goto LABEL_50;
LABEL_18:
  if ( v7 || LanguageList && *(_WORD *)(LanguageList + 4) )
    goto LABEL_19;
  v27 = 0LL;
  v28 = 7;
  LODWORD(v29) = 0;
  RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &ValueName;
  v12 = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&v27, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_36;
  RtlInitUnicodeString(&ValueName, L"PreferredUILanguages");
  v18 = LdrpQueryValueKey(v27, &ValueName, (__int64)&v29);
  v13 = 3221225524LL;
  if ( v18 == -1073741772 || !(_DWORD)v29 )
    goto LABEL_36;
  if ( v18 == -2147483643 )
  {
    v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v29 + 2));
    if ( !v15 )
    {
      v12 = -1073741801;
      goto LABEL_37;
    }
    v12 = LdrpQueryValueKey(v27, &ValueName, (__int64)&v29);
    if ( v12 >= 0 )
    {
      if ( v28 != 7 && v28 != 1 )
      {
        v12 = 0;
LABEL_36:
        *v10 = 1;
        goto LABEL_37;
      }
      v19 = v29;
      *v10 = 0;
      v12 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v15, v19 >> 1, 8LL, 3, 1, &LanguageList);
    }
  }
  else
  {
    v12 = -1073741772;
  }
LABEL_37:
  if ( v27 )
    NtClose(v27);
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  if ( !v12 )
    goto LABEL_19;
LABEL_22:
  *a6 = LanguageList;
  if ( Heap )
LABEL_50:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_23:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v22 )
  {
    NtClose(v22);
    v22 = 0LL;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v12;
}
