/*
 * XREFs of _alloca_probe @ 0x1800A3D80
 * Callers:
 *     RtlpWalkFrameChain @ 0x18001E3CC (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x18001E860 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180020160 (RtlUnwindEx.c)
 *     RtlUnwind @ 0x1800547E0 (RtlUnwind.c)
 *     RtlRaiseException @ 0x1800549A0 (RtlRaiseException.c)
 *     RtlQueryWnfStateData @ 0x18005BB10 (RtlQueryWnfStateData.c)
 *     RtlWow64GetProcessMachines @ 0x18007E980 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x180081260 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x1800872A0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     ReadStringDelimited_1 @ 0x18009D260 (ReadStringDelimited_1.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD9FC (LdrpInitializeExecutionOptions.c)
 *     RtlpQueryProcessMachine @ 0x1800E351C (RtlpQueryProcessMachine.c)
 *     AVrfInitializeVerifier @ 0x1800E3DE4 (AVrfInitializeVerifier.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
      StackLimit -= 4096;
    while ( v1 < StackLimit );
  }
  return result;
}
