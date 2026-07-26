/*
 * XREFs of ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0069A5C
 * Callers:
 *     ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006B0FC (-ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0116B40 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ??1BindStack@Ndis@@QEAA@XZ @ 0x1C0121678 (--1BindStack@Ndis@@QEAA@XZ.c)
 *     ??1BindEngine@Ndis@@QEAA@XZ @ 0x1C013A24C (--1BindEngine@Ndis@@QEAA@XZ.c)
 *     ??1KnobNamespace@@QEAA@XZ @ 0x1C013F504 (--1KnobNamespace@@QEAA@XZ.c)
 */

void __fastcall _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK(_NDIS_MINIPORT_BLOCK *this)
{
  KnobDescriptor *p; // rcx
  NDISWATCHDOG__ *m_ptr; // rcx
  NDISWATCHDOG__ *v4; // rcx
  NDISWATCHDOG__ *v5; // rcx
  Rtl::KString *value; // rcx
  Rtl::KString *v7; // rcx

  p = this->PollModeConfigKnobDescriptors._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->PollModeConfigKnobDescriptors._p = 0LL;
    this->PollModeConfigKnobDescriptors.m_numElements = 0;
    this->PollModeConfigKnobDescriptors.m_bufferSize = 0;
  }
  KnobNamespace::~KnobNamespace(&this->PollModeConfigKnobsNamespace);
  m_ptr = this->ReenumerateWatchdog.m_ptr;
  if ( m_ptr != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(m_ptr);
  v4 = this->HookedOidWatchdog.m_ptr;
  if ( v4 != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v4);
  v5 = this->PendingOidWatchdog.m_ptr;
  if ( v5 != (NDISWATCHDOG__ *)-1LL )
    ndisFreeWatchdog(v5);
  Ndis::BindEngine::~BindEngine(&this->BindEngine);
  Ndis::BindStack::~BindStack(&this->Bindings);
  value = this->FilterClass.__ptr_.__value_;
  this->FilterClass.__ptr_.__value_ = 0LL;
  if ( value )
    ExFreePoolWithTag(value, 0x7274534Bu);
  v7 = this->ExportName.__ptr_.__value_;
  this->ExportName.__ptr_.__value_ = 0LL;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x7274534Bu);
}
