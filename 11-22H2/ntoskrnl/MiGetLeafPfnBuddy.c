/*
 * XREFs of MiGetLeafPfnBuddy @ 0x140389ACC
 * Callers:
 *     MiIdentifyPfn @ 0x14023E4A0 (MiIdentifyPfn.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x1403899D0 (MiInitializeLargeMdlLeafPfns.c)
 *     MiSwapStackPage @ 0x140399C4C (MiSwapStackPage.c)
 *     MiCanStealKernelStack @ 0x140399F4C (MiCanStealKernelStack.c)
 *     MiPfnsWorthTrying @ 0x1403BB034 (MiPfnsWorthTrying.c)
 *     MiLogMdlRangeEvent @ 0x140623510 (MiLogMdlRangeEvent.c)
 *     MiGetPfnPidSafe @ 0x140626754 (MiGetPfnPidSafe.c)
 *     MiDoStackCopy @ 0x14062CE10 (MiDoStackCopy.c)
 *     MiJumpStackTarget @ 0x14062CFF0 (MiJumpStackTarget.c)
 *     MiDeleteVadAwePtes @ 0x1406499D8 (MiDeleteVadAwePtes.c)
 *     MiFreePhysicalPageChain @ 0x14064A1E0 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x14064A5B0 (MiFreePhysicalPages.c)
 *     MiDeleteSubsectionLargePages @ 0x14064EE18 (MiDeleteSubsectionLargePages.c)
 *     MiFreeLargePages @ 0x1406682C0 (MiFreeLargePages.c)
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
