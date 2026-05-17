/*
 * XREFs of _alloca_probe @ 0x1800A8F40
 * Callers:
 *     RtlRaiseException @ 0x180032D00 (RtlRaiseException.c)
 *     RtlUnwind @ 0x180034F10 (RtlUnwind.c)
 *     RtlDispatchException @ 0x180035990 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x180036958 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x180038900 (RtlUnwindEx.c)
 *     RtlQueryWnfStateData @ 0x18005A3B0 (RtlQueryWnfStateData.c)
 *     RtlWow64GetProcessMachines @ 0x180082B40 (RtlWow64GetProcessMachines.c)
 *     RtlWow64IsWowGuestMachineSupported @ 0x1800867C0 (RtlWow64IsWowGuestMachineSupported.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x18008AD80 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     ReadStringDelimited_1 @ 0x1800A20D0 (ReadStringDelimited_1.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 *     AVrfInitializeVerifier @ 0x1800E4F54 (AVrfInitializeVerifier.c)
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
