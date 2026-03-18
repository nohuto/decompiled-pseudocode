/*
 * XREFs of NVMeSystemPowerHint @ 0x1C0010BA0
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C00036A0 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeUpdateResumeLatencyTolerance @ 0x1C0010C30 (NVMeUpdateResumeLatencyTolerance.c)
 */

__int64 __fastcall NVMeSystemPowerHint(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  __int64 result; // rax

  if ( a2[1] >= 0x10u && *a2 )
  {
    *(_DWORD *)(a1 + 1892) = a2[2];
    *(_DWORD *)(a1 + 1900) = a2[3];
    NVMeUpdateResumeLatencyTolerance(a1);
    if ( *(_DWORD *)(v2 + 88) == 5 )
    {
      v3 = v2;
    }
    else
    {
      result = *(unsigned int *)(v2 + 1880);
      if ( (result & 0x10) == 0 )
        return result;
      v3 = v2;
    }
    return StorPortExtendedFunction(57LL, v3, 0LL);
  }
  return result;
}
