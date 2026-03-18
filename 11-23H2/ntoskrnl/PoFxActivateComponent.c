/*
 * XREFs of PoFxActivateComponent @ 0x140287290
 * Callers:
 *     PopFxActivateDevice @ 0x140322C60 (PopFxActivateDevice.c)
 *     HalpInterruptInitPowerManagement @ 0x140396E1C (HalpInterruptInitPowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x140396F38 (HalpTimerInitPowerManagement.c)
 *     PoFxStartDevicePowerManagement @ 0x1403979C0 (PoFxStartDevicePowerManagement.c)
 *     HalpDmaInitPowerManagement @ 0x14039C15C (HalpDmaInitPowerManagement.c)
 *     DifPoFxActivateComponentWrapper @ 0x1405E9130 (DifPoFxActivateComponentWrapper.c)
 *     PopFxUnregisterDevice @ 0x140985DC4 (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x140B5DC20 (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxActivateComponent @ 0x140287300 (PopFxActivateComponent.c)
 *     PopFxBugCheck @ 0x140588BE0 (PopFxBugCheck.c)
 */

__int64 __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, int a3)
{
  __int64 v3; // r8

  v3 = a3 & 0xFFFFFFF7;
  if ( (v3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (v3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  return PopFxActivateComponent(
           BugCheckParameter2,
           *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * (unsigned int)BugCheckParameter3),
           v3,
           0LL);
}
