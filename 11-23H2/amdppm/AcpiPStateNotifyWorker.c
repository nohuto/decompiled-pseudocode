/*
 * XREFs of AcpiPStateNotifyWorker @ 0x1C0029820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0004138 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1C0005F88 (FireWmiEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PPC @ 0x1C0028304 (AcpiEval_PPC.c)
 *     ProcLibCapChange @ 0x1C002CEB8 (ProcLibCapChange.c)
 */

__int64 __fastcall AcpiPStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  __int64 v4; // rdi
  __int64 result; // rax
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v3 = 0;
  IoFreeWorkItem(a2);
  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v4 + 280) & 0x70000000) != 0 )
  {
    if ( (int)AcpiEval_PPC(*(_QWORD *)(a1 + 64), (int *)&v6) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C00124D8,
        0LL);
      v3 = 1;
      ProcLibCapChange(v4, v6, *(unsigned int *)(v4 + 512), 100LL);
      ((void (__fastcall *)(__int64))qword_1C00129F8)(v4);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x55u,
      (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
  }
  v6 = *(_DWORD *)(v4 + 464);
  ProcLibTraceProcessorSpecificEvent(v4, (__int64)&PPM_ETW_NOTIFY_80, (__int64)&PPM_ETW_NOTIFY_80_HV, 4, (__int64)&v6);
  result = FireWmiEvent((_QWORD *)(v4 + 664), v4 + 464);
  if ( v3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1C00124D8);
  return result;
}
