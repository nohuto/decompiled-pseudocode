/*
 * XREFs of ?GetStreamInstance@CBridgeStreamInstanceProxy@@UEAAJPEAPEAUIStreamInstance@@@Z @ 0x180108100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBridgeStreamInstanceProxy::GetStreamInstance(
        CBridgeStreamInstanceProxy *this,
        struct IStreamInstance **a2)
{
  return CStreamInstanceProxyImpl::GetStreamInstance((CBridgeStreamInstanceProxy *)((char *)this - 40), a2);
}
