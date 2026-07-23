/*
 * XREFs of sub_140642868 @ 0x140642868
 * Callers:
 *     sub_1406BE9A0 @ 0x1406BE9A0 (sub_1406BE9A0.c)
 *     sub_14085F580 @ 0x14085F580 (sub_14085F580.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 sub_140642868()
{
  NTSTATUS v0; // ebx
  unsigned __int16 v1; // dx
  __int64 i; // r8
  __int16 v3; // ax
  unsigned __int16 v4; // cx
  HANDLE KeyHandle; // [rsp+38h] [rbp-D0h] BYREF
  ULONG DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING ValueName_8; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+98h] [rbp-70h] BYREF
  __int16 v12; // [rsp+A0h] [rbp-68h]
  ULONG KeyValueInformation[132]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v11 = 0LL;
  v12 = 0;
  KeyHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString_8 = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  DestinationString = 0;
  ValueName_8 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control\\NLS\\Language");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString_8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString_8, L"InstallLanguage");
    v1 = word_140D3CA00;
    for ( i = 3LL; i >= 0; --i )
    {
      v3 = 55;
      v4 = v1 & 0xF;
      if ( v4 <= 9u )
        v3 = 48;
      v1 >>= 4;
      *((_WORD *)&v11 + i) = v4 + v3;
    }
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString_8,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x210u,
           &DestinationString) >= 0 )
    {
      RtlInitUnicodeString(&ValueName_8, L"PreviousInstallLanguage");
      ZwSetValueKey(KeyHandle, &ValueName_8, 0, 1u, &KeyValueInformation[3], KeyValueInformation[2]);
    }
    v0 = ZwSetValueKey(KeyHandle, &DestinationString_8, 0, 1u, &v11, 0xAu);
    if ( v0 >= 0 )
      v0 = 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v0;
}
