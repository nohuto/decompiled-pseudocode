/*
 * XREFs of ??1_NDIS_FILTER_BLOCK@@QEAA@XZ @ 0x1C0015614
 * Callers:
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C00151F4 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 * Callees:
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0116B00 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall _NDIS_FILTER_BLOCK::~_NDIS_FILTER_BLOCK(_NDIS_FILTER_BLOCK *this)
{
  NDISWATCHDOG__ *m_ptr; // rcx
  Rtl::KString *value; // rcx

  m_ptr = this->PendingOidWatchdog.m_ptr;
  if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(m_ptr);
  value = this->FilterInstanceName.__ptr_.__value_;
  this->FilterInstanceName.__ptr_.__value_ = 0LL;
  if ( value )
    ExFreePoolWithTag(value, 0x7274534Bu);
}
