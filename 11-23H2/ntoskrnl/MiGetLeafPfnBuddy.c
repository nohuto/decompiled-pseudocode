/*
 * XREFs of MiGetLeafPfnBuddy @ 0x14038BFDC
 * Callers:
 *     MiIdentifyPfn @ 0x14023E4C0 (MiIdentifyPfn.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x14038BEE0 (MiInitializeLargeMdlLeafPfns.c)
 *     MiSwapStackPage @ 0x140399F3C (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x14039A23C (MiCanStealKernelStack.c)
 *     MiPfnsWorthTrying @ 0x1403BB694 (MiPfnsWorthTrying.c)
 *     MiLogMdlRangeEvent @ 0x1406234A0 (MiLogMdlRangeEvent.c)
 *     MiGetPfnPidSafe @ 0x1406266E4 (MiGetPfnPidSafe.c)
 *     MiDoStackCopy @ 0x14062CDA0 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x14062CF80 (MiJumpStackTarget.c)
 *     MiDeleteVadAwePtes @ 0x140649968 (MiDeleteVadAwePtes.c)
 *     MiFreePhysicalPageChain @ 0x14064A170 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x14064A540 (MiFreePhysicalPages.c)
 *     MiDeleteSubsectionLargePages @ 0x14064EDA8 (MiDeleteSubsectionLargePages.c)
 *     MiFreeLargePages @ 0x140668250 (MiFreeLargePages.c)
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
