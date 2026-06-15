/*
 * XREFs of ?StartStream@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x18010A0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBridgeStreamInstanceProxy::StartStream(CBridgeStreamInstanceProxy *this)
{
  return CStreamInstanceProxyImpl::StartStream((CBridgeStreamInstanceProxy *)((char *)this - 40));
}
