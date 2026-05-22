/*
 * XREFs of ?RegisterVisualTreeChangeCallback@CompositionDiagnosticsInterop@Composition@UI@Windows@@UEAAJPEAUICompositionTreeChangedDiagnostics@234@@Z @ 0x1801015E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionDiagnosticsInterop::RegisterVisualTreeChangeCallback(
        Windows::UI::Composition::CompositionDiagnosticsInterop *this,
        struct Windows::UI::Composition::ICompositionTreeChangedDiagnostics *a2)
{
  qword_180220D10 = (__int64)a2;
  Windows::UI::Composition::Visual::s_fIsVisualTreeCallbackRegistered = a2 != 0LL;
  return 0LL;
}
