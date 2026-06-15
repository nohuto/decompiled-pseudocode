/*
 * XREFs of ?GetSubmixProxy@CBridgeStreamInstanceProxy@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x1801080D0
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
