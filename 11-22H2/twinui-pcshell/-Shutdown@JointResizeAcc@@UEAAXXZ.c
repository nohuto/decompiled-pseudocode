/*
 * XREFs of ?Shutdown@JointResizeAcc@@UEAAXXZ @ 0x1801BF4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall JointResizeAcc::Shutdown(HWND *this)
{
  DestroyWindow(this[3]);
  this[3] = 0LL;
}
