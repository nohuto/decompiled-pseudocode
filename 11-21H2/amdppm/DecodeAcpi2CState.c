/*
 * XREFs of DecodeAcpi2CState @ 0x1C0035540
 * Callers:
 *     RegisterHvCStates @ 0x1C0024058 (RegisterHvCStates.c)
 *     RegisterHiddenIdleStates @ 0x1C00320F0 (RegisterHiddenIdleStates.c)
 *     RegisterKernelCStates @ 0x1C0032500 (RegisterKernelCStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C0033620 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C00339C8 (RegisterKernelPepIdleStatesV2.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C0035598 (DecodeAcpiIdleState.c)
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
