/*
 * XREFs of ?Dispose@FxUsbUrb@@MEAAEXZ @ 0x1C000F610
 * Callers:
 *     <none>
 * Callees:
 *     USBD_UrbFree @ 0x1C008876C (USBD_UrbFree.c)
 */

unsigned __int8 __fastcall FxUsbUrb::Dispose(FxUsbUrb *this)
{
  unsigned __int8 result; // al

  USBD_UrbFree(this->m_USBDHandle, (_URB *)this->m_pBuffer);
  this->m_pBuffer = 0LL;
  result = 1;
  this->m_USBDHandle = 0LL;
  return result;
}
