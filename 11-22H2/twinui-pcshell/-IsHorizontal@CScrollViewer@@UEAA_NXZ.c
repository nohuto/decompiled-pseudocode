/*
 * XREFs of ?IsHorizontal@CScrollViewer@@UEAA_NXZ @ 0x18058C930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CScrollViewer::IsHorizontal(CScrollViewer *this)
{
  return *((_BYTE *)this + 80) & 1;
}
