/*
 * XREFs of ?GetUsbdStatus@FxUsbPipeRequestContext@@UEAAJXZ @ 0x1C00096D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxUsbPipeRequestContext::GetUsbdStatus(FxUsbPipeRequestContext *this)
{
  return (unsigned int)this->m_Urb->Hdr.Status;
}
