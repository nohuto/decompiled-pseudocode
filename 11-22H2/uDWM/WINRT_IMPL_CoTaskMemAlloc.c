/*
 * XREFs of WINRT_IMPL_CoTaskMemAlloc @ 0x18005DE95
 * Callers:
 *     ?NonDelegatingGetIids@?$root_implements@UWindowJointResizeTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIBitmapManager@45@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800EDBC0 (-NonDelegatingGetIids@-$root_implements@UWindowJointResizeTransitionHandler@implementation@Priva.c)
 *     ?NonDelegatingGetIids@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800F5728 (-NonDelegatingGetIids@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisu.c)
 *     ?NonDelegatingGetIids@?$root_implements@UTransitionManager@implementation@Transitions@Udwm@winrt@@U1345@UIRotationTransitionManager@Private@345@UIWindowStateTransitionManager@7345@UIAnimationsTransitionManager@7345@UITransitionManagerNativePrivate@34@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800FE070 (-NonDelegatingGetIids@-$root_implements@UTransitionManager@implementation@Transitions@Udwm@winrt.c)
 *     ?NonDelegatingGetIids@?$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@U1345@UITransitionStateNative@34@UITransitionStateNativePrivate@34@@impl@winrt@@IEAAHPEAIPEAPEAUguid@3@@Z @ 0x1800FE100 (-NonDelegatingGetIids@-$root_implements@UTransitionState@implementation@Transitions@Udwm@winrt@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __stdcall WINRT_IMPL_CoTaskMemAlloc(SIZE_T cb)
{
  return CoTaskMemAlloc(cb);
}
