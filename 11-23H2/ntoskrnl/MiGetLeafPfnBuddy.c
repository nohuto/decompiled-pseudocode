/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14038C1BC
 * Callers:
 *     MiIdentifyPfn @ 0x14023E590 (MiIdentifyPfn.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14038C0C0 (MiInitializeLargeMdlLeafPfns.c)
 *     MiSwapStackPage @ 0x14039A11C (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x14039A41C (MiCanStealKernelStack.c)
 *     MiPfnsWorthTrying @ 0x1403BB874 (MiPfnsWorthTrying.c)
 *     MiLogMdlRangeEvent @ 0x1406239F0 (MiLogMdlRangeEvent.c)
 *     MiGetPfnPidSafe @ 0x140626C34 (MiGetPfnPidSafe.c)
 *     MiDoStackCopy @ 0x14062D2F0 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x14062D4D0 (MiJumpStackTarget.c)
 *     MiDeleteVadAwePtes @ 0x140649EB8 (MiDeleteVadAwePtes.c)
 *     MiFreePhysicalPageChain @ 0x14064A6C0 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x14064AA90 (MiFreePhysicalPages.c)
 *     MiDeleteSubsectionLargePages @ 0x14064F2F8 (MiDeleteSubsectionLargePages.c)
 *     MiFreeLargePages @ 0x1406687A0 (MiFreeLargePages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafPfnBuddy(_QWORD *a1)
{
  if ( (*a1 & 0xFFFFFFFFFFELL) != 0 )
    return 8 * (*a1 & 0xFFFFFFFFFFELL | 0xFFFFF00000000000uLL);
  else
    return 0LL;
}
