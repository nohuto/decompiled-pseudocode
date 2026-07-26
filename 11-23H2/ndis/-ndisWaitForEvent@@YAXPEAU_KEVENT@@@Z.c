/*
 * XREFs of ?ndisWaitForEvent@@YAXPEAU_KEVENT@@@Z @ 0x1C012B4CC
 * Callers:
 *     ndisIfDeleteCompartment @ 0x1C00B867C (ndisIfDeleteCompartment.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C5C0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisWaitForEvent(struct _KEVENT *a1)
{
  ndisWaitForKernelObject(a1);
}
