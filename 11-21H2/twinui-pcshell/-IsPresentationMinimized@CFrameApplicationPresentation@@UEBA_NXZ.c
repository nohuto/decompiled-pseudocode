/*
 * XREFs of ?IsPresentationMinimized@CFrameApplicationPresentation@@UEBA_NXZ @ 0x18015ED80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFrameApplicationPresentation::IsPresentationMinimized(HWND *this)
{
  return IsIconic(this[16]);
}
