/*
 * XREFs of HalpInterruptReinitializeThisProcessor @ 0x14037B2B0
 * Callers:
 *     HalpInitializeInterruptsPn @ 0x14037D15C (HalpInitializeInterruptsPn.c)
 *     HalpPostSleepMP @ 0x140A96FA8 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140A975F4 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpInterruptInitializeLocalUnit @ 0x14037BA50 (HalpInterruptInitializeLocalUnit.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

__int64 HalpInterruptReinitializeThisProcessor()
{
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 result; // rax

  BugCheckParameter4 = HalpInterruptController;
  result = *(unsigned int *)(HalpInterruptController + 244);
  if ( (result & 1) != 0 )
  {
    result = HalpInterruptInitializeLocalUnit(HalpInterruptController);
    if ( (int)result < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, KeGetPcr()->Prcb.Number, BugCheckParameter4);
  }
  return result;
}
