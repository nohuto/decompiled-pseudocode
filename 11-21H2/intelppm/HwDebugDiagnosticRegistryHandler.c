/*
 * XREFs of HwDebugDiagnosticRegistryHandler @ 0x1C0002A80
 * Callers:
 *     HwDebugRegistryHandlerWrapper @ 0x1C000CA90 (HwDebugRegistryHandlerWrapper.c)
 * Callees:
 *     ProcLibTraceRegisterGroupEvents @ 0x1C00027FC (ProcLibTraceRegisterGroupEvents.c)
 *     __security_check_cookie @ 0x1C0003340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0003700 (_guard_dispatch_icall_nop.c)
 *     HwDebugInitializeProcessorSupport @ 0x1C0029358 (HwDebugInitializeProcessorSupport.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C002AE6C (HwDebugInitializeRegistryDebugRegisters.c)
 */

__int64 HwDebugDiagnosticRegistryHandler()
{
  __int64 v0; // rdx
  __int64 v1; // rbx
  KIRQL v2; // al
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  PVOID v7; // rbx
  PVOID *v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  unsigned int v11; // r14d
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
    qword_1C001DD10,
    0LL);
  KeInitializeEnumerationContext(&v13, &unk_1C001E0E0);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v13) )
  {
    v0 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v12);
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
  while ( (__int64 *)qword_1C001DD28 != &qword_1C001DD28 )
  {
    v7 = P;
    if ( *(__int64 **)P != &qword_1C001DD28 || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
      __fastfail(3u);
    P = (PVOID)*((_QWORD *)P + 1);
    *v8 = &qword_1C001DD28;
    ProcLibTraceRegisterGroupEvents((__int64)v7, 1u);
    ExFreePoolWithTag(v7, (ULONG)1919119952);
  }
  if ( byte_1C001E5C8 )
  {
    v9 = 0LL;
    do
    {
      v10 = qword_1C001E5D0;
      v11 = 0;
      if ( *((_BYTE *)qword_1C001E5D0 + 40 * v9 + 16) )
      {
        do
          ExFreePoolWithTag(*(PVOID *)(v10[5 * v9 + 3] + 16LL * v11++), (ULONG)1919119952);
        while ( v11 < LOBYTE(v10[5 * v9 + 2]) );
      }
      ExFreePoolWithTag((PVOID)v10[5 * v9 + 3], (ULONG)1919119952);
      ExFreePoolWithTag((PVOID)v10[5 * v9], (ULONG)1919119952);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < (unsigned __int8)byte_1C001E5C8 );
    ExFreePoolWithTag(qword_1C001E5D0, (ULONG)1919119952);
    byte_1C001E5C8 = 0;
  }
  HwDebugInitializeRegistryDebugRegisters(1LL);
  KeInitializeEnumerationContext(&v13, &unk_1C001E0E0);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v12, &v13) )
  {
    v4 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v12);
    v5 = *(_QWORD *)(v4 + 216);
    if ( v5 )
      HwDebugInitializeProcessorSupport(v4, v5, 1LL);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           qword_1C001DD10);
}
