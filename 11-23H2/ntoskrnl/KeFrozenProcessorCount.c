/*
 * XREFs of KeFrozenProcessorCount @ 0x140576B24
 * Callers:
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405522A4 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057A7BC (KiBugCheckRecoveryFreezeOtherProcessors.c)
 * Callees:
 *     KeGetPrcb @ 0x140257330 (KeGetPrcb.c)
 */

__int64 KeFrozenProcessorCount()
{
  unsigned int v0; // edi
  unsigned int i; // ebx
  __int64 Prcb; // rax

  v0 = 0;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
  {
    Prcb = KeGetPrcb(i);
    if ( Prcb && (*(_DWORD *)(Prcb + 11656) & 0xF) == 2 )
      ++v0;
  }
  return v0;
}
