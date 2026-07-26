/*
 * XREFs of WppLoadTracingSupport @ 0x1C011540C
 * Callers:
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C0033594 (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 */

PVOID WppLoadTracingSupport()
{
  PVOID result; // rax
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v2; // [rsp+50h] [rbp+10h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"PsGetVersion");
  pfnWppGetVersion = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiTraceMessage");
  pfnWppTraceMessage = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"WmiQueryTraceInformation");
  pfnWppQueryTraceInformation = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  result = pfnWppGetVersion;
  WPPTraceSuite = 2;
  if ( pfnWppGetVersion )
    result = (PVOID)pfnWppGetVersion(&v2, 0LL, 0LL, 0LL);
  if ( v2 >= 6 )
  {
    RtlInitUnicodeString(&DestinationString, L"EtwRegisterClassicProvider");
    result = MmGetSystemRoutineAddress(&DestinationString);
    pfnEtwRegisterClassicProvider = (__int64)result;
    if ( result )
    {
      RtlInitUnicodeString(&DestinationString, L"EtwUnregister");
      result = MmGetSystemRoutineAddress(&DestinationString);
      WPPTraceSuite = 4;
    }
  }
  return result;
}
