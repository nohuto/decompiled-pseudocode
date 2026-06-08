/*
 * XREFs of HwDebugDiagnosticRegistryHandler @ 0x1C000A000
 * Callers:
 *     HwDebugRegistryHandlerWrapper @ 0x1C000A2F0 (HwDebugRegistryHandlerWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002C70 (__security_check_cookie.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x1C0003ED8 (ProcLibTraceRegisterGroupEvents.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     HwDebugInitializeProcessorSupport @ 0x1C0037968 (HwDebugInitializeProcessorSupport.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0038430 (HwDebugInitializeRegistryDebugRegisters.c)
 */

__int64 HwDebugDiagnosticRegistryHandler()
{
  __int64 v0; // rdx
  __int64 v1; // rbx
  KIRQL v2; // al
  __int64 v3; // rcx
  PVOID v4; // rbx
  PVOID *v5; // rax
  __int64 v6; // rsi
  _QWORD *v7; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v12; // [rsp+20h] [rbp-50h] BYREF
  __int128 v13; // [rsp+28h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-18h] BYREF

  Interval.QuadPart = -1000000LL;
  v12 = 0;
  v14 = 0LL;
  Affinity = 0LL;
  v13 = 0LL;
  PreviousAffinity = 0LL;
  KeDelayExecutionThread(0, 0, &Interval);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0011470,
    0LL);
  KeInitializeEnumerationContext(&v13, &unk_1C0011840);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v13) )
  {
    v0 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + v12);
    v1 = *(_QWORD *)(v0 + 216);
    if ( v1 )
    {
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v0 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v2 = KfRaiseIrql(2u);
      v3 = 0LL;
      v12 = 0;
      do
      {
        *(_QWORD *)(v1 + 8 * v3 + 24) = 0LL;
        v3 = v12 + 1;
        v12 = v3;
      }
      while ( (unsigned int)v3 < 2 );
      KeLowerIrql(v2);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
  }
  while ( (__int64 *)qword_1C0011488 != &qword_1C0011488 )
  {
    v4 = P;
    if ( *(__int64 **)P != &qword_1C0011488 || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
      __fastfail(3u);
    P = (PVOID)*((_QWORD *)P + 1);
    *v5 = &qword_1C0011488;
    ProcLibTraceRegisterGroupEvents((__int64)v4, 1u);
    ExFreePoolWithTag(v4, (ULONG)1919119952);
  }
  if ( byte_1C0011D28 )
  {
    v6 = 0LL;
    do
    {
      v7 = qword_1C0011D30;
      v8 = 0;
      if ( *((_BYTE *)qword_1C0011D30 + 40 * v6 + 16) )
      {
        do
          ExFreePoolWithTag(*(PVOID *)(v7[5 * v6 + 3] + 16LL * v8++), (ULONG)1919119952);
        while ( v8 < LOBYTE(v7[5 * v6 + 2]) );
      }
      ExFreePoolWithTag((PVOID)v7[5 * v6 + 3], (ULONG)1919119952);
      ExFreePoolWithTag((PVOID)v7[5 * v6], (ULONG)1919119952);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < (unsigned __int8)byte_1C0011D28 );
    ExFreePoolWithTag(qword_1C0011D30, (ULONG)1919119952);
    byte_1C0011D28 = 0;
  }
  HwDebugInitializeRegistryDebugRegisters(1LL);
  KeInitializeEnumerationContext(&v13, &unk_1C0011840);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v13) )
  {
    v9 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + v12);
    v10 = *(_QWORD *)(v9 + 216);
    if ( v10 )
      HwDebugInitializeProcessorSupport(v9, v10, 1LL);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           qword_1C0011470);
}
