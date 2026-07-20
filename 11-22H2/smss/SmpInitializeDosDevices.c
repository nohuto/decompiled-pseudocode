/*
 * XREFs of SmpInitializeDosDevices @ 0x1400098E0
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000B688 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpDeallocSavedRegistryEntry @ 0x140009B40 (SmpDeallocSavedRegistryEntry.c)
 */

__int64 SmpInitializeDosDevices()
{
  __int16 v0; // r15
  NTSTATUS v1; // ebx
  signed __int32 v2; // ecx
  __int64 v3; // rax
  struct _UNICODE_STRING *v4; // rdi
  struct _UNICODE_STRING *v5; // rsi
  struct _UNICODE_STRING *v6; // rdx
  WCHAR *Buffer; // rax
  int v9; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v10; // [rsp+28h] [rbp-38h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *SymbolicLinkHandle; // [rsp+90h] [rbp+30h] BYREF

  v9 = 524294;
  ObjectAttributes.Length = 48;
  v10 = L"\\??";
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v9;
  ObjectAttributes.Attributes = 208;
  v0 = 0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = NtOpenDirectoryObject(&SmpDosDevicesObjectDirectory, 0xF000Fu, &ObjectAttributes);
  if ( v1 >= 0 )
  {
    v4 = (struct _UNICODE_STRING *)SmpDosDevicesList;
    while ( v4 != (struct _UNICODE_STRING *)&SmpDosDevicesList )
    {
      v5 = v4;
      ObjectAttributes.RootDirectory = SmpDosDevicesObjectDirectory;
      ObjectAttributes.ObjectName = v4 + 1;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 208;
      ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      if ( SmpPrimarySecurityDescriptor )
      {
        v0 = *((_WORD *)SmpPrimarySecurityDescriptor + 1) & 8;
        *((_WORD *)SmpPrimarySecurityDescriptor + 1) |= 8u;
      }
      v1 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, v4 + 2);
      if ( v1 == 0x40000000 )
      {
        NtMakeTemporaryObject(SymbolicLinkHandle);
        NtClose(SymbolicLinkHandle);
        if ( v4[2].Length )
        {
          ObjectAttributes.Attributes &= ~0x80u;
          v1 = NtCreateSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes, v4 + 2);
        }
        else
        {
          v1 = 0;
        }
      }
      if ( ObjectAttributes.SecurityDescriptor )
        *((_WORD *)ObjectAttributes.SecurityDescriptor + 1) ^= (*((_WORD *)ObjectAttributes.SecurityDescriptor + 1) ^ v0) & 8;
      if ( v1 < 0 )
      {
        v3 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
        SmpGlobalLog[2 * v3 + 2] = 3616;
        goto LABEL_20;
      }
      NtClose(SymbolicLinkHandle);
      v6 = *(struct _UNICODE_STRING **)&v4->Length;
      v4 = v6;
      if ( (struct _UNICODE_STRING *)v6->Buffer != v5 || (Buffer = v5->Buffer, *(struct _UNICODE_STRING **)Buffer != v5) )
        __fastfail(3u);
      *(_QWORD *)Buffer = v6;
      v6->Buffer = Buffer;
      SmpDeallocSavedRegistryEntry(v5);
    }
  }
  else
  {
    v2 = _InterlockedIncrement(SmpGlobalLog) % 64;
    v3 = 2LL * v2;
    SmpGlobalLog[4 * v2 + 2] = 3555;
LABEL_20:
    *(_QWORD *)&SmpGlobalLog[2 * v3 + 4] = 0LL;
    SmpGlobalLog[2 * v3 + 3] = v1;
  }
  return (unsigned int)v1;
}
