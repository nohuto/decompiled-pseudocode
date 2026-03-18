/*
 * XREFs of ?Dispose@FxUsbPipeTransferContext@@UEAAXXZ @ 0x1C0059D20
 * Callers:
 *     <none>
 * Callees:
 *     USBD_UrbFree @ 0x1C008876C (USBD_UrbFree.c)
 */

void __fastcall FxUsbPipeTransferContext::Dispose(FxUsbPipeTransferContext *this)
{
  _URB *m_Urb; // rdx

  m_Urb = (_URB *)this->m_Urb;
  if ( m_Urb )
  {
    if ( m_Urb != (_URB *)&this->m_UrbLegacy )
    {
      USBD_UrbFree(this->m_USBDHandle, m_Urb);
      this->m_Urb = 0LL;
      this->m_USBDHandle = 0LL;
    }
  }
}
