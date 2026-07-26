/*
 * XREFs of ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C010C7BC
 * Callers:
 *     ?ndisFDoOidRequestInternal@@YAXPEAX@Z @ 0x1C000A090 (-ndisFDoOidRequestInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C0008EE0 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C010C600 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisDrainWatchdog(struct NDISWATCHDOG__ *a1)
{
  struct NDISWATCHDOG__ *v1; // rax

  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v1 = WatchdogFromHandle(a1);
    ndisWaitForKernelObject(v1 + 42);
  }
}
