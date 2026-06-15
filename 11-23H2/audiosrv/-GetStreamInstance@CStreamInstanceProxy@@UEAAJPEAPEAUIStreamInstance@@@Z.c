/*
 * XREFs of ?GetStreamInstance@CStreamInstanceProxy@@UEAAJPEAPEAUIStreamInstance@@@Z @ 0x1800477E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstanceProxy::GetStreamInstance(CStreamInstanceProxy *this, struct IStreamInstance **a2)
{
  return CStreamInstanceProxyImpl::GetStreamInstance((CStreamInstanceProxy *)((char *)this - 40), a2);
}
