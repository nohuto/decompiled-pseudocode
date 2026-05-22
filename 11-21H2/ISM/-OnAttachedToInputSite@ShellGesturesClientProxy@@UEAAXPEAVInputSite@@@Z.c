/*
 * XREFs of ?OnAttachedToInputSite@ShellGesturesClientProxy@@UEAAXPEAVInputSite@@@Z @ 0x1800254A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ShellGesturesClientProxy::OnAttachedToInputSite(ShellGesturesClientProxy *this, struct InputSite *a2)
{
  *((_QWORD *)this + 5) = a2;
}
