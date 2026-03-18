/*
 * XREFs of ??1FxUsbDeviceStringContext@@UEAA@XZ @ 0x1C005C4CC
 * Callers:
 *     ??_GFxUsbDeviceStringContext@@UEAAPEAXI@Z @ 0x1C005C5D0 (--_GFxUsbDeviceStringContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     USBD_UrbFree @ 0x1C008876C (USBD_UrbFree.c)
 */

void __fastcall FxUsbDeviceStringContext::~FxUsbDeviceStringContext(FxUsbDeviceStringContext *this)
{
  FX_POOL_TRACKER *m_StringDescriptor; // rcx
  _URB *m_Urb; // rdx

  this->__vftable = (FxUsbDeviceStringContext_vtbl *)FxUsbDeviceStringContext::`vftable';
  m_StringDescriptor = (FX_POOL_TRACKER *)this->m_StringDescriptor;
  if ( m_StringDescriptor )
  {
    FxPoolFree(m_StringDescriptor);
    this->m_StringDescriptor = 0LL;
  }
  m_Urb = (_URB *)this->m_Urb;
  if ( m_Urb && m_Urb != (_URB *)&this->m_UrbLegacy )
    USBD_UrbFree(this->m_USBDHandle, m_Urb);
  this->m_Urb = 0LL;
  this->m_USBDHandle = 0LL;
  this->__vftable = (FxUsbDeviceStringContext_vtbl *)FxRequestContext::`vftable';
}
