/*
 * XREFs of DecodeAcpi2CState @ 0x1C0023BF0
 * Callers:
 *     RegisterHvCStates @ 0x1C0025518 (RegisterHvCStates.c)
 *     RegisterHiddenIdleStates @ 0x1C0033060 (RegisterHiddenIdleStates.c)
 *     RegisterKernelCStates @ 0x1C0033468 (RegisterKernelCStates.c)
 *     RegisterKernelPepIdleStates @ 0x1C00345D8 (RegisterKernelPepIdleStates.c)
 *     RegisterKernelPepIdleStatesV2 @ 0x1C0034984 (RegisterKernelPepIdleStatesV2.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x1C0023C48 (DecodeAcpiIdleState.c)
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
