/*
 * XREFs of RtlpMuiRegLoadPreferredUILanguages @ 0x18006EC44
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x1800494B0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpSetProcUserMachineLangList @ 0x180049D38 (RtlpSetProcUserMachineLangList.c)
 *     InitializeUserOrMachineLangList @ 0x18004D8E4 (InitializeUserOrMachineLangList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlpMuiRegCreateLanguageList @ 0x180049C30 (RtlpMuiRegCreateLanguageList.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18004B31C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlpLoadMachineUIByPolicy @ 0x18006DBD0 (RtlpLoadMachineUIByPolicy.c)
 *     LdrpQueryValueKey @ 0x18006F0A8 (LdrpQueryValueKey.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F1DC (OpenGlobalizationUserSettingsKey.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006F390 (RtlpLoadUserUIByPolicy.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x180110734 (RtlpHasMachineUILock.c)
 */

__int64 __fastcall RtlpMuiRegLoadPreferredUILanguages(
        __int64 a1,
        int a2,
        unsigned int a3,
        int a4,
        _BYTE *a5,
        _QWORD *a6)
{
  BOOL v7; // r15d
  WCHAR *Heap; // r12
  _BYTE *v10; // rdi
  HANDLE v11; // rcx
  int v12; // ebx
  const WCHAR *v13; // rdx
  int v14; // ecx
  WCHAR *v15; // rsi
  int v17; // ecx
  unsigned int v18; // r8d
  __int64 LanguageList; // [rsp+40h] [rbp-59h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-51h] BYREF
  HANDLE v21; // [rsp+50h] [rbp-49h]
  HANDLE KeyHandle; // [rsp+58h] [rbp-41h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-29h] BYREF
  _UNICODE_STRING ValueName; // [rsp+A0h] [rbp+7h] BYREF
  HANDLE v26; // [rsp+F0h] [rbp+57h] BYREF
  int v27; // [rsp+F8h] [rbp+5Fh]
  __int64 v28; // [rsp+100h] [rbp+67h] BYREF

  v27 = a2;
  LODWORD(v28) = 7;
  v21 = 0LL;
  Handle = 0LL;
  v7 = a3;
  KeyHandle = 0LL;
  LODWORD(v26) = 0;
  Heap = 0LL;
  LanguageList = 0LL;
  LOBYTE(v27) = 0;
  if ( !a1 || (v10 = a5) == 0LL || !a6 )
  {
    v12 = -1073741811;
    goto LABEL_27;
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
      goto LABEL_23;
    v11 = KeyHandle;
  }
  else
  {
    v11 = 0LL;
    KeyHandle = 0LL;
  }
  if ( v7 && v11 && (int)RtlpHasMachineUILock(v11) >= 0 )
    v7 = (_BYTE)v27 != 1;
  v12 = OpenGlobalizationUserSettingsKey(0x2000000u);
  if ( v12 < 0 )
    goto LABEL_51;
  if ( v7 )
  {
    v12 = RtlpLoadUserUIByPolicy(v21, a1, &LanguageList);
    if ( !v12 && LanguageList )
      goto LABEL_25;
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    ObjectAttributes.RootDirectory = v21;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = NtOpenKey(&Handle, 0x20019u, &ObjectAttributes);
    if ( v12 >= 0 )
    {
      v13 = L"PreferredUILanguages";
      if ( a4 != 3 )
        v13 = L"PreferredUILanguagesPending";
      goto LABEL_15;
    }
LABEL_51:
    *v10 = 1;
    goto LABEL_27;
  }
  RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
  ObjectAttributes.RootDirectory = v21;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&Handle, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_39;
  v13 = L"MachinePreferredUILanguages";
LABEL_15:
  RtlInitUnicodeString(&DestinationString, v13);
  v12 = -1073741772;
  v14 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v26);
  if ( v14 == -1073741772 || !(_DWORD)v26 )
    goto LABEL_39;
  if ( v14 != -2147483643 )
    goto LABEL_27;
  Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)((_DWORD)v26 + 2));
  if ( !Heap )
  {
    v12 = -1073741801;
    goto LABEL_27;
  }
  v12 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v26);
  if ( v12 < 0 )
    goto LABEL_22;
  if ( (_DWORD)v28 != 7 && (_DWORD)v28 != 1 )
  {
LABEL_39:
    v12 = 0;
    *v10 = 1;
    goto LABEL_23;
  }
  v12 = RtlpMuiRegAddMultiSzToLangFallbackList(
          a1,
          Heap,
          (unsigned int)v26 >> 1,
          8,
          (unsigned int)!v7 + 2,
          1u,
          &LanguageList);
LABEL_22:
  if ( v12 )
  {
LABEL_26:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    goto LABEL_27;
  }
LABEL_23:
  v15 = 0LL;
  if ( v7 || LanguageList && *(_WORD *)(LanguageList + 4) )
  {
LABEL_24:
    if ( !LanguageList )
    {
      LanguageList = RtlpMuiRegCreateLanguageList(1, !v7, a1);
      if ( !LanguageList )
        v12 = -1073741801;
    }
    goto LABEL_25;
  }
  v12 = 0;
  v27 = 7;
  v26 = 0LL;
  LODWORD(v28) = 0;
  RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &ValueName;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&v26, 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_44;
  RtlInitUnicodeString(&ValueName, L"PreferredUILanguages");
  v17 = LdrpQueryValueKey(v26, &ValueName, (__int64)&v28);
  if ( v17 == -1073741772 || !(_DWORD)v28 )
    goto LABEL_44;
  if ( v17 == -2147483643 )
  {
    v15 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v28 + 2));
    if ( !v15 )
    {
      v12 = -1073741801;
      goto LABEL_45;
    }
    v12 = LdrpQueryValueKey(v26, &ValueName, (__int64)&v28);
    if ( v12 >= 0 )
    {
      if ( v27 != 7 && v27 != 1 )
      {
        v12 = 0;
LABEL_44:
        *v10 = 1;
        goto LABEL_45;
      }
      v18 = (unsigned int)v28 >> 1;
      *v10 = 0;
      v12 = RtlpMuiRegAddMultiSzToLangFallbackList(a1, v15, v18, 8, 3, 1u, &LanguageList);
    }
  }
  else
  {
    v12 = -1073741772;
  }
LABEL_45:
  if ( v26 )
    NtClose(v26);
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  if ( !v12 )
    goto LABEL_24;
LABEL_25:
  *a6 = LanguageList;
  if ( Heap )
    goto LABEL_26;
LABEL_27:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v21 )
  {
    NtClose(v21);
    v21 = 0LL;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v12;
}
