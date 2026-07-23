/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140789888
 * Callers:
 *     PiDqQueryEvaluateFilter @ 0x140788544 (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataFree @ 0x1407F9DE4 (PiDqActionDataFree.c)
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x140819AB4 (PiSwCompleteCreate.c)
 *     PiSwDeviceFree @ 0x1409673E0 (PiSwDeviceFree.c)
 *     PiSwInterfaceFree @ 0x1409676E0 (PiSwInterfaceFree.c)
 *     PiSwProcessRemove @ 0x1409678D0 (PiSwProcessRemove.c)
 *     PiSwQueuedCreateInfoFree @ 0x140967D10 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x1407898E8 (PnpFreeDevProperty.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDevPropertyArray(unsigned int a1, char *a2, ULONG a3)
{
  char *v5; // rbx
  __int64 v6; // rbp

  if ( a1 )
  {
    v5 = a2;
    v6 = a1;
    do
    {
      PnpFreeDevProperty(v5, a3);
      v5 += 48;
      --v6;
    }
    while ( v6 );
  }
  ExFreePoolWithTag(a2, a3);
}
