/*
 * XREFs of WINRT_IMPL_CoTaskMemAlloc @ 0x180061D82
 * Callers:
 *     ?NonDelegatingGetIids@?$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@@U1345@UIUserResizeVisualNative@34@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800F0FE0 (-NonDelegatingGetIids@-$root_implements@UUserResizeVisual@implementation@Transitions@Udwm@winrt@.c)
 *     ?NonDelegatingGetIids@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800F4304 (-NonDelegatingGetIids@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisu.c)
 *     ?NonDelegatingGetIids@?$root_implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UITransitionManagerNativePrivate@34@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800FA8C0 (-NonDelegatingGetIids@-$root_implements@UTransitionManager@implementation@Transitions@Udwm@winrt.c)
 *     ?NonDelegatingGetIids@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800FA950 (-NonDelegatingGetIids@-$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __stdcall WINRT_IMPL_CoTaskMemAlloc(SIZE_T cb)
{
  return CoTaskMemAlloc(cb);
}
