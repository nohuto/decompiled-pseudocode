/*
 * XREFs of ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C0113CB4
 * Callers:
 *     ?AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0113BE4 (-AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x1C0114D58 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0115810 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C002398C (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ?SetCurrentValue@KnobDescriptor@@QEBAX_K@Z @ 0x1C00310AC (-SetCurrentValue@KnobDescriptor@@QEBAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_Si @ 0x1C005B820 (WPP_RECORDER_SF_Si.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C010C60C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C010C668 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x1C0113E50 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x1C0113FBC (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x1C0114064 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 */

__int64 __fastcall KnobNamespace::BuildCollection(
        KnobNamespace *this,
        struct KnobDescriptor *a2,
        unsigned __int64 a3,
        unsigned __int8 (*a4)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        unsigned __int8 (*a5)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a6)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  unsigned int v7; // edi
  char v8; // r12
  struct KnobDescriptor *v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // r8
  struct KnobCollection *v14; // rax
  KnobCollection *v15; // rbx
  int v16; // eax
  int v17; // esi
  _LIST_ENTRY *v18; // rbx
  _LIST_ENTRY *Blink; // rdx
  void *v21; // [rsp+28h] [rbp-70h]
  char v22[8]; // [rsp+28h] [rbp-70h]
  __int128 v23; // [rsp+40h] [rbp-58h] BYREF
  char v24; // [rsp+50h] [rbp-48h]
  KLockHolder v25; // [rsp+58h] [rbp-40h] BYREF
  char v26; // [rsp+B8h] [rbp+20h]

  v26 = (char)a4;
  v7 = 0;
  v8 = (char)a4;
  if ( a3 )
  {
    v11 = a2;
    v12 = a3;
    do
    {
      KnobDescriptor::SetCurrentValue(v11, v11->DefaultValue);
      if ( *(_QWORD *)&WPP_RECORDER_INITIALIZED != v13 && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Si(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          1u,
          0xAu,
          (struct _GUID *)&WPP_9c5dbb675d153c4950aa5c00a0b3ed9a_Traceguids,
          v11->Name);
      ++v11;
      --v12;
    }
    while ( v12 );
    v8 = v26;
  }
  v14 = KnobCollection::Create(this, a2, a3, a4, a6, v21);
  v15 = v14;
  if ( v14 )
  {
    v24 = 0;
    v23 = 0LL;
    v16 = (**(__int64 (__fastcall ***)(struct KnobCollection *, __int64, __int128 *))v14)(v14, 1LL, &v23);
    v25.m_State = Unlocked;
    v25.m_Lock = &this->m_lock;
    v17 = v16;
    v25.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v25);
    if ( v17 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v22 = v17;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xBu,
          (struct _GUID *)&WPP_9c5dbb675d153c4950aa5c00a0b3ed9a_Traceguids,
          *(_QWORD *)v22);
      }
    }
    else
    {
      KnobCollection::PrepareUpdatedKnobValues(v15, (struct KnobTransaction *)&v23);
      KnobCollection::CommitUpdatedKnobValues(v15, 1);
    }
    if ( v8 )
    {
      v18 = (_LIST_ENTRY *)((char *)v15 + 8);
      Blink = this->m_collectionList.Blink;
      if ( Blink->Flink != &this->m_collectionList )
        __fastfail(3u);
      v18->Flink = &this->m_collectionList;
      v18->Blink = Blink;
      Blink->Flink = v18;
      this->m_collectionList.Blink = v18;
      v15 = 0LL;
    }
    KLockHolder::~KLockHolder(&v25);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v23 + 1);
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)&v23);
    if ( v15 )
      ExFreePoolWithTag(v15, 0x43626E4Bu);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
