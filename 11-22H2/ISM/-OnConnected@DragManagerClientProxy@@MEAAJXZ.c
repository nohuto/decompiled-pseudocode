/*
 * XREFs of ?OnConnected@DragManagerClientProxy@@MEAAJXZ @ 0x18004CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCapability@DragManagerClientProxy@@AEAAJXZ @ 0x18004CBE8 (-CheckCapability@DragManagerClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18004CCB0 (-GetDesktop@DragManagerClientProxy@@AEAAJXZ.c)
 */

__int64 __fastcall DragManagerClientProxy::OnConnected(DragManagerClientProxy *this)
{
  DragManagerClientProxy::GetDesktop(this);
  DragManagerClientProxy::CheckCapability(this);
  return 0LL;
}
