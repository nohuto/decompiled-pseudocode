/*
 * XREFs of HwDebugDiagnosticRegistryHandler @ 0x1C0002D30
 * Callers:
 *     HwDebugRegistryHandlerWrapper @ 0x1C000DD50 (HwDebugRegistryHandlerWrapper.c)
 * Callees:
 *     ProcLibTraceRegisterGroupEvents @ 0x1C00034F8 (ProcLibTraceRegisterGroupEvents.c)
 *     __security_check_cookie @ 0x1C0003770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x1C0026428 (HwDebugInitializeRegistryDebugRegisters.c)
 *     HwDebugInitializeProcessorSupport @ 0x1C002BBA4 (HwDebugInitializeProcessorSupport.c)
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
  __int64 v9; // rdi
  PVOID *v10; // r14
  unsigned int v11; // r15d
  char *v12; // rbx
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
    qword_1C001F030,
    0LL);
  KeInitializeEnumerationContext(&v14, &unk_1C001F420);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v14) )
  {
    v0 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v13);
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
  while ( (__int64 *)qword_1C001F048 != &qword_1C001F048 )
  {
    v7 = P;
    if ( *(__int64 **)P != &qword_1C001F048 || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
      __fastfail(3u);
    P = (PVOID)*((_QWORD *)P + 1);
    *v8 = &qword_1C001F048;
    ProcLibTraceRegisterGroupEvents(v7, 1LL);
    ExFreePoolWithTag(v7, (ULONG)1919119952);
  }
  if ( byte_1C001F918 )
  {
    v9 = 0LL;
    do
    {
      v10 = (PVOID *)qword_1C001F920;
      v11 = 0;
      v12 = (char *)qword_1C001F920 + 40 * v9;
      if ( v12[16] )
      {
        do
          ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)v12 + 3) + 16LL * v11++), (ULONG)1919119952);
        while ( v11 < LOBYTE(v10[5 * v9 + 2]) );
      }
      ExFreePoolWithTag(*((PVOID *)v12 + 3), (ULONG)1919119952);
      ExFreePoolWithTag(v10[5 * v9], (ULONG)1919119952);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < (unsigned __int8)byte_1C001F918 );
    ExFreePoolWithTag(qword_1C001F920, (ULONG)1919119952);
    byte_1C001F918 = 0;
  }
  HwDebugInitializeRegistryDebugRegisters(1LL);
  KeInitializeEnumerationContext(&v14, &unk_1C001F420);
  while ( !(unsigned int)KeEnumerateNextProcessor(&v13, &v14) )
  {
    v4 = *((_QWORD *)&WPP_MAIN_CB.Queue.ListEntry.Flink->Flink + v13);
    v5 = *(_QWORD *)(v4 + 216);
    if ( v5 )
      HwDebugInitializeProcessorSupport(v4, v5, 1LL);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
           WdfDriverGlobals,
           qword_1C001F030);
}
