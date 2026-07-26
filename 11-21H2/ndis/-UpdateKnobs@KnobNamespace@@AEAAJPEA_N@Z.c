/*
 * XREFs of ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x1C01342D0
 * Callers:
 *     ?Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z @ 0x1C0133CF4 (-Ioctl@KnobNamespace@@SAJ_NKKKPEAXPEAK@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x1C0113E50 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x1C0113FBC (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 */

__int64 __fastcall KnobNamespace::UpdateKnobs(KnobNamespace *this, bool *a2)
{
  _LIST_ENTRY *p_m_collectionList; // rdi
  _LIST_ENTRY *Flink; // rbx
  unsigned int v4; // esi
  _LIST_ENTRY *i; // rbx
  __int128 v7; // [rsp+20h] [rbp-30h] BYREF
  char v8; // [rsp+30h] [rbp-20h]
  KLockHolder v9; // [rsp+38h] [rbp-18h] BYREF

  v9.m_State = Unlocked;
  p_m_collectionList = &this->m_collectionList;
  v9.m_Lock = &this->m_lock;
  *a2 = 0;
  v8 = 0;
  v7 = 0LL;
  v9.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v9);
  Flink = p_m_collectionList->Flink;
  if ( p_m_collectionList->Flink != p_m_collectionList )
  {
    do
    {
      if ( !v8 )
      {
        v4 = ((__int64 (__fastcall *)(_LIST_ENTRY **, __int64, __int128 *))Flink[-1].Blink->Flink)(
               &Flink[-1].Blink,
               1LL,
               &v7);
        if ( v4 )
          goto LABEL_11;
        if ( !v8 )
          NT_ASSERT("transaction.IsOpened");
      }
      KnobCollection::PrepareUpdatedKnobValues((KnobCollection *)&Flink[-1].Blink, (struct KnobTransaction *)&v7);
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_collectionList );
    for ( i = p_m_collectionList->Flink; i != p_m_collectionList; i = i->Flink )
      KnobCollection::CommitUpdatedKnobValues((KnobCollection *)&i[-1].Blink, 0);
  }
  v4 = 0;
LABEL_11:
  KLockHolder::~KLockHolder(&v9);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v7 + 1);
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v7);
  return v4;
}
