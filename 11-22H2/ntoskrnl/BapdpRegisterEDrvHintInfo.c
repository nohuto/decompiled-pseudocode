/*
 * XREFs of BapdpRegisterEDrvHintInfo @ 0x140B988AC
 * Callers:
 *     BapdpProcessEDrvHintInfo @ 0x140B385F8 (BapdpProcessEDrvHintInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041AA40 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041B2A0 (ZwSetValueKey.c)
 */

int __fastcall BapdpRegisterEDrvHintInfo(_DWORD *a1)
{
  int result; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+90h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF

  result = 0;
  Data = 1;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  if ( a1 )
  {
    if ( *a1 >= 8u )
    {
      result = a1[1];
      if ( (result & 1) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SYSTEM\\CurrentControlSet\\Control");
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( result >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"BitLockerEDriveVolatile");
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          result = ZwCreateKey(&Handle, 0x6001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
          if ( result >= 0 )
          {
            ZwClose(KeyHandle);
            KeyHandle = 0LL;
            RtlInitUnicodeString(&DestinationString, L"EDriveSupportedInBoot");
            result = ZwSetValueKey(Handle, &DestinationString, 0, 4u, &Data, 4u);
          }
        }
        if ( KeyHandle )
          result = ZwClose(KeyHandle);
        if ( Handle )
          return ZwClose(Handle);
      }
    }
  }
  return result;
}
