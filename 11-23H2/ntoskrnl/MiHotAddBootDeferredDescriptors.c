/*
 * XREFs of MiHotAddBootDeferredDescriptors @ 0x1408506A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 *     MiHotAddBootDeferredDescriptorsDiscardable @ 0x140B68BDC (MiHotAddBootDeferredDescriptorsDiscardable.c)
 */

LONG MiHotAddBootDeferredDescriptors()
{
  MiHotAddBootDeferredDescriptorsDiscardable();
  return KeSetEvent(&stru_140C672E8, 0, 0);
}
