/*
 * XREFs of ?ndisWaitForEvent@@YAXPEAU_KEVENT@@@Z @ 0x1C011F818
 * Callers:
 *     ndisIfDeleteCompartment @ 0x1C00B34A8 (ndisIfDeleteCompartment.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisWaitForEvent(struct _KEVENT *a1)
{
  ndisWaitForKernelObject(a1);
}
