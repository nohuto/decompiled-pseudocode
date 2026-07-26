/*
 * XREFs of WdmlibInit @ 0x1C011A630
 * Callers:
 *     WdmlibIoCreateDeviceSecure @ 0x1C0118EC4 (WdmlibIoCreateDeviceSecure.c)
 * Callees:
 *     <none>
 */

PVOID WdmlibInit()
{
  PVOID result; // rax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"IoCreateDeviceSecure");
  PfnIoCreateDeviceSecure = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  if ( !PfnIoCreateDeviceSecure )
    PfnIoCreateDeviceSecure = (__int64)IoDevObjCreateDeviceSecure;
  RtlInitUnicodeString(&DestinationString, L"IoValidateDeviceIoControlAccess");
  result = MmGetSystemRoutineAddress(&DestinationString);
  PfnIoValidateDeviceIoControlAccess = (__int64 (__fastcall *)(_QWORD, _QWORD))result;
  WdmlibInitialized = 1;
  return result;
}
