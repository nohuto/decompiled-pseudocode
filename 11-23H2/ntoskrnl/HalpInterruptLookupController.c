/*
 * XREFs of HalpInterruptLookupController @ 0x14031FEE0
 * Callers:
 *     HalDisableInterrupt @ 0x14031F8F0 (HalDisableInterrupt.c)
 *     HalpInterruptFindControllerAndLineState @ 0x14031FDE8 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptFindLines @ 0x14031FE80 (HalpInterruptFindLines.c)
 *     HalpInterruptRegisterController @ 0x1403786E4 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x1403794A0 (HalpInterruptRegisterLine.c)
 *     HalpInterruptEnableNmi @ 0x14037B5B4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x14037C0D8 (HalpInterruptRemap.c)
 *     HalpInterruptFindBestRouting @ 0x14037C524 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetLineState @ 0x14037C70C (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x14037C960 (HalpUnmaskInterrupt.c)
 *     HalpMaskInterrupt @ 0x1403B2680 (HalpMaskInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1405043BC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetRemappedLineState @ 0x140504760 (HalpInterruptSetRemappedLineState.c)
 *     HalpInterruptRequestInterrupt @ 0x140505170 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x1405052E8 (HalpInterruptRestoreClock.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140506718 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14050678C (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptUnmap @ 0x1409333F8 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140A95388 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall HalpInterruptLookupController(int a1)
{
  ULONG_PTR *v1; // rax
  ULONG_PTR *v2; // rdx

  v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v1 != &HalpRegisteredInterruptControllers )
  {
    v2 = v1;
    v1 = (ULONG_PTR *)*v1;
    if ( *((_DWORD *)v2 + 64) == a1 )
      return v2;
  }
  return 0LL;
}
