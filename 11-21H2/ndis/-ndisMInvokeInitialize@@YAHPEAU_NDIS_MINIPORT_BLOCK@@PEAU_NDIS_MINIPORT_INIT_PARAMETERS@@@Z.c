/*
 * XREFs of ?ndisMInvokeInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_INIT_PARAMETERS@@@Z @ 0x1C010C02C
 * Callers:
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013A96C (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C013FE7C (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     ?NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@H@Z @ 0x1C0024AB8 (-NdisTraceLoggingDeviceInitialized@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEBVKStopwatch@@W4_NDIS_TRACEFO.c)
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C0024CF0 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
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
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      DriverHandle);
  *(LARGE_INTEGER *)&v8 = KeQueryPerformanceCounter((PLARGE_INTEGER)&v8 + 1);
  v5 = DriverHandle->MiniportDriverCharacteristics.InitializeHandlerEx(a1, DriverHandle->MiniportDriverContext, a2);
  KStopwatch::Stop((LARGE_INTEGER *)&v8);
  NdisTraceLoggingDeviceInitialized((__int64)a1, (KStopwatch *)&v8, v5 != 0 ? 0xB : 0, v5);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v7 = v5;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDBu,
      (struct _GUID *)&WPP_4efe2fafd68c375547b85d0db6ed757b_Traceguids,
      (char)a1,
      (char)DriverHandle,
      *(_DWORD *)v7);
  }
  return v5;
}
