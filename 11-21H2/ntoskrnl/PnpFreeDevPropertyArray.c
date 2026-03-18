/*
 * XREFs of PnpFreeDevPropertyArray @ 0x140779620
 * Callers:
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x140661C4C (PiSwDeviceFree.c)
 *     PiSwCompleteCreate @ 0x14076426C (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PiDqActionDataFree @ 0x140778370 (PiDqActionDataFree.c)
 *     PiDqQueryEvaluateFilter @ 0x1407796C4 (PiDqQueryEvaluateFilter.c)
 *     PiSwInterfaceFree @ 0x1409536B0 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140953AB8 (PiSwQueuedCreateInfoFree.c)
 * Callees:
 *     PnpFreeDevProperty @ 0x140779680 (PnpFreeDevProperty.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
