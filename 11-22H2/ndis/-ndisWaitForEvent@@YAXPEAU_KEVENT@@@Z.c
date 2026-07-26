/*
 * XREFs of ?ndisWaitForEvent@@YAXPEAU_KEVENT@@@Z @ 0x1C012B50C
 * Callers:
 *     ndisIfDeleteCompartment @ 0x1C00B865C (ndisIfDeleteCompartment.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisWaitForEvent(struct _KEVENT *a1)
{
  ndisWaitForKernelObject(a1);
}
