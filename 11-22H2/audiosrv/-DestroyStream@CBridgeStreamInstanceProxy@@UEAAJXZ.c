/*
 * XREFs of ?DestroyStream@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x180106B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBridgeStreamInstanceProxy::DestroyStream(CBridgeStreamInstanceProxy *this)
{
  return CStreamInstanceProxyImpl::DestroyStream((CBridgeStreamInstanceProxy *)((char *)this - 40));
}
