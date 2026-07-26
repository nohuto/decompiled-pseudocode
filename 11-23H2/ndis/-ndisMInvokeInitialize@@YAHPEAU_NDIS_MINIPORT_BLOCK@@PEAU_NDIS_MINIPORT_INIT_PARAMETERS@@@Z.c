/*
 * XREFs of ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C01171F8
 * Callers:
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C014724C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C014C7DC (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000CCD0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000D200 (WPP_RECORDER_SF_qqD.c)
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C0023248 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C0023278 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFO.c)
 *     ?AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z @ 0x1C00234E0 (-AzTelemetryWriteMiniportInitialize@@YAXPEBU_NDIS_MINIPORT_BLOCK@@HAEBVKStopwatch@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeInitialize(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_MINIPORT_INIT_PARAMETERS *a2)
{
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rdi
  unsigned int v5; // esi
  char v7[4]; // [rsp+38h] [rbp-30h]
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]

  DriverHandle = a1->DriverHandle;
  v9 = 0LL;
  v8 = 0LL;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDAu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      DriverHandle);
  *(LARGE_INTEGER *)&v8 = KeQueryPerformanceCounter((PLARGE_INTEGER)&v8 + 1);
  v5 = DriverHandle->MiniportDriverCharacteristics.InitializeHandlerEx(a1, DriverHandle->MiniportDriverContext, a2);
  KStopwatch::Stop((LARGE_INTEGER *)&v8);
  AzTelemetryWriteMiniportInitialize(a1, v5, (const struct KStopwatch *)&v8);
  NdisTraceLoggingDeviceInitialized((__int64)a1, (KStopwatch *)&v8, v5 != 0 ? 0xB : 0, v5);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v5;
    WPP_RECORDER_SF_qqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDBu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      (char)a1,
      (char)DriverHandle,
      *(_DWORD *)v7);
  }
  return v5;
}
