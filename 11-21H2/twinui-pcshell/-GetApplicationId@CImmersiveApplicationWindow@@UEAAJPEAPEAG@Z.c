/*
 * XREFs of ?GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z @ 0x18030C460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationWindow::GetApplicationId(
        HWND *this,
        unsigned __int16 **a2,
        unsigned __int16 **a3)
{
  return CallerIdentity::GetImmersiveAppIdFromWindow(this[2], a2, a3);
}
