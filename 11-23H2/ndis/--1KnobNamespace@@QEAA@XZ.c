/*
 * XREFs of ??1KnobNamespace@@QEAA@XZ @ 0x1C013F4E4
 * Callers:
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0069A7C (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall KnobNamespace::~KnobNamespace(KnobNamespace *this)
{
  _LIST_ENTRY *p_m_collectionList; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v4; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v6; // rdx
  _LIST_ENTRY *v7; // rax
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  v8.m_State = Unlocked;
  v8.m_Lock = &this->m_lock;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v8);
  p_m_collectionList = &this->m_collectionList;
  while ( 1 )
  {
    Flink = p_m_collectionList->Flink;
    if ( p_m_collectionList->Flink == p_m_collectionList )
      break;
    v4 = Flink->Flink;
    Blink = Flink->Blink;
    if ( Flink->Flink->Blink != Flink || Blink->Flink != Flink )
      goto LABEL_10;
    Blink->Flink = v4;
    v4->Blink = Blink;
    if ( Flink != (_LIST_ENTRY *)8 )
      ExFreePoolWithTag(&Flink[-1].Blink, 0x43626E4Bu);
  }
  KLockHolder::~KLockHolder(&v8);
  v8.m_State = Unlocked;
  v8.m_Lock = (KPushLockBase *)&unk_1C00F5DC8;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v8);
  v6 = this->m_globalLinkage.Flink;
  if ( v6->Blink != &this->m_globalLinkage || (v7 = this->m_globalLinkage.Blink, v7->Flink != &this->m_globalLinkage) )
LABEL_10:
    __fastfail(3u);
  v7->Flink = v6;
  v6->Blink = v7;
  KLockHolder::~KLockHolder(&v8);
}
