/*
 * XREFs of HalpInterruptLookupController @ 0x140320170
 * Callers:
 *     HalDisableInterrupt @ 0x14031FB80 (HalDisableInterrupt.c)
 *     HalpInterruptFindControllerAndLineState @ 0x140320078 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptFindLines @ 0x140320110 (HalpInterruptFindLines.c)
 *     HalpInterruptRegisterController @ 0x140378884 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x140379640 (HalpInterruptRegisterLine.c)
 *     HalpInterruptEnableNmi @ 0x14037B754 (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x14037C278 (HalpInterruptRemap.c)
 *     HalpInterruptFindBestRouting @ 0x14037C6C4 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetLineState @ 0x14037C8AC (HalpInterruptSetLineState.c)
 *     HalpUnmaskInterrupt @ 0x14037CB00 (HalpUnmaskInterrupt.c)
 *     HalpMaskInterrupt @ 0x1403B2860 (HalpMaskInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x14050490C (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetRemappedLineState @ 0x140504CB0 (HalpInterruptSetRemappedLineState.c)
 *     HalpInterruptRequestInterrupt @ 0x1405056C0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x140505838 (HalpInterruptRestoreClock.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140506C68 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x140506CDC (HalpInterruptServiceActiveBoth.c)
 *     HalpInterruptUnmap @ 0x1409335F8 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140A951F8 (HalpInterruptMaskAcpi.c)
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
