/*
 * XREFs of IopUpdateSecureDeviceClassState @ 0x14083ABF8
 * Callers:
 *     IoCreateDeviceSecure @ 0x14083B330 (IoCreateDeviceSecure.c)
 * Callees:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14020BC20 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     RtlInitUnicodeStringEx @ 0x14022B7D0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x14041B490 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041BCF0 (ZwSetValueKey.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     RtlGetPersistedStateLocation @ 0x1406C5400 (RtlGetPersistedStateLocation.c)
 *     RtlLengthSecurityDescriptor @ 0x140711150 (RtlLengthSecurityDescriptor.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     IopCreateRegistryKeyEx @ 0x1407DA768 (IopCreateRegistryKeyEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopUpdateSecureDeviceClassState(PGUID Guid, __int64 a2)
{
  ULONG BufferLengthIn; // r14d
  __int64 v5; // rdx
  void *v6; // rsi
  void *v7; // r15
  WCHAR *TargetPath; // rdi
  NTSTATUS PersistedStateLocation; // eax
  int inited; // ebx
  int v11; // eax
  ULONG v12; // ebx
  HANDLE KeyHandle; // [rsp+40h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-69h] BYREF
  void *v17; // [rsp+60h] [rbp-59h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-51h] BYREF
  OBJECT_ATTRIBUTES v19; // [rsp+78h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-11h] BYREF
  ULONG BufferLengthOut; // [rsp+130h] [rbp+77h] BYREF
  void *v22; // [rsp+138h] [rbp+7Fh] BYREF

  v22 = 0LL;
  KeyHandle = 0LL;
  Handle = 0LL;
  BufferLengthIn = 256;
  v17 = 0LL;
  v5 = 256LL;
  BufferLengthOut = 0;
  v6 = 0LL;
  memset(&v19, 0, 44);
  v7 = 0LL;
  DestinationString = 0LL;
  GuidString = 0LL;
  while ( 1 )
  {
    TargetPath = (WCHAR *)ExAllocatePool2(256LL, v5, 1665560393LL);
    if ( !TargetPath )
    {
      inited = -1073741670;
      goto LABEL_14;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"SecureDeviceClass",
                               0LL,
                               L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class",
                               LocationTypeRegistry,
                               TargetPath,
                               BufferLengthIn,
                               &BufferLengthOut);
    inited = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( BufferLengthOut <= BufferLengthIn )
    {
      inited = -1073741595;
      goto LABEL_28;
    }
    BufferLengthIn = BufferLengthOut;
    ExFreePoolWithTag(TargetPath, 0);
    v5 = BufferLengthIn;
  }
  if ( PersistedStateLocation >= 0 )
    goto LABEL_5;
LABEL_28:
  ExFreePoolWithTag(TargetPath, 0);
  TargetPath = 0LL;
LABEL_5:
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, TargetPath);
    if ( inited >= 0 )
    {
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      inited = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      if ( inited >= 0 )
      {
        inited = RtlStringFromGUIDEx(Guid, &GuidString, 1u);
        if ( inited >= 0 )
        {
          inited = IopCreateRegistryKeyEx(&v22, KeyHandle, &GuidString, 0xF003Fu, 0, 0LL);
          if ( inited < 0 )
          {
            v6 = v22;
          }
          else
          {
            v11 = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                    (__int64)L"D:PAI(A;OICI;GA;;;SY)",
                    1,
                    (__int64)&v17,
                    0LL);
            v7 = v17;
            if ( v11 < 0 )
              v7 = 0LL;
            RtlInitUnicodeString(&DestinationString, L"Properties");
            v6 = v22;
            v19.ObjectName = &DestinationString;
            v19.Length = 48;
            v19.RootDirectory = v22;
            v19.Attributes = 576;
            v19.SecurityDescriptor = v7;
            v19.SecurityQualityOfService = 0LL;
            inited = ZwCreateKey(&Handle, 0xF003Fu, &v19, 0, 0LL, 0, 0LL);
            if ( inited >= 0 )
            {
              v12 = RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
              RtlInitUnicodeString(&DestinationString, L"Security");
              inited = ZwSetValueKey(Handle, &DestinationString, 0, 3u, *(PVOID *)(a2 + 8), v12);
            }
          }
        }
      }
    }
  }
LABEL_14:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v6 )
    ZwClose(v6);
  if ( Handle )
    ZwClose(Handle);
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  RtlFreeUnicodeString(&GuidString);
  return (unsigned int)inited;
}
