/*
 * XREFs of ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C011A06C
 * Callers:
 *     ?AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0118E34 (-AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x1C012085C (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0120F4C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 * Callees:
 *     ?SetCurrentValue@KnobDescriptor@@QEBAX_K@Z @ 0x1C002B8A8 (-SetCurrentValue@KnobDescriptor@@QEBAX_K@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C00331FC (WPP_RECORDER_SF_d_ea_1C00331FC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_Si @ 0x1C0060A70 (WPP_RECORDER_SF_Si.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$default_delete@VKnobCollection@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00BC084 (--1-$unique_ptr@VKnobCollection@@U-$default_delete@VKnobCollection@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C0117B90 (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C0117BEC (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x1C011A214 (-Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312.c)
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x1C011A3F0 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x1C011A498 (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 */

__int64 __fastcall KnobNamespace::BuildCollection(
        KnobNamespace *this,
        struct KnobDescriptor *a2,
        unsigned __int64 a3,
        unsigned __int8 (*a4)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        unsigned __int8 (*a5)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a6)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  char v7; // r12
  struct KnobDescriptor *v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  struct KnobCollection *v13; // rax
  KnobCollection *v14; // rbx
  int v15; // eax
  int v16; // edi
  _LIST_ENTRY *v17; // rbx
  _LIST_ENTRY *Blink; // rdx
  void *v20; // [rsp+28h] [rbp-48h]
  char v21[8]; // [rsp+28h] [rbp-48h]
  HANDLE Handle[2]; // [rsp+40h] [rbp-30h] BYREF
  char v23; // [rsp+50h] [rbp-20h]
  KLockHolder v24; // [rsp+58h] [rbp-18h] BYREF
  struct KnobCollection *v25; // [rsp+C0h] [rbp+50h] BYREF
  char v26; // [rsp+C8h] [rbp+58h]

  v26 = (char)a4;
  v7 = (char)a4;
  if ( a3 )
  {
    v10 = a2;
    v11 = a3;
    do
    {
      KnobDescriptor::SetCurrentValue(v10, v10->DefaultValue);
      if ( *(_QWORD *)&WPP_RECORDER_INITIALIZED != v12 && *((_WORD *)WPP_GLOBAL_Control + 36) )
        WPP_RECORDER_SF_Si(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          1u,
          0xAu,
          (struct _GUID *)&WPP_9c5dbb675d153c4950aa5c00a0b3ed9a_Traceguids,
          v10->Name);
      ++v10;
      --v11;
    }
    while ( v11 );
    v7 = v26;
  }
  v13 = KnobCollection::Create(this, a2, a3, a4, a6, v20);
  v25 = v13;
  v14 = v13;
  if ( v13 )
  {
    v23 = 0;
    *(_OWORD *)Handle = 0LL;
    v15 = (**(__int64 (__fastcall ***)(struct KnobCollection *, __int64, HANDLE *))v13)(v13, 1LL, Handle);
    v24.m_State = Unlocked;
    v24.m_Lock = &this->m_lock;
    v16 = v15;
    v24.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v24);
    if ( v16 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v21 = v16;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          1u,
          0xBu,
          (struct _GUID *)&WPP_9c5dbb675d153c4950aa5c00a0b3ed9a_Traceguids,
          *(_QWORD *)v21);
      }
    }
    else
    {
      KnobCollection::PrepareUpdatedKnobValues(v14, (struct KnobTransaction *)Handle);
      KnobCollection::CommitUpdatedKnobValues(v14, 1);
    }
    if ( v7 )
    {
      v17 = (_LIST_ENTRY *)((char *)v14 + 8);
      Blink = this->m_collectionList.Blink;
      if ( Blink->Flink != &this->m_collectionList )
        __fastfail(3u);
      v17->Flink = &this->m_collectionList;
      v17->Blink = Blink;
      Blink->Flink = v17;
      this->m_collectionList.Blink = v17;
      v14 = 0LL;
    }
    KLockHolder::~KLockHolder(&v24);
    if ( Handle[1] )
      ZwClose(Handle[1]);
    if ( Handle[0] )
      ZwClose(Handle[0]);
    if ( v14 )
      ExFreePoolWithTag(v14, 0x43626E4Bu);
    return 0LL;
  }
  else
  {
    wistd::unique_ptr<KnobCollection,wistd::default_delete<KnobCollection>>::~unique_ptr<KnobCollection,wistd::default_delete<KnobCollection>>((void **)&v25);
    return 3221225626LL;
  }
}
