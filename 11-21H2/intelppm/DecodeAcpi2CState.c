/*
 * XREFs of DecodeAcpi2CState @ 0x1C002C7C0
 * Callers:
 *     RegisterKernelCStates @ 0x1C002C598 (RegisterKernelCStates.c)
 *     RegisterHvCStates @ 0x1C0038848 (RegisterHvCStates.c)
 *     RegisterHiddenIdleStates @ 0x1C003DE90 (RegisterHiddenIdleStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C003E644 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C003E99C (RegisterKernelPepIdleStatesV2.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C002C818 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall DecodeAcpi2CState(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = DecodeAcpiIdleState(a1, a2, *(unsigned __int8 *)(a2 + 12), 0, a3, a4, 0LL, a5);
  if ( (int)result >= 0 )
  {
    if ( a5 )
      *(_BYTE *)(a5 + 82) = *(_BYTE *)(a2 + 12);
  }
  return result;
}
