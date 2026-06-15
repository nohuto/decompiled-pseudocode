/*
 * XREFs of ?StopStream@CBridgeStreamInstanceProxy@@UEAAJXZ @ 0x18010A210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBridgeStreamInstanceProxy::StopStream(CBridgeStreamInstanceProxy *this)
{
  return CStreamInstanceProxyImpl::StopStream((CBridgeStreamInstanceProxy *)((char *)this - 40));
}
