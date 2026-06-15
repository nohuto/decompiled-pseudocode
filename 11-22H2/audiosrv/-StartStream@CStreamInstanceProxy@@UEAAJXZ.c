/*
 * XREFs of ?StartStream@CStreamInstanceProxy@@UEAAJXZ @ 0x18004AF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CStreamInstanceProxy::StartStream(CStreamInstanceProxy *this)
{
  return CStreamInstanceProxyImpl::StartStream((CStreamInstanceProxy *)((char *)this - 40));
}
