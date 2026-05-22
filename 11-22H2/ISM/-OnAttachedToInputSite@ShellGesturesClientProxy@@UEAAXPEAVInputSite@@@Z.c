/*
 * XREFs of ?OnAttachedToInputSite@ShellGesturesClientProxy@@UEAAXPEAVInputSite@@@Z @ 0x18002FC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShellGesturesClientProxy::OnAttachedToInputSite(ShellGesturesClientProxy *this, struct InputSite *a2)
{
  *((_QWORD *)this + 5) = a2;
}
