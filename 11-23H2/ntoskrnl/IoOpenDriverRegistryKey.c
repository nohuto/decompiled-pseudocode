/*
 * XREFs of IoOpenDriverRegistryKey @ 0x14068A0E0
 * Callers:
 *     DifIoOpenDriverRegistryKeyWrapper @ 0x1405E0A90 (DifIoOpenDriverRegistryKeyWrapper.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     IopApplyMutableTagToRegistryKey @ 0x140687DC0 (IopApplyMutableTagToRegistryKey.c)
 *     IopGetRegistryValue @ 0x14068CE78 (IopGetRegistryValue.c)
 *     PipOpenServiceEnumKeys @ 0x14068E904 (PipOpenServiceEnumKeys.c)
 *     RtlFreeUnicodeString @ 0x14076F5C0 (RtlFreeUnicodeString.c)
 *     PiCreateServiceStateKey @ 0x1408714F4 (PiCreateServiceStateKey.c)
 *     PiGetServiceNameInfo @ 0x1408722A0 (PiGetServiceNameInfo.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoOpenDriverRegistryKey(__int64 a1, int a2, ACCESS_MASK a3, int a4, _QWORD *a5)
{
  HANDLE v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // r12
  int v12; // eax
  NTSTATUS ServiceNameInfo; // ebx
  int RegistryValue; // eax
  HANDLE v15; // rax
  int ServiceStateKey; // eax
  HANDLE KeyHandle; // [rsp+48h] [rbp-31h] BYREF
  _DWORD *v19; // [rsp+50h] [rbp-29h]
  HANDLE Handle; // [rsp+58h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-9h] BYREF
  char v23; // [rsp+D8h] [rbp+5Fh] BYREF

  KeyHandle = 0LL;
  v23 = 0;
  v19 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Handle = 0LL;
  v9 = 0LL;
  if ( !a1 )
    goto LABEL_39;
  v10 = *(_QWORD *)(a1 + 48);
  if ( !v10 )
    goto LABEL_39;
  if ( !*(_QWORD *)(v10 + 32) )
    goto LABEL_39;
  if ( !*(_WORD *)(v10 + 24) )
    goto LABEL_39;
  if ( a4 )
    goto LABEL_39;
  v11 = a5;
  if ( !a5 )
    goto LABEL_39;
  v12 = PipOpenServiceEnumKeys(v10 + 24, 131101LL, &Handle, 0LL, 0);
  v9 = Handle;
  ServiceNameInfo = v12;
  if ( v12 < 0 )
    goto LABEL_23;
  RegistryValue = IopGetRegistryValue(Handle);
  ServiceNameInfo = RegistryValue;
  if ( RegistryValue == -1073741772 )
    goto LABEL_39;
  if ( RegistryValue < 0 )
    goto LABEL_23;
  if ( v19[1] != 4 || v19[3] != 4 )
  {
    ServiceNameInfo = -1073741492;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)((char *)v19 + (unsigned int)v19[2]) & 0xB) == 0 )
    goto LABEL_39;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v23);
      if ( ServiceNameInfo < 0 )
        goto LABEL_23;
      ServiceStateKey = PiCreateServiceStateKey((ULONG)&DestinationString, a3, 0, (__int64)&KeyHandle);
      goto LABEL_31;
    }
    if ( a2 == 2 )
    {
      ServiceNameInfo = PiGetServiceNameInfo(a1, &DestinationString, &v23);
      if ( ServiceNameInfo < 0 )
        goto LABEL_23;
      ServiceStateKey = PiCreateServiceStateKey((ULONG)&DestinationString, a3, 1, (__int64)&KeyHandle);
LABEL_31:
      ServiceNameInfo = ServiceStateKey;
      if ( ServiceStateKey >= 0 )
      {
LABEL_32:
        v15 = KeyHandle;
        if ( !KeyHandle )
          goto LABEL_22;
        IopApplyMutableTagToRegistryKey(KeyHandle);
LABEL_21:
        v15 = KeyHandle;
LABEL_22:
        KeyHandle = 0LL;
        *v11 = v15;
        goto LABEL_23;
      }
LABEL_18:
      if ( ServiceNameInfo < 0 )
        goto LABEL_23;
      if ( a2 != 1 && a2 != 2 )
        goto LABEL_21;
      goto LABEL_32;
    }
LABEL_39:
    ServiceNameInfo = -1073741811;
    goto LABEL_23;
  }
  if ( (a3 & 0x2000000) != 0 )
    a3 = a3 & 0xFDFDFFE6 | 0x20019;
  if ( (a3 & 0x7FFDFFE6) == 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PiDriverRegKeyParametersName;
    ObjectAttributes.RootDirectory = v9;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ServiceNameInfo = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
    goto LABEL_18;
  }
  ServiceNameInfo = -1073741790;
LABEL_23:
  RtlFreeUnicodeString(&DestinationString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)ServiceNameInfo;
}
