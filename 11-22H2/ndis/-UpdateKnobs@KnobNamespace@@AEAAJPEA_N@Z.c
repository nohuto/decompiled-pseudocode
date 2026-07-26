/*
 * XREFs of ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x1C013FFA4
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C013F9C8 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ??1KnobTransaction@@QEAA@XZ @ 0x1C00BC0B4 (--1KnobTransaction@@QEAA@XZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x1C011A3F0 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x1C011A498 (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 */

__int64 __fastcall KnobNamespace::UpdateKnobs(KnobNamespace *this, bool *a2)
{
  _LIST_ENTRY *p_m_collectionList; // rdi
  _LIST_ENTRY *i; // rbx
  unsigned int v4; // r14d
  _LIST_ENTRY *j; // rbx
  HANDLE Handle[2]; // [rsp+20h] [rbp-30h] BYREF
  char v8; // [rsp+30h] [rbp-20h]
  KLockHolder v9; // [rsp+38h] [rbp-18h] BYREF

  v9.m_State = Unlocked;
  p_m_collectionList = &this->m_collectionList;
  v9.m_Lock = &this->m_lock;
  *a2 = 0;
  v8 = 0;
  *(_OWORD *)Handle = 0LL;
  v9.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v9);
  for ( i = p_m_collectionList->Flink; i != p_m_collectionList; i = i->Flink )
  {
    if ( !v8 )
    {
      v4 = ((__int64 (__fastcall *)(_LIST_ENTRY **, __int64, HANDLE *))i[-1].Blink->Flink)(&i[-1].Blink, 1LL, Handle);
      if ( v4 )
      {
        KLockHolder::~KLockHolder(&v9);
        KnobTransaction::~KnobTransaction((KnobTransaction *)Handle);
        return v4;
      }
      if ( !v8 )
        NT_ASSERT("transaction.IsOpened");
    }
    KnobCollection::PrepareUpdatedKnobValues((KnobCollection *)&i[-1].Blink, (struct KnobTransaction *)Handle);
  }
  for ( j = p_m_collectionList->Flink; j != p_m_collectionList; j = j->Flink )
    KnobCollection::CommitUpdatedKnobValues((KnobCollection *)&j[-1].Blink, 0);
  KLockHolder::~KLockHolder(&v9);
  if ( Handle[1] )
    ZwClose(Handle[1]);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return 0LL;
}
