/*
 * XREFs of AcpiTStateNotifyWorker @ 0x1C0029480
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003E10 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1C00055EC (FireWmiEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_TPC @ 0x1C00276C4 (AcpiEval_TPC.c)
 *     ProcLibCapChange @ 0x1C002B85C (ProcLibCapChange.c)
 */

__int64 __fastcall AcpiTStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v3 = 0;
  IoFreeWorkItem(a2);
  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v4 + 280) & 0x3000000) != 0 )
  {
    if ( (int)AcpiEval_TPC(*(_QWORD *)(a1 + 64), &v6) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C0011458,
        0LL);
      v3 = 1;
      ProcLibCapChange(v4, *(unsigned int *)(v4 + 464), v6, 100LL);
      ((void (__fastcall *)(__int64))qword_1C0011958)(v4);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x50u,
      (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
  }
  v6 = *(_DWORD *)(v4 + 512);
  ProcLibTraceProcessorSpecificEvent(v4, (__int64)&PPM_ETW_NOTIFY_82, (__int64)&PPM_ETW_NOTIFY_82_HV, 4, (__int64)&v6);
  result = FireWmiEvent((_QWORD *)(v4 + 696), v4 + 512);
  if ( v3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1C0011458);
  return result;
}
