/*
 * XREFs of ??1FxUsbPipeRequestContext@@UEAA@XZ @ 0x1C00599E0
 * Callers:
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C00565F0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C0056EC0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ??_EFxUsbPipeRequestContext@@UEAAPEAXI@Z @ 0x1C0059B10 (--_EFxUsbPipeRequestContext@@UEAAPEAXI@Z.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C005AC48 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 * Callees:
 *     USBD_UrbFree @ 0x1C008876C (USBD_UrbFree.c)
 */

void __fastcall FxUsbPipeRequestContext::~FxUsbPipeRequestContext(FxUsbPipeRequestContext *this)
{
  _URB *m_Urb; // rdx

  m_Urb = (_URB *)this->m_Urb;
  this->__vftable = (FxUsbPipeRequestContext_vtbl *)FxUsbPipeRequestContext::`vftable';
  if ( m_Urb && m_Urb != (_URB *)&this->m_UrbLegacy )
    USBD_UrbFree(this->m_USBDHandle, m_Urb);
  this->m_Urb = 0LL;
  this->m_USBDHandle = 0LL;
  this->__vftable = (FxUsbPipeRequestContext_vtbl *)FxRequestContext::`vftable';
}
