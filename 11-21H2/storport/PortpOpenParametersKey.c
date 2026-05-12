/*
 * XREFs of PortpOpenParametersKey @ 0x1C0093178
 * Callers:
 *     PortGetBusyPauseTimeValue @ 0x1C00929D0 (PortGetBusyPauseTimeValue.c)
 *     PortGetBusyRetryCountValue @ 0x1C0092AE8 (PortGetBusyRetryCountValue.c)
 *     PortGetIoLatencyCapValue @ 0x1C0092C90 (PortGetIoLatencyCapValue.c)
 *     PortGetIoTimeoutValue @ 0x1C0092DA8 (PortGetIoTimeoutValue.c)
 *     PortOpenDeviceKey @ 0x1C0092F54 (PortOpenDeviceKey.c)
 *     PortReadStorageBusType @ 0x1C00930FC (PortReadStorageBusType.c)
 * Callees:
 *     <none>
 */

void *__fastcall PortpOpenParametersKey(struct _UNICODE_STRING *a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp+10h] BYREF
  void *v5; // [rsp+78h] [rbp+18h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  v5 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return KeyHandle;
  RtlInitUnicodeString(&DestinationString, L"Parameters");
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v5, 0x20019u, &ObjectAttributes) < 0 )
    return KeyHandle;
  ZwClose(KeyHandle);
  return v5;
}
