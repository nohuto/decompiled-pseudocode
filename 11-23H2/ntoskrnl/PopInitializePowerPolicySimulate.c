/*
 * XREFs of PopInitializePowerPolicySimulate @ 0x140861264
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA8F60 (PopTransitionSystemPowerStateEx.c)
 *     PoInitSystem @ 0x140B50BBC (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041B3D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x14041B490 (ZwCreateKey.c)
 */

NTSTATUS PopInitializePowerPolicySimulate()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  NTSTATUS v2; // ebx
  ULONG ResultLength; // [rsp+40h] [rbp-29h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-21h] BYREF
  ULONG Disposition; // [rsp+50h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp+37h] BYREF
  int v10; // [rsp+B0h] [rbp+47h]

  KeyHandle = 0LL;
  Disposition = 0;
  Handle = 0LL;
  ResultLength = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  v10 = 0;
  PopSimulate = PopSimulateManual;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSet;
  DestinationString = 0LL;
  ObjectAttributes.Attributes = 576;
  KeyValueInformation = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control\\Session Manager");
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v1 = ZwCreateKey(&Handle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, &Disposition);
    result = ZwClose(KeyHandle);
    if ( v1 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"PowerSimulateHiberBugcheck");
      if ( ZwQueryValueKey(
             Handle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && DWORD2(KeyValueInformation) == 4 )
      {
        PopSimulateHiberBugcheck = HIDWORD(KeyValueInformation);
      }
      RtlInitUnicodeString(&DestinationString, L"PowerPolicySimulate");
      v2 = ZwQueryValueKey(
             Handle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
      result = ZwClose(Handle);
      if ( v2 >= 0 && DWORD2(KeyValueInformation) == 4 )
      {
        result = HIDWORD(KeyValueInformation);
        PopSimulate |= HIDWORD(KeyValueInformation);
      }
    }
  }
  return result;
}
