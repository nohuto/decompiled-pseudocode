/*
 * XREFs of ?OnAttachedToInputSite@ShellGesturesClientProxy@@UEAAXPEAVInputSite@@@Z @ 0x18002E2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShellGesturesClientProxy::OnAttachedToInputSite(ShellGesturesClientProxy *this, struct InputSite *a2)
{
  *((_QWORD *)this + 5) = a2;
}
