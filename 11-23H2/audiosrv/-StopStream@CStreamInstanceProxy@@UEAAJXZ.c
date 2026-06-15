/*
 * XREFs of ?StopStream@CStreamInstanceProxy@@UEAAJXZ @ 0x180049EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CStreamInstanceProxy::StopStream(CStreamInstanceProxy *this)
{
  return CStreamInstanceProxyImpl::StopStream((CStreamInstanceProxy *)((char *)this - 40));
}
