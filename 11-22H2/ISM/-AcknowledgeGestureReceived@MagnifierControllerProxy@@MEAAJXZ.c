/*
 * XREFs of ?AcknowledgeGestureReceived@MagnifierControllerProxy@@MEAAJXZ @ 0x18002FB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MagnifierControllerProxy::AcknowledgeGestureReceived(MagnifierControllerProxy *this)
{
  *((_BYTE *)this + 56) = 1;
  return 0LL;
}
