/*
 * XREFs of AcpiCStateNotifyWorker @ 0x1C0026AD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00025DC (WPP_RECORDER_SF_.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0004138 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1C0005F88 (FireWmiEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     InitAcpi2CStates @ 0x1C0024270 (InitAcpi2CStates.c)
 *     UpdateKernelPlatformStates @ 0x1C00358AC (UpdateKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x1C0035DE0 (InitAcpiIdleDomain.c)
 *     PepNotifyReportCStates @ 0x1C0037DC0 (PepNotifyReportCStates.c)
 */

void __fastcall AcpiCStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  void *v3; // rbx
  __int64 v4; // rsi
  void *v5; // rbp
  void *v6; // r15
  char v7; // r13
  __int64 v8; // rdi
  _QWORD *v9; // r14
  __int64 Pool2; // rax
  int inited; // eax
  int v12; // eax
  __int64 v13; // rdx
  void *v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF

  v15 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  if ( a2 )
    IoFreeWorkItem(a2);
  v8 = *(_QWORD *)(a1 + 64);
  if ( (*(_DWORD *)(v8 + 280) & 0x7F070) != 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v8 + 208),
      0LL);
    v7 = 1;
    if ( (int)InitAcpi2CStates(v8, &v14) >= 0 )
    {
      v3 = v14;
      inited = InitAcpiIdleDomain(v8, &v15, v14);
      v4 = v15;
      if ( inited < 0 )
        v4 = 0LL;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 24LL, 1919119952LL);
      v3 = (void *)Pool2;
      v9 = (_QWORD *)(v8 + 208);
      if ( !Pool2 )
        goto LABEL_16;
      *(_DWORD *)Pool2 = 1;
      *(_OWORD *)(Pool2 + 4) = 0LL;
      *(_BYTE *)(Pool2 + 4) = 127;
      *(_BYTE *)(Pool2 + 16) = 1;
      *(_WORD *)(Pool2 + 18) = 0;
      *(_DWORD *)(Pool2 + 20) = 0;
    }
    v6 = *(void **)(v8 + 528);
    v12 = *(_DWORD *)(v8 + 280);
    v5 = *(void **)(v8 + 536);
    *(_QWORD *)(v8 + 528) = v3;
    v3 = 0LL;
    *(_QWORD *)(v8 + 536) = v4;
    if ( (v12 & 0x300) != 0 )
      PepNotifyReportCStates(v8);
    ((void (__fastcall *)(__int64))qword_1C00129E8)(v8);
    v9 = (_QWORD *)(v8 + 208);
    if ( (*(_DWORD *)(v8 + 280) & 0x200LL) != 0 )
    {
      LOBYTE(v13) = 1;
      UpdateKernelPlatformStates(v8, v13);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x57u,
        (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    v9 = (_QWORD *)(v8 + 208);
  }
LABEL_16:
  ProcLibTraceProcessorSpecificEvent(v8, (__int64)&PPM_ETW_NOTIFY_81, (__int64)&PPM_ETW_NOTIFY_81_HV, 0, 0LL);
  FireWmiEvent((_QWORD *)(v8 + 680), 0LL);
  if ( v7 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, *v9);
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)1919119952);
  if ( v5 )
    ExFreePoolWithTag(v5, (ULONG)1919119952);
  if ( v3 )
    ExFreePoolWithTag(v3, (ULONG)1919119952);
}
