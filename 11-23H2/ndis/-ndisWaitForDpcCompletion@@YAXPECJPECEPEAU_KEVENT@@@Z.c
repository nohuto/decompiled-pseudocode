/*
 * XREFs of ?ndisWaitForDpcCompletion@@YAXPECJPECEPEAU_KEVENT@@@Z @ 0x1C00B1844
 * Callers:
 *     NdisMDeregisterInterrupt @ 0x1C00C7500 (NdisMDeregisterInterrupt.c)
 *     NdisMDeregisterInterruptEx @ 0x1C01551E0 (NdisMDeregisterInterruptEx.c)
 * Callees:
 *     ?ndisWaitForKernelObject@@YA_NPEAX_J@Z @ 0x1C0110B34 (-ndisWaitForKernelObject@@YA_NPEAX_J@Z.c)
 */

void __fastcall ndisWaitForDpcCompletion(volatile int *a1, volatile unsigned __int8 *a2, struct _KEVENT *a3)
{
  int i; // eax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  *a2 = 1;
  _InterlockedOr(v6, 0);
  for ( i = *a1; i > 0; i = *a1 )
    ndisWaitForKernelObject(a3, 1000LL);
}
