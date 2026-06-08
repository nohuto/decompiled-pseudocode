/*
 * XREFs of InitializeEnergyEstimation @ 0x1C002CA58
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027F5C (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C002A4D4 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C002A5BC (RetrieveEfficiencyClassInformation.c)
 */

__int64 InitializeEnergyEstimation()
{
  unsigned int v0; // ebx
  unsigned int i; // edx
  unsigned int v2; // r8d
  void *v3; // rcx
  __int64 v4; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  word_1C001F8D8 = 0;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_1C001F8E8 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&qword_1C001F8F0);
  RetrieveEfficiencyClassInformation();
  qword_1C001F290 = 0LL;
  v0 = 0;
  qword_1C001F288 = 0LL;
  for ( i = dword_1C001F6D4; v0 < dword_1C001F6D4; ++v0 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v0);
    i = dword_1C001F6D4;
  }
  v2 = 1;
  qword_1C001F290 = qword_1C001F7D0[0];
  if ( i > 1 )
  {
    while ( Globals[32 * (unsigned __int64)v2 + 250] == qword_1C001F7D0[0] )
    {
      if ( ++v2 >= i )
        goto LABEL_4;
    }
    qword_1C001F290 = (__int64)SnapEnergyCountersDispatch;
  }
LABEL_4:
  v3 = (void *)qword_1C001F7C8[0];
  v4 = 1LL;
  qword_1C001F288 = qword_1C001F7C8[0];
  if ( i > 1 )
  {
    while ( Globals[32 * (unsigned __int64)(unsigned int)v4 + 249] == qword_1C001F7C8[0] )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= i )
        goto LABEL_5;
    }
    v3 = ComputeEnergyDispatch;
    qword_1C001F288 = (__int64)ComputeEnergyDispatch;
  }
LABEL_5:
  if ( !v3 )
  {
    v3 = ComputeProcessorEnergy;
    qword_1C001F288 = (__int64)ComputeProcessorEnergy;
  }
  LOBYTE(v4) = byte_1C001F270;
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_1C001F3B0)(
           v3,
           qword_1C001F290,
           v4,
           Globals);
}
