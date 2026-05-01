/*
 * XREFs of ?RegisterForApplicationViewChanges@ApplicationViewFilteredCollection@@WBI@EAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1802ABD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ApplicationViewFilteredCollection::RegisterForApplicationViewChanges(
        __int64 a1,
        struct IApplicationViewChangeListener *a2,
        unsigned int *a3)
{
  return ApplicationViewFilteredCollection::RegisterForApplicationViewChanges(
           (ApplicationViewFilteredCollection *)(a1 - 24),
           a2,
           a3);
}
