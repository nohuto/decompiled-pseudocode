/*
 * XREFs of ?IsSameWindow@CMultitaskingViewFrame@@UEAA_NPEAUHWND__@@@Z @ 0x18056E0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CMultitaskingViewFrame::IsSameWindow(CMultitaskingViewFrame *this, HWND a2)
{
  return *((_QWORD *)this + 6) == (_QWORD)a2;
}
