/*
 * XREFs of SmpTranslateSystemPartitionInformation @ 0x14000D8E0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

int SmpTranslateSystemPartitionInformation()
{
  NTSTATUS v0; // edx
  __int64 v1; // rax
  NTSTATUS v2; // edi
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  _WORD *NtSystemRoot; // rax
  signed __int32 v11; // ebx
  NTSTATUS v12; // edx
  __int64 v13; // rax
  signed __int32 v14; // ebx
  ULONG Context; // [rsp+40h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING LinkTarget; // [rsp+50h] [rbp-B0h] BYREF
  void *SymbolicLinkHandle; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp-68h] BYREF
  int v22; // [rsp+A0h] [rbp-60h] BYREF
  const wchar_t *v23; // [rsp+A8h] [rbp-58h]
  struct _UNICODE_STRING ValueName; // [rsp+B0h] [rbp-50h] BYREF
  UNICODE_STRING String2; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-30h] BYREF
  int v27; // [rsp+E0h] [rbp-20h] BYREF
  const wchar_t *v28; // [rsp+E8h] [rbp-18h]
  struct _UNICODE_STRING v29; // [rsp+F0h] [rbp-10h] BYREF
  __int16 Buffer; // [rsp+100h] [rbp+0h] BYREF
  _WORD *v31; // [rsp+108h] [rbp+8h]
  UNICODE_STRING String1; // [rsp+110h] [rbp+10h] BYREF
  _WORD v33[272]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD Data[128]; // [rsp+340h] [rbp+240h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+540h] [rbp+440h] BYREF
  WCHAR SourceString[258]; // [rsp+54Ch] [rbp+44Ch] BYREF

  v22 = 4063292;
  v23 = L"\\Registry\\Machine\\System\\Setup";
  *(_DWORD *)&ValueName.Length = 2097182;
  ValueName.Buffer = L"SystemPartition";
  *(_DWORD *)&String2.Length = 1703960;
  String2.Buffer = L"SymbolicLink";
  Context = 0;
  v28 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Setup";
  v27 = 8650882;
  v29.Buffer = L"BootDir";
  *(_DWORD *)&v29.Length = 1048590;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v0 < 0 )
  {
    v1 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v1 + 2] = 11599;
    SmpGlobalLog[2 * v1 + 3] = v0;
    *(_QWORD *)&SmpGlobalLog[2 * v1 + 4] = 0LL;
    return v1;
  }
  v2 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x210u, &ResultLength);
  NtClose(KeyHandle);
  if ( v2 < 0 )
  {
    v1 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v1 + 2] = 11622;
    SmpGlobalLog[2 * v1 + 3] = v2;
LABEL_24:
    *(_QWORD *)&SmpGlobalLog[2 * v1 + 4] = 0LL;
    return v1;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  LinkTarget.Buffer = (PWSTR)Data;
  v3 = NtQueryDirectoryObject(SmpDosDevicesObjectDirectory, &Buffer, 0x23Au, 1u, 1u, &Context, 0LL);
  v7 = (unsigned int)v3;
  if ( v3 < 0 )
  {
LABEL_15:
    if ( (_DWORD)v7 != -2147483622 )
    {
      v14 = _InterlockedIncrement(SmpGlobalLog) % 64;
      v1 = 2LL * v14;
      SmpGlobalLog[4 * v14 + 2] = 11728;
      goto LABEL_23;
    }
    NtSystemRoot = (_WORD *)RtlGetNtSystemRoot(v4, v7, v5, v6);
    v31 = v33;
    v33[0] = *NtSystemRoot;
    v33[1] = NtSystemRoot[1];
  }
  else
  {
    while ( 1 )
    {
      if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      {
        if ( Buffer == 4 && v31[1] == 58 )
        {
          ObjectAttributes.RootDirectory = SmpDosDevicesObjectDirectory;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&Buffer;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
          {
            *(_DWORD *)&LinkTarget.Length = 0x2000000;
            v8 = NtQuerySymbolicLinkObject(SymbolicLinkHandle, &LinkTarget, 0LL);
            NtClose(SymbolicLinkHandle);
            if ( v8 >= 0
              && (RtlEqualUnicodeString(&DestinationString, &LinkTarget, 1u)
               || RtlPrefixUnicodeString(&DestinationString, &LinkTarget, 1u)
               && LinkTarget.Buffer[(unsigned __int64)DestinationString.Length >> 1] == 92) )
            {
              break;
            }
          }
        }
      }
      v9 = NtQueryDirectoryObject(SmpDosDevicesObjectDirectory, &Buffer, 0x23Au, 1u, 0, &Context, 0LL);
      v7 = (unsigned int)v9;
      if ( v9 < 0 )
        goto LABEL_15;
    }
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v27;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v7) = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( (int)v7 < 0 )
  {
    v11 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v1 = 2LL * v11;
    SmpGlobalLog[4 * v11 + 2] = 11753;
LABEL_23:
    SmpGlobalLog[2 * v1 + 3] = v7;
    goto LABEL_24;
  }
  Data[0] = *(_DWORD *)v31;
  Data[1] = 92;
  v12 = NtSetValueKey(KeyHandle, &v29, 0, 1u, Data, 8u);
  if ( v12 < 0 )
  {
    v13 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v13 + 2] = 11779;
    SmpGlobalLog[2 * v13 + 3] = v12;
    *(_QWORD *)&SmpGlobalLog[2 * v13 + 4] = 0LL;
  }
  LODWORD(v1) = NtClose(KeyHandle);
  return v1;
}
