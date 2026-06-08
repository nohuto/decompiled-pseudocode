/*
 * XREFs of memset @ 0x1C000C880
 * Callers:
 *     PepParkMask @ 0x1C0002460 (PepParkMask.c)
 *     memcpy_s @ 0x1C0002C38 (memcpy_s.c)
 *     ProcLibTraceRegisterGroupEvents @ 0x1C0004200 (ProcLibTraceRegisterGroupEvents.c)
 *     GetProcessorStatusInfo @ 0x1C0006030 (GetProcessorStatusInfo.c)
 *     PepParkPreference @ 0x1C000B900 (PepParkPreference.c)
 *     InitCoreProcessorSetAffinity @ 0x1C001FE70 (InitCoreProcessorSetAffinity.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0020F98 (GetRegistryDwordValueNoDefault.c)
 *     GetRegistryQwordValue @ 0x1C0021018 (GetRegistryQwordValue.c)
 *     EvtDriverDeviceAdd @ 0x1C0022F20 (EvtDriverDeviceAdd.c)
 *     WppTraceCallback @ 0x1C0023670 (WppTraceCallback.c)
 *     RegisterHvPepContext @ 0x1C00260B4 (RegisterHvPepContext.c)
 *     AcquirePccInterface @ 0x1C002627C (AcquirePccInterface.c)
 *     RegisterWmi @ 0x1C002679C (RegisterWmi.c)
 *     ProcLibDeviceCreate @ 0x1C002CFB4 (ProcLibDeviceCreate.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C002F0B4 (ValidateCoordinatedDependencyOptions.c)
 *     ValidateCoordinatedState @ 0x1C002F640 (ValidateCoordinatedState.c)
 *     DeregisterKernelIdleDomains @ 0x1C0030BE8 (DeregisterKernelIdleDomains.c)
 *     InitCpcStatesInternal @ 0x1C0031174 (InitCpcStatesInternal.c)
 *     RegisterKernelIdleDomains @ 0x1C003399C (RegisterKernelIdleDomains.c)
 *     RegisterKernelPepIdleStates @ 0x1C00345D8 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPlatformStates @ 0x1C00352F4 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x1C00358AC (UpdateKernelPlatformStates.c)
 *     PepNotifyQueryCoordinatedStates @ 0x1C0037348 (PepNotifyQueryCoordinatedStates.c)
 *     HwDebugCreateRegisterGroup @ 0x1C0038498 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x1C0038A68 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x1C0038E44 (HwDebugInitializeRegistryDebugRegister.c)
 *     EmiProcessIoctl @ 0x1C0039840 (EmiProcessIoctl.c)
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x1C003A158 (InitializeEnergyEstimationForEfficiencyClass.c)
 *     RegisterPepDevice @ 0x1C003B98C (RegisterPepDevice.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C003C3A0 (LpiTranslateCoordinatedIdleStates.c)
 *     memset$thunk$772440563353939046 @ 0x1C003E010 (memset$thunk$772440563353939046.c)
 *     ProcLibGlobalInit @ 0x1C004052C (ProcLibGlobalInit.c)
 *     PopulateEnergyEstimationModel @ 0x1C004127C (PopulateEnergyEstimationModel.c)
 *     ReadEnergyEquation @ 0x1C00413DC (ReadEnergyEquation.c)
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
