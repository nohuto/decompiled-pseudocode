/*
 * XREFs of ?EnumerateKnobs@KnobNamespace@@AEAAXP6AXPEAXPEB_W@Z0@Z @ 0x1C013F82C
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C013F9A8 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B50 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BAC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     AddKnobNameToBuffer @ 0x1C013F5C4 (AddKnobNameToBuffer.c)
 */

void __fastcall KnobNamespace::EnumerateKnobs(KnobNamespace *this, void (*a2)(void *, const wchar_t *), __int64 a3)
{
  _LIST_ENTRY *p_m_collectionList; // rdi
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY *v6; // rsi
  __int64 v7; // rbp
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  v8.m_State = Unlocked;
  p_m_collectionList = &this->m_collectionList;
  v8.m_Lock = &this->m_lock;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v8);
  for ( i = p_m_collectionList->Flink; i != p_m_collectionList; i = i->Flink )
  {
    v6 = 0LL;
    if ( i[3].Flink )
    {
      v7 = 0LL;
      do
      {
        AddKnobNameToBuffer(a3, i[3].Blink[v7].Flink);
        v6 = (_LIST_ENTRY *)((char *)v6 + 1);
        v7 += 3LL;
      }
      while ( v6 < i[3].Flink );
    }
  }
  KLockHolder::~KLockHolder(&v8);
}
