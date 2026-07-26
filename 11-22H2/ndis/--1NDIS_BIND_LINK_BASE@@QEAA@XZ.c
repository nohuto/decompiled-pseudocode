/*
 * XREFs of ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C013A488
 * Callers:
 *     ??_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z @ 0x1C012D760 (--_GNDIS_BIND_FILTER_LINK@@QEAAPEAXI@Z.c)
 *     ??_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z @ 0x1C012D7D0 (--_GNDIS_BIND_PROTOCOL_LINK@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(NDIS_BIND_LINK_BASE *this)
{
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  void **p; // rcx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  v5.m_State = Unlocked;
  v5.m_Region.m_Entered = 0;
  v5.m_Lock = (KPushLockBase *)(qword_1C00F5728 + 8);
  KLockHolder::AcquireExclusive(&v5);
  Flink = this->DriverLinkage.Flink;
  if ( Flink->Blink != &this->DriverLinkage || (Blink = this->DriverLinkage.Blink, Blink->Flink != &this->DriverLinkage) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  KLockHolder::~KLockHolder(&v5);
  p = this->BindState.m_bindContext._p;
  if ( p )
  {
    ExFreePoolWithTag(p, 0x7272414Bu);
    this->BindState.m_bindContext._p = 0LL;
    this->BindState.m_bindContext.m_numElements = 0;
    this->BindState.m_bindContext.m_bufferSize = 0;
  }
}
