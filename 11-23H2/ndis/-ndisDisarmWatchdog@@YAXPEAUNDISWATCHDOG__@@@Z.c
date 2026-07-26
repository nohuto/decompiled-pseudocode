/*
 * XREFs of ?ndisDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C013963C
 * Callers:
 *     ?ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007EDCC (-ndisMReenumerateFailedAdapterInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z @ 0x1C0009070 (-WatchdogFromHandle@@YAPEAUNdisWatchdogState@@PEAUNDISWATCHDOG__@@@Z.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C0116BB0 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 */

void __fastcall ndisDisarmWatchdog(struct NDISWATCHDOG__ *a1)
{
  struct _KEVENT *v1; // rax

  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    v1 = (struct _KEVENT *)WatchdogFromHandle(a1);
    NdisWatchdogState::Disarm(v1);
  }
}
