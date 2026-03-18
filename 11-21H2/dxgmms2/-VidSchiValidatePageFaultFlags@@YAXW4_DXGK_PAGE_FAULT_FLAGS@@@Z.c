/*
 * XREFs of ?VidSchiValidatePageFaultFlags@@YAXW4_DXGK_PAGE_FAULT_FLAGS@@@Z @ 0x1C00415E8
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000C7A0 (VidSchDdiNotifyInterruptWorker.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0042D28 (VidSchiProcessHwQueuePageFaultedDpc.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiValidatePageFaultFlags(unsigned int a1)
{
  if ( (a1 & 0x10) != 0 )
  {
    WdLogSingleEntry5(0LL, 281LL, 12LL, (int)a1, 0LL, 0LL);
    __debugbreak();
  }
  if ( (a1 & 0xC) == 0xC )
  {
    WdLogSingleEntry5(0LL, 281LL, 13LL, (int)a1, 0LL, 0LL);
    __debugbreak();
  }
  if ( a1 >= 0x100 )
  {
    WdLogSingleEntry5(0LL, 281LL, 13LL, (int)a1, 0LL, 0LL);
    __debugbreak();
  }
}
