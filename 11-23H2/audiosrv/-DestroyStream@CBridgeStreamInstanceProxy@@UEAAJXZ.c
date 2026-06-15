/*
 * XREFs of ?DestroyStream@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x180106AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBridgeStreamInstanceProxy::DestroyStream(CBridgeStreamInstanceProxy *this)
{
  return CStreamInstanceProxyImpl::DestroyStream((CBridgeStreamInstanceProxy *)((char *)this - 40));
}
