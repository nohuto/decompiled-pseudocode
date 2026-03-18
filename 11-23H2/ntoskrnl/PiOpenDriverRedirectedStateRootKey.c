/*
 * XREFs of PiOpenDriverRedirectedStateRootKey @ 0x140956368
 * Callers:
 *     PipHardwareConfigClearStartOverrides @ 0x140951E3C (PipHardwareConfigClearStartOverrides.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1B0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041AF40 (ZwClose.c)
 *     ZwOpenKey @ 0x14041AFA0 (ZwOpenKey.c)
 *     RtlFreeUnicodeString @ 0x14076F3D0 (RtlFreeUnicodeString.c)
 *     PiGetStateRootPath @ 0x140871470 (PiGetStateRootPath.c)
 */

__int64 __fastcall PiOpenDriverRedirectedStateRootKey(__int64 a1, _QWORD *a2)
{
  int StateRootPath; // ebx
  NTSTATUS v4; // eax
  HANDLE v5; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a2 )
  {
    StateRootPath = PiGetStateRootPath(L"DriverStatePath", 0LL, 0, &DestinationString);
    if ( StateRootPath >= 0 )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      StateRootPath = v4;
      if ( v4 == -1073741772 )
      {
        StateRootPath = -1073741275;
      }
      else if ( v4 >= 0 )
      {
        v5 = KeyHandle;
        KeyHandle = 0LL;
        *a2 = v5;
      }
    }
  }
  else
  {
    StateRootPath = -1073741811;
  }
  RtlFreeUnicodeString(&DestinationString);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)StateRootPath;
}
