/*
 * XREFs of InitializeEnergyEstimation @ 0x1C00390A8
 * Callers:
 *     ProcLibDeviceStart @ 0x1C002BB68 (ProcLibDeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BB10 (_guard_dispatch_icall_nop.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C00391D4 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RetrieveEfficiencyClassInformation @ 0x1C00394B0 (RetrieveEfficiencyClassInformation.c)
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
  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_1C0011CF8 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&unk_1C0011D00);
  RetrieveEfficiencyClassInformation();
  qword_1C00116C8 = 0LL;
  v0 = 0;
  qword_1C00116C0 = 0LL;
  for ( i = (unsigned int)dword_1C0011AE4; v0 < dword_1C0011AE4; ++v0 )
  {
    InitializeEnergyEstimationForEfficiencyClass(v0);
    i = (unsigned int)dword_1C0011AE4;
  }
  qword_1C00116C8 = qword_1C0011BE8[0];
  for ( j = 1; j < (unsigned int)i; ++j )
  {
    if ( Globals[32 * (unsigned __int64)j + 245] != qword_1C0011BE8[0] )
    {
      qword_1C00116C8 = (__int64)SnapEnergyCountersDispatch;
      break;
    }
  }
  v3 = (void *)qword_1C0011BE0[0];
  v4 = 1;
  qword_1C00116C0 = qword_1C0011BE0[0];
  while ( v4 < (unsigned int)i )
  {
    if ( Globals[32 * (unsigned __int64)v4 + 244] != qword_1C0011BE0[0] )
    {
      v3 = ComputeEnergyDispatch;
      qword_1C00116C0 = (__int64)ComputeEnergyDispatch;
      break;
    }
    ++v4;
  }
  if ( !v3 )
  {
    v3 = ComputeProcessorEnergy;
    qword_1C00116C0 = (__int64)ComputeProcessorEnergy;
  }
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_1C00117E0)(v3, qword_1C00116C8, i, Globals);
}
