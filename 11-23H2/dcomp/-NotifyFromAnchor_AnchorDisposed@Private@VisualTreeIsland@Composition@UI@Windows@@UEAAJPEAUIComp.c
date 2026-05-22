/*
 * XREFs of ?NotifyFromAnchor_AnchorDisposed@Private@VisualTreeIsland@Composition@UI@Windows@@UEAAJPEAUICompositionAnchorPrivate@1345@@Z @ 0x180159DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualTreeIsland::Private::NotifyFromAnchor_AnchorDisposed(
        Windows::UI::Composition::VisualTreeIsland::Private *this,
        struct Windows::UI::Composition::Private::ICompositionAnchorPrivate *a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(int *)(*((_QWORD *)this - 63) + 100LL) < 1 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      256LL,
      (__int64)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtvisualtreeisland.cpp",
      a4);
  return 0LL;
}
