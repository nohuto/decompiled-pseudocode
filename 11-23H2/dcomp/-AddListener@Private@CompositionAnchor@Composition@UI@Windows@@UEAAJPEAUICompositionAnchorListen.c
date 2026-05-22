/*
 * XREFs of ?AddListener@Private@CompositionAnchor@Composition@UI@Windows@@UEAAJPEAUICompositionAnchorListenerPrivate@1345@E@Z @ 0x180147840
 * Callers:
 *     <none>
 * Callees:
 *     ?AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivate@Private@234@_N@Z @ 0x18006BE40 (-AddListener@CompositionAnchor@Composition@UI@Windows@@QEAAXPEAUICompositionAnchorListenerPrivat.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnchor::Private::AddListener(
        Windows::UI::Composition::Visual **this,
        struct Windows::UI::Composition::Private::ICompositionAnchorListenerPrivate *a2,
        char a3,
        const char *a4)
{
  Windows::UI::Composition::CompositionAnchor::AddListener(this - 16, a2, a3 != 0, a4);
  return 0LL;
}
