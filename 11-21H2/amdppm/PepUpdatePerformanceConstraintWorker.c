/*
 * XREFs of PepUpdatePerformanceConstraintWorker @ 0x1C003A100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     PepNotifyPerfConstraints @ 0x1C000A7B8 (PepNotifyPerfConstraints.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C00216D0 (ProcLibTracePerfConstraintChange.c)
 *     ProcLibCapChange @ 0x1C002B85C (ProcLibCapChange.c)
 */

void __fastcall PepUpdatePerformanceConstraintWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  void *DeviceExtension; // rbp
  __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  DeviceExtension = DeviceObject->DeviceExtension;
  v7 = 0LL;
  v3 = *((_QWORD *)DeviceExtension + 150);
  if ( v3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0011458,
      0LL);
    _InterlockedExchange((volatile __int32 *)DeviceExtension + 295, 0);
    PepNotifyPerfConstraints((__int64)DeviceExtension, &v7, (_DWORD *)(v3 + 56));
    v4 = *(_QWORD *)(v3 + 40);
    v5 = v7;
    if ( (unsigned int)v7 > *(_DWORD *)(v4 + 4) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x29u,
          (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids);
        v4 = *(_QWORD *)(v3 + 40);
      }
      v5 = *(_DWORD *)(v4 + 4);
      LODWORD(v7) = v5;
    }
    if ( v5 < *(_DWORD *)(v4 + 12) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          1u,
          0x2Au,
          (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids);
        v4 = *(_QWORD *)(v3 + 40);
      }
      v5 = *(_DWORD *)(v4 + 12);
      LODWORD(v7) = v5;
    }
    v6 = 100 * v5 / *(_DWORD *)(v4 + 4);
    HIDWORD(v7) = v6;
    *(_QWORD *)(v3 + 64) = v7;
    ProcLibCapChange(
      (__int64)DeviceExtension,
      *((_DWORD *)DeviceExtension + 116),
      *((_DWORD *)DeviceExtension + 128),
      v6);
    ((void (__fastcall *)(void *))qword_1C0011958)(DeviceExtension);
    ProcLibTracePerfConstraintChange((__int64)DeviceExtension, v7, *(_DWORD *)(v3 + 56));
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0011458);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x28u,
      (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids);
  }
}
