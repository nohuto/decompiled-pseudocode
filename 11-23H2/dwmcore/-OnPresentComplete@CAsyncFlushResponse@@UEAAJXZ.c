/*
 * XREFs of ?OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ @ 0x1800F32F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CAsyncFlushResponse::OnPresentComplete(CAsyncFlushResponse *this)
{
  return CAsyncFlushResponse::SendResponse(this, 0);
}
