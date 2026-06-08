/*
 * XREFs of AcpiTStateNotifyWorker @ 0x1C003D1E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0004EF4 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1C0005668 (FireWmiEvent.c)
 *     ProcLibCapChange @ 0x1C0027608 (ProcLibCapChange.c)
 *     AcpiEval_TPC @ 0x1C003B830 (AcpiEval_TPC.c)
 */

__int64 __fastcall AcpiTStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v3 = 0;
  IoFreeWorkItem(a2);
  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v4 + 280) & 0x3000000) != 0 )
  {
    if ( (int)AcpiEval_TPC(*(_QWORD *)(a1 + 64), (unsigned int *)&v6) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001F018,
        0LL);
      v3 = 1;
      ProcLibCapChange(v4, *(_DWORD *)(v4 + 464), v6, 0x64u);
      ((void (__fastcall *)(__int64))qword_1C001F538)(v4);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x56u,
      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
  }
  v6 = *(_DWORD *)(v4 + 512);
  ProcLibTraceProcessorSpecificEvent(v4, (__int64)&PPM_ETW_NOTIFY_82, (__int64)&PPM_ETW_NOTIFY_82_HV, 4, (__int64)&v6);
  result = FireWmiEvent((_QWORD *)(v4 + 696), v4 + 512);
  if ( v3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1C001F018);
  return result;
}
