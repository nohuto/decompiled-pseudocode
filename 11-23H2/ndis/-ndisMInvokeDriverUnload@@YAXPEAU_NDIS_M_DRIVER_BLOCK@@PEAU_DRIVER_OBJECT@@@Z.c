/*
 * XREFs of ?ndisMInvokeDriverUnload@@YAXPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_DRIVER_OBJECT@@@Z @ 0x1C012DC0C
 * Callers:
 *     ?ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C005DE90 (-ndisMUnloadEx@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000C230 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x1C00D1494 (--1MiniportDriverUnload@AzTelemetry@@UEAA@XZ.c)
 */

void __fastcall ndisMInvokeDriverUnload(struct _NDIS_M_DRIVER_BLOCK *a1, struct _DRIVER_OBJECT *a2)
{
  char v4; // al
  LARGE_INTEGER v5; // [rsp+30h] [rbp-38h] BYREF
  char v6; // [rsp+38h] [rbp-30h]
  struct _NDIS_M_DRIVER_BLOCK *v7; // [rsp+40h] [rbp-28h]
  LARGE_INTEGER PerformanceFrequency[2]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDEu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
  v5.QuadPart = (LONGLONG)&AzTelemetry::Details::DriverCallbackBase<_NDIS_MINIPORT_BLOCK,int>::`vftable';
  if ( (unsigned int)dword_1C00F41D8 > 4 && tlgKeywordOn((__int64)&dword_1C00F41D8, 512LL) )
  {
    v6 = 1;
    v4 = 1;
  }
  else
  {
    v6 = 0;
    v4 = 0;
  }
  v9 = 0LL;
  v7 = a1;
  *(_OWORD *)&PerformanceFrequency[0].LowPart = 0LL;
  if ( v4 )
    PerformanceFrequency[0] = KeQueryPerformanceCounter(&PerformanceFrequency[1]);
  v5.QuadPart = (LONGLONG)&AzTelemetry::MiniportDriverUnload::`vftable';
  a1->MiniportDriverCharacteristics.UnloadHandler(a2);
  AzTelemetry::MiniportDriverUnload::~MiniportDriverUnload(&v5);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xDFu,
      (struct _GUID *)&WPP_f915f1d438c0363afc6d1acaf4431aa7_Traceguids,
      a1);
}
