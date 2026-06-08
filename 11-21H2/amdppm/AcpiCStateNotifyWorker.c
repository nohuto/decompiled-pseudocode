/*
 * XREFs of AcpiCStateNotifyWorker @ 0x1C0025640
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003E10 (ProcLibTraceProcessorSpecificEvent.c)
 *     FireWmiEvent @ 0x1C00055EC (FireWmiEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     InitAcpiIdleDomain @ 0x1C002D018 (InitAcpiIdleDomain.c)
 *     UpdateKernelPlatformStates @ 0x1C00348DC (UpdateKernelPlatformStates.c)
 *     InitAcpi2CStates @ 0x1C0035B34 (InitAcpi2CStates.c)
 *     PepNotifyReportCStates @ 0x1C0036E8C (PepNotifyReportCStates.c)
 */

void __fastcall AcpiCStateNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2)
{
  void *v3; // rbx
  __int64 v4; // rsi
  void *v5; // rbp
  void *v6; // r14
  char v7; // r15
  __int64 v8; // rdi
  __int64 Pool2; // rax
  int inited; // eax
  int v11; // eax
  __int64 v12; // rdx
  void *v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
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
    if ( (int)InitAcpi2CStates(v8, &v13) >= 0 )
    {
      v3 = v13;
      inited = InitAcpiIdleDomain(v8, &v14, v13);
      v4 = v14;
      if ( inited < 0 )
        v4 = 0LL;
    }
    else
    {
      Pool2 = ExAllocatePool2(64LL, 24LL, 1919119952LL);
      v3 = (void *)Pool2;
      if ( !Pool2 )
        goto LABEL_15;
      *(_DWORD *)Pool2 = 1;
      *(_OWORD *)(Pool2 + 4) = 0LL;
      *(_BYTE *)(Pool2 + 4) = 127;
      *(_BYTE *)(Pool2 + 16) = 1;
      *(_WORD *)(Pool2 + 18) = 0;
      *(_DWORD *)(Pool2 + 20) = 0;
    }
    v6 = *(void **)(v8 + 528);
    v11 = *(_DWORD *)(v8 + 280);
    v5 = *(void **)(v8 + 536);
    *(_QWORD *)(v8 + 528) = v3;
    v3 = 0LL;
    *(_QWORD *)(v8 + 536) = v4;
    if ( (v11 & 0x300) != 0 )
      PepNotifyReportCStates(v8);
    ((void (__fastcall *)(__int64))qword_1C0011948)(v8);
    if ( (*(_DWORD *)(v8 + 280) & 0x200LL) != 0 )
    {
      LOBYTE(v12) = 1;
      UpdateKernelPlatformStates(v8, v12);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x51u,
      (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
  }
LABEL_15:
  ProcLibTraceProcessorSpecificEvent(v8, (__int64)&PPM_ETW_NOTIFY_81, (__int64)&PPM_ETW_NOTIFY_81_HV, 0, 0LL);
  FireWmiEvent((_QWORD *)(v8 + 680), 0LL);
  if ( v7 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(v8 + 208));
  if ( v6 )
    ExFreePoolWithTag(v6, (ULONG)1919119952);
  if ( v5 )
    ExFreePoolWithTag(v5, (ULONG)1919119952);
  if ( v3 )
    ExFreePoolWithTag(v3, (ULONG)1919119952);
}
