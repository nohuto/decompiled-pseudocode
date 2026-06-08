/*
 * XREFs of memset @ 0x1C0003A00
 * Callers:
 *     ProcLibTraceRegisterGroupEvents @ 0x1C00027FC (ProcLibTraceRegisterGroupEvents.c)
 *     memcpy_s @ 0x1C00033A8 (memcpy_s.c)
 *     GetProcessorStatusInfo @ 0x1C0009350 (GetProcessorStatusInfo.c)
 *     PepParkMask @ 0x1C000D660 (PepParkMask.c)
 *     PepParkPreference @ 0x1C000D7E0 (PepParkPreference.c)
 *     RetrieveModelParameters @ 0x1C002458C (RetrieveModelParameters.c)
 *     InitEnergyCounters @ 0x1C0024920 (InitEnergyCounters.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C0026AB4 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 *     HwDebugCreateRegisterGroup @ 0x1C002945C (HwDebugCreateRegisterGroup.c)
 *     RegisterPepDevice @ 0x1C002A218 (RegisterPepDevice.c)
 *     RegisterWmi @ 0x1C002A704 (RegisterWmi.c)
 *     EmiProcessIoctl @ 0x1C002A9D0 (EmiProcessIoctl.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C002AC80 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C002AD00 (GetRegistryQwordValue.c)
 *     EvtDriverDeviceAdd @ 0x1C002AFD0 (EvtDriverDeviceAdd.c)
 *     ProcLibDeviceCreate @ 0x1C002B2AC (ProcLibDeviceCreate.c)
 *     RegisterKernelIdleDomains @ 0x1C002C298 (RegisterKernelIdleDomains.c)
 *     DeregisterKernelIdleDomains @ 0x1C002C8CC (DeregisterKernelIdleDomains.c)
 *     WppTraceCallback @ 0x1C0036040 (WppTraceCallback.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C0036D8C (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x1C0037430 (ValidateCoordinatedState.c)
 *     RegisterHvPepContext @ 0x1C0039374 (RegisterHvPepContext.c)
 *     AcquirePccInterface @ 0x1C003957C (AcquirePccInterface.c)
 *     RegisterKernelPepIdleStates @ 0x1C003E644 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C003F26C (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x1C003F824 (UpdateKernelPlatformStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0040B44 (PepNotifyQueryCoordinatedStates.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0041B18 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0041EF4 (HwDebugInitializeRegistryDebugRegister.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C0043A68 (LpiTranslateCoordinatedIdleStates.c)
 *     ProcLibGlobalInit @ 0x1C00462E4 (ProcLibGlobalInit.c)
 *     ReadEnergyEquation @ 0x1C0046FE0 (ReadEnergyEquation.c)
 *     PopulateEnergyEstimationModel @ 0x1C00470B8 (PopulateEnergyEstimationModel.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
