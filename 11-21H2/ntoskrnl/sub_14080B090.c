/*
 * XREFs of sub_14080B090 @ 0x14080B090
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwDeleteFile @ 0x14041D260 (ZwDeleteFile.c)
 *     ZwDeleteKey @ 0x14041D280 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14067B838 @ 0x14067B838 (sub_14067B838.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_14080B370 @ 0x14080B370 (sub_14080B370.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_14080B090()
{
  int v0; // ebx
  char v1; // bl
  OBJECT_ATTRIBUTES v3; // [rsp+20h] [rbp-89h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-59h] BYREF
  PVOID P; // [rsp+60h] [rbp-49h] BYREF
  UNICODE_STRING SourceString; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING v7; // [rsp+78h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-21h] BYREF
  UNICODE_STRING v9; // [rsp+98h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+110h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+118h] [rbp+6Fh] BYREF
  HANDLE v13; // [rsp+120h] [rbp+77h] BYREF
  void *v14; // [rsp+128h] [rbp+7Fh] BYREF

  v14 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  v13 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  v9 = 0LL;
  v7 = 0LL;
  memset(&v3, 0, 44);
  ValueName = 0LL;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) == 1 )
  {
    if ( !SeSinglePrivilegeCheck(stru_140D3CA10, 1) || PsIsCurrentThreadInServerSilo() )
    {
      v0 = -1073741727;
    }
    else
    {
      v0 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 4, (__int64)&v14);
      if ( v0 >= 0 )
      {
        memset(&ObjectAttributes.Attributes + 1, 0, 20);
        ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
        ObjectAttributes.RootDirectory = v14;
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = &ValueName;
        *(_DWORD *)&ValueName.Length = 1572886;
        ObjectAttributes.Attributes = 576;
        v0 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
        if ( v0 >= 0 )
        {
          v1 = 0;
          if ( sub_14067B838(KeyHandle, L"DisableLKG", 0, &P) < 0 )
            goto LABEL_26;
          if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
            v1 = *((_BYTE *)P + *((unsigned int *)P + 2));
          ExFreePoolWithTag(P, 0);
          if ( v1 )
          {
            *(_DWORD *)&ValueName.Length = 1441812;
            ValueName.Buffer = L"DisableLKG";
            v0 = ZwDeleteValueKey(KeyHandle, &ValueName);
            if ( v0 >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood");
              v3.RootDirectory = 0LL;
              v3.ObjectName = &DestinationString;
              v3.Length = 48;
              v3.Attributes = 576;
              *(_OWORD *)&v3.SecurityDescriptor = 0LL;
              if ( ZwOpenKey(&Handle, 0xF003Fu, &v3) >= 0 )
                ZwDeleteKey(Handle);
              RtlInitUnicodeString(&v9, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood.Tmp");
              v3.RootDirectory = 0LL;
              v3.ObjectName = &v9;
              v3.Length = 48;
              v3.Attributes = 576;
              *(_OWORD *)&v3.SecurityDescriptor = 0LL;
              if ( ZwOpenKey(&v13, 0xF003Fu, &v3) >= 0 )
                ZwDeleteKey(v13);
              RtlInitUnicodeString(&SourceString, L"\\SystemRoot\\LastGood");
              sub_14080B370(&SourceString);
              v3.RootDirectory = 0LL;
              v3.ObjectName = &SourceString;
              v3.Length = 48;
              v3.Attributes = 64;
              *(_OWORD *)&v3.SecurityDescriptor = 0LL;
              ZwDeleteFile(&v3);
              RtlInitUnicodeString(&v7, L"\\SystemRoot\\LastGood.Tmp");
              sub_14080B370(&v7);
              v3.RootDirectory = 0LL;
              v3.ObjectName = &v7;
              v3.Length = 48;
              *(_OWORD *)&v3.SecurityDescriptor = 0LL;
              v3.Attributes = 64;
              ZwDeleteFile(&v3);
              v0 = 0;
            }
          }
          else
          {
LABEL_26:
            v0 = -1073741823;
          }
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
    if ( v13 )
      ZwClose(v13);
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v0;
}
