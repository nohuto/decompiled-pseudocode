/*
 * XREFs of sub_1C0042360 @ 0x1C0042360
 * Callers:
 *     DllInitialize @ 0x1C0064410 (DllInitialize.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C0041DFC @ 0x1C0041DFC (sub_1C0041DFC.c)
 */

int sub_1C0042360()
{
  int result; // eax
  ULONG Length; // esi
  __int64 v2; // rbx
  ULONG v3; // edi
  NTSTATUS v4; // eax
  ULONG ResultLength; // [rsp+38h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-21h] BYREF
  UNICODE_STRING GuidString; // [rsp+48h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-9h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+7h] BYREF
  GUID Guid; // [rsp+98h] [rbp+37h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  Guid = 0LL;
  DestinationString = 0LL;
  GuidString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\StorPort\\EnclosureIdMappings");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    Length = 20;
    v2 = sub_1C0007CF4(64LL, 20LL, 1213423954LL, 0LL);
    if ( v2 )
    {
      v3 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v4 = ZwEnumerateValueKey(KeyHandle, v3, KeyValueFullInformation, (PVOID)v2, Length, &ResultLength);
          if ( v4 < 0 )
            break;
          if ( *(_DWORD *)(v2 + 16) == 76 )
          {
            *(_DWORD *)&GuidString.Length = 4980812;
            GuidString.Buffer = (PWSTR)(v2 + 20);
            if ( RtlGUIDFromString(&GuidString, &Guid) >= 0 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)&stru_1C0093880.Dpc.DpcData, 1u);
              sub_1C0041DFC((void *)(v2 + *(unsigned int *)(v2 + 8)), *(unsigned int *)(v2 + 12), &Guid);
              ExReleaseResourceLite((PERESOURCE)&stru_1C0093880.Dpc.DpcData);
            }
          }
          ++v3;
        }
        if ( v4 != -2147483643 && v4 != -1073741789 )
          break;
        Length = ResultLength;
        ExFreePoolWithTag((PVOID)v2, 0x48536152u);
        v2 = sub_1C0007CF4(64LL, Length, 1213423954LL, 0LL);
        if ( !v2 )
          return ZwClose(KeyHandle);
      }
      ExFreePoolWithTag((PVOID)v2, 0x48536152u);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
