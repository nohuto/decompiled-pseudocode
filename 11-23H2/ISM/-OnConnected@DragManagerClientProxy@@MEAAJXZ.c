/*
 * XREFs of ?OnConnected@DragManagerClientProxy@@MEAAJXZ @ 0x18004C120
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCapability@DragManagerClientProxy@@AEAAJXZ @ 0x18004C148 (-CheckCapability@DragManagerClientProxy@@AEAAJXZ.c)
 *     ?GetDesktop@DragManagerClientProxy@@AEAAJXZ @ 0x18004C210 (-GetDesktop@DragManagerClientProxy@@AEAAJXZ.c)
 */

__int64 __fastcall DragManagerClientProxy::OnConnected(DragManagerClientProxy *this)
{
  DragManagerClientProxy::GetDesktop(this);
  DragManagerClientProxy::CheckCapability(this);
  return 0LL;
}
