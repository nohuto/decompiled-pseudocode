/*
 * XREFs of HwDebugDiagnosticRegistryHandler @ 0x1C000A990
 * Callers:
 *     HwDebugRegistryHandlerWrapper @ 0x1C000AC90 (HwDebugRegistryHandlerWrapper.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002BE0 (__security_check_cookie.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x1C0004200 (ProcLibTraceRegisterGroupEvents.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 *     HwDebugInitializeProcessorSupport @ 0x1C003889C (HwDebugInitializeProcessorSupport.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0039364 (HwDebugInitializeRegistryDebugRegisters.c)
 */

__int64 HwDebugDiagnosticRegistryHandler()
{
  __int64 v0; // rdx
  __int64 v1; // rbx
  KIRQL v2; // al
  __int64 v3; // rcx
  PVOID v4; // rbx
  PVOID *v5; // rax
  __int64 v6; // rdi
  PVOID *v7; // r14
  unsigned int v8; // r15d
  char *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v13; // [rsp+20h] [rbp-50h] BYREF
  __int128 v14; // [rsp+28h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-38h]
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-18h] BYREF

  Interval.QuadPart = -1000000LL;
  v13 = 0;
  v15 = 0LL;
  Affinity = 0LL;
  v14 = 0LL;
  PreviousAffinity = 0LL;
  KeDelayExecutionThread(0, 0, &Interval);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00124F0,
    0LL);
  KeInitializeEnumerationContext(&v14, &unk_1C00128E0);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v14) )
  {
    v0 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + v13);
    v1 = *(_QWORD *)(v0 + 216);
    if ( v1 )
    {
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v0 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v2 = KfRaiseIrql(2u);
      v13 = 0;
      v3 = 0LL;
      do
      {
        *(_QWORD *)(v1 + 8 * v3 + 24) = 0LL;
        v3 = v13 + 1;
        v13 = v3;
      }
      while ( (unsigned int)v3 < 2 );
      KeLowerIrql(v2);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
  }
  while ( (__int64 *)qword_1C0012508 != &qword_1C0012508 )
  {
    v4 = P;
    if ( *(__int64 **)P != &qword_1C0012508 || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
      __fastfail(3u);
    P = (PVOID)*((_QWORD *)P + 1);
    *v5 = &qword_1C0012508;
    ProcLibTraceRegisterGroupEvents((__int64)v4, 1u);
    ExFreePoolWithTag(v4, (ULONG)1919119952);
  }
  if ( byte_1C0012DD8 )
  {
    v6 = 0LL;
    do
    {
      v7 = (PVOID *)qword_1C0012DE0;
      v8 = 0;
      v9 = (char *)qword_1C0012DE0 + 40 * v6;
      if ( v9[16] )
      {
        do
          ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)v9 + 3) + 16LL * v8++), (ULONG)1919119952);
        while ( v8 < LOBYTE(v7[5 * v6 + 2]) );
      }
      ExFreePoolWithTag(*((PVOID *)v9 + 3), (ULONG)1919119952);
      ExFreePoolWithTag(v7[5 * v6], (ULONG)1919119952);
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < (unsigned __int8)byte_1C0012DD8 );
    ExFreePoolWithTag(qword_1C0012DE0, (ULONG)1919119952);
    byte_1C0012DD8 = 0;
  }
  HwDebugInitializeRegistryDebugRegisters(1LL);
  KeInitializeEnumerationContext(&v14, &unk_1C00128E0);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v14) )
  {
    v10 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Blink->Flink + v13);
    v11 = *(_QWORD *)(v10 + 216);
    if ( v11 )
      HwDebugInitializeProcessorSupport(v10, v11, 1LL);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           qword_1C00124F0);
}
