/*
 * XREFs of _alloca_probe @ 0x1800A5E30
 * Callers:
 *     RtlpWalkFrameChain @ 0x18001E1EC (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x18001E680 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x18001FF80 (RtlUnwindEx.c)
 *     RtlUnwind @ 0x180054680 (RtlUnwind.c)
 *     RtlRaiseException @ 0x180054840 (RtlRaiseException.c)
 *     RtlQueryWnfStateData @ 0x1800612E0 (RtlQueryWnfStateData.c)
 *     RtlWow64GetProcessMachines @ 0x18007EFF0 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800818D0 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180087AA0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     ReadStringDelimited_1 @ 0x18009DA60 (ReadStringDelimited_1.c)
 *     RtlpQueryProcessMachine @ 0x1800E484C (RtlpQueryProcessMachine.c)
 *     AVrfInitializeVerifier @ 0x1800E5114 (AVrfInitializeVerifier.c)
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
