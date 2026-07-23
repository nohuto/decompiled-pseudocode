/*
 * XREFs of HvlDeleteProcessor @ 0x1409413FC
 * Callers:
 *     KiStartDynamicProcessor @ 0x140973A08 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x140B47590 (KeStartAllProcessors.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x140335F60 (MmUnmapIoSpace.c)
 *     HvlpGetRegister64 @ 0x1405493A0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1405494F0 (HvlpSetRegister64.c)
 *     HvlpFreeOverlayPages @ 0x140549F00 (HvlpFreeOverlayPages.c)
 *     MmFreeIndependentPages @ 0x14087FDF0 (MmFreeIndependentPages.c)
 */

void __fastcall HvlDeleteProcessor(struct _KPRCB *a1)
{
  void *VirtualApicAssist; // rcx
  void *SchedulerAssist; // rcx
  unsigned __int64 HypercallCachedPages; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( a1->VirtualApicAssist )
  {
    if ( a1 == KeGetCurrentPrcb() )
    {
      HvlpGetRegister64(589843, &v5);
      HvlpSetRegister64(589843, v5 & 0xFFFFFFFFFFFFFFFEuLL);
    }
    VirtualApicAssist = a1->VirtualApicAssist;
    if ( (HvlpFlags & 2) != 0 )
      MmUnmapIoSpace(VirtualApicAssist, 1uLL);
    else
      HvlpFreeOverlayPages(VirtualApicAssist);
    a1->VirtualApicAssist = 0LL;
  }
  SchedulerAssist = a1->SchedulerAssist;
  if ( SchedulerAssist )
    HvlpFreeOverlayPages(SchedulerAssist);
  HypercallCachedPages = (unsigned __int64)a1->HypercallCachedPages;
  if ( HypercallCachedPages )
    MmFreeIndependentPages(HypercallCachedPages, 0x5000uLL);
}
