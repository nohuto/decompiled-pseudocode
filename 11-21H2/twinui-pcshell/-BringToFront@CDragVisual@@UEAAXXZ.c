/*
 * XREFs of ?BringToFront@CDragVisual@@UEAAXXZ @ 0x180531C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDragVisual::BringToFront(HWND *this)
{
  SetWindowPos(this[16], 0LL, 0, 0, 0, 0, 0x13u);
}
