/*
 * XREFs of ?RemoveListener@Private@CompositionAnchor@Composition@UI@Windows@@UEAAJPEAUICompositionAnchorListenerPrivate@1345@@Z @ 0x180147870
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@@Z @ 0x18000C138 (-RemoveListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPri.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnchor::Private::RemoveListener(
        Windows::UI::Composition::CompositionAnchor::Private *this,
        struct Windows::UI::Composition::Private::ICompositionAnchorListenerPrivate *a2)
{
  Windows::UI::Composition::CompositionAnchor::RemoveListener(
    (Windows::UI::Composition::CompositionAnchor::Private *)((char *)this - 128),
    a2);
  return 0LL;
}
