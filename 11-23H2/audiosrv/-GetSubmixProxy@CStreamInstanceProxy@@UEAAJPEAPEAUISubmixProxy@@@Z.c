/*
 * XREFs of ?GetSubmixProxy@CStreamInstanceProxy@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x180044810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstanceProxy::GetSubmixProxy(CStreamInstanceProxy *this, struct ISubmixProxy **a2)
{
  return CStreamInstanceProxyImpl::GetSubmixProxy((CStreamInstanceProxy *)((char *)this - 40), a2);
}
