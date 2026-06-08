/*
 * XREFs of AcpiPStateNotifyWorker @ 0x1C003B020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003DF0 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1C000433A (FireWmiEvent.c)
 *     ProcLibCapChange @ 0x1C0029F64 (ProcLibCapChange.c)
 *     AcpiEval_PPC @ 0x1C003A024 (AcpiEval_PPC.c)
 */

__int64 __fastcall AcpiPStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  char v3; // si
  __int64 v4; // rdi
  __int64 result; // rax
  int v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v3 = 0;
  IoFreeWorkItem(a2);
  v4 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v4 + 280) & 0x70000000) != 0 )
  {
    if ( (int)AcpiEval_PPC(*(_QWORD *)(a1 + 64), &v6) >= 0 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001DCF8,
        0LL);
      v3 = 1;
      ProcLibCapChange(v4, v6, *(_DWORD *)(v4 + 512), 0x64u);
      ((void (__fastcall *)(__int64))qword_1C001E1F8)(v4);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x4Fu,
      (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
  }
  v6 = *(_DWORD *)(v4 + 464);
  ProcLibTraceProcessorSpecificEvent(v4, (__int64)&PPM_ETW_NOTIFY_80, (__int64)&PPM_ETW_NOTIFY_80_HV, 4, (__int64)&v6);
  result = FireWmiEvent((_QWORD *)(v4 + 664), v4 + 464);
  if ( v3 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
             WdfDriverGlobals,
             qword_1C001DCF8);
  return result;
}
