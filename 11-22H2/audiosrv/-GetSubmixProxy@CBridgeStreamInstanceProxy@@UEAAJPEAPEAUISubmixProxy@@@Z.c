/*
 * XREFs of ?GetSubmixProxy@CBridgeStreamInstanceProxy@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x180108120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBridgeStreamInstanceProxy::GetSubmixProxy(
        CBridgeStreamInstanceProxy *this,
        struct ISubmixProxy **a2)
{
  return CStreamInstanceProxyImpl::GetSubmixProxy((CBridgeStreamInstanceProxy *)((char *)this - 40), a2);
}
