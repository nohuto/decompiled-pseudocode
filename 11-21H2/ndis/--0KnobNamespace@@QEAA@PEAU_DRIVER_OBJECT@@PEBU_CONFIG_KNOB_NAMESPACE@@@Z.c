/*
 * XREFs of ??0KnobNamespace@@QEAA@PEAU_DRIVER_OBJECT@@PEBU_CONFIG_KNOB_NAMESPACE@@@Z @ 0x1C011554C
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     DriverEntry @ 0x1C0153778 (DriverEntry.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

KnobNamespace *__fastcall KnobNamespace::KnobNamespace(
        KnobNamespace *this,
        struct _DRIVER_OBJECT *a2,
        const struct _CONFIG_KNOB_NAMESPACE *a3)
{
  __int128 v3; // xmm0
  int v4; // eax
  _LIST_ENTRY *p_m_globalLinkage; // rbx
  _LIST_ENTRY *v7; // rax
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_OWORD *)&a3->NamespaceType;
  v4 = *(_DWORD *)&a3->ObjectId.Data4[4];
  p_m_globalLinkage = &this->m_globalLinkage;
  this->m_driverObject = a2;
  *(_OWORD *)&this->m_id.NamespaceType = v3;
  *(_DWORD *)&this->m_id.ObjectId.Data4[4] = v4;
  this->m_globalLinkage = 0LL;
  this->m_collectionList.Blink = 0LL;
  this->m_collectionList.Blink = &this->m_collectionList;
  this->m_collectionList.Flink = &this->m_collectionList;
  this->m_lock.m_Lock.Value = 0LL;
  v9.m_State = Unlocked;
  v9.m_Region.m_Entered = 0;
  v9.m_Lock = (KPushLockBase *)&unk_1C00ECDE0;
  KLockHolder::AcquireExclusive(&v9);
  v7 = (_LIST_ENTRY *)qword_1C00ECDF0;
  if ( *(__int64 **)qword_1C00ECDF0 != &qword_1C00ECDE8 )
    __fastfail(3u);
  p_m_globalLinkage->Flink = (_LIST_ENTRY *)&qword_1C00ECDE8;
  p_m_globalLinkage->Blink = v7;
  v7->Flink = p_m_globalLinkage;
  qword_1C00ECDF0 = (__int64)p_m_globalLinkage;
  KLockHolder::~KLockHolder(&v9);
  return this;
}
