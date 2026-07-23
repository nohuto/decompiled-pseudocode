/*
 * XREFs of PiDevCfgConfigureDeviceInterface @ 0x14095D5F0
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaceCallback @ 0x140562450 (PiDevCfgConfigureDeviceInterfaceCallback.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x14087CFE0 (PiDevCfgConfigureDeviceInterfaces.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1406CC228 (_CmOpenDeviceInterfaceRegKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x14087C634 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14087E554 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E664 (PiDevCfgCopyDeviceKey.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceInterface(const WCHAR *a1, void *a2, __int64 a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // r8
  NTSTATUS v10; // eax
  __int64 v11; // r9
  unsigned int v13; // [rsp+20h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Device");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v6;
  if ( v6 != -1073741772 )
  {
    if ( v6 < 0 )
      goto LABEL_12;
    v8 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a1, 0x32u, v7, 983103, 1, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_12;
    v8 = PiDevCfgCopyDeviceKeys(KeyHandle, Handle, v9, a3);
    if ( v8 < 0 )
      goto LABEL_12;
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, L"Properties");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v10;
  if ( v10 == -1073741772 )
  {
    v8 = 0;
  }
  else if ( v10 >= 0 )
  {
    v8 = CmOpenDeviceInterfaceRegKey(
           *(__int64 *)&PiPnpRtlCtx,
           (__int64)a1,
           0x30u,
           v11,
           983103,
           0,
           (__int64)&Handle,
           0LL);
    if ( v8 >= 0 )
    {
      v8 = PiDevCfgCopyObjectProperties(*(__int64 *)&PiPnpRtlCtx, 0LL, 0, (__int64)a2, v13, a1, 3u, Handle, 0LL, 0LL, 0);
      if ( v8 >= 0 )
        v8 = PiDevCfgCopyDeviceKey(KeyHandle, Handle, (__int64)a1, 3, 1, 0LL, a3);
    }
  }
LABEL_12:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
