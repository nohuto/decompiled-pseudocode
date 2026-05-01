/*
 * XREFs of ?AddRef@VirtualDesktop@@WBA@EAAKXZ @ 0x1801F8370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::AddRef(__int64 a1)
{
  return Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::AddRef((Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *)(a1 - 16));
}
