/*
 * XREFs of InitializeEnergyEstimation @ 0x1C003A02C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002C914 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C450 (_guard_dispatch_icall_nop.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C003A168 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C003A450 (RetrieveEfficiencyClassInformation.c)
 */

__int64 InitializeEnergyEstimation()
{
  unsigned int v0; // ebx
  __int64 i; // r8
  unsigned int j; // edx
  void *v3; // rcx
  unsigned int v4; // edx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  word_1C0012D98 = 0;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_1C0012DA8 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&unk_1C0012DB0);
  RetrieveEfficiencyClassInformation();
  qword_1C0012750 = 0LL;
  v0 = 0;
  qword_1C0012748 = 0LL;
  for ( i = (unsigned int)dword_1C0012B94; v0 < dword_1C0012B94; ++v0 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v0);
    i = (unsigned int)dword_1C0012B94;
  }
  qword_1C0012750 = qword_1C0012C90[0];
  for ( j = 1; j < (unsigned int)i; ++j )
  {
    if ( Globals[32 * (unsigned __int64)j + 250] != qword_1C0012C90[0] )
    {
      qword_1C0012750 = (__int64)SnapEnergyCountersDispatch;
      break;
    }
  }
  v3 = (void *)qword_1C0012C88[0];
  v4 = 1;
  qword_1C0012748 = qword_1C0012C88[0];
  while ( v4 < (unsigned int)i )
  {
    if ( Globals[32 * (unsigned __int64)v4 + 249] != qword_1C0012C88[0] )
    {
      v3 = ComputeEnergyDispatch;
      qword_1C0012748 = (__int64)ComputeEnergyDispatch;
      break;
    }
    ++v4;
  }
  if ( !v3 )
  {
    v3 = ComputeProcessorEnergy;
    qword_1C0012748 = (__int64)ComputeProcessorEnergy;
  }
  LOBYTE(i) = byte_1C0012730;
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_1C0012870)(v3, qword_1C0012750, i, Globals);
}
