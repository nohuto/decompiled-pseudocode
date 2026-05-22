/*
 * XREFs of ?SetMsgRoutingInfo@CGenericInk@DirectComposition@@UEAAJPEBX@Z @ 0x1800F8B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGenericInk::SetMsgRoutingInfo(
        DirectComposition::CGenericInk *this,
        const void *a2)
{
  return DirectComposition::CResourceProxy::SetBufferProperty(
           (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 3) + 8LL),
           10,
           a2,
           0x28uLL);
}
