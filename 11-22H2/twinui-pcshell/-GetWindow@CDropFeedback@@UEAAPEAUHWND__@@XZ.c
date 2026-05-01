/*
 * XREFs of ?GetWindow@CDropFeedback@@UEAAPEAUHWND__@@XZ @ 0x1801C3D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CDropFeedback::GetWindow(CDropFeedback *this)
{
  return (HWND)*((_QWORD *)this + 5);
}
