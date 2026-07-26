/*
 * XREFs of ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x1C011A1D4
 * Callers:
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C011A02C (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ??$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA?AV?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@K_K@Z @ 0x1C011A500 (--$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA-AV-$unique_ptr@VRegistryKnobCollection@@U-$KFr.c)
 *     ??$MakeSizedPoolPtr@VExecutionContextKnobCollection@@@@YA?AV?$unique_ptr@VExecutionContextKnobCollection@@U?$KFreePool@VExecutionContextKnobCollection@@@@@wistd@@K_K@Z @ 0x1C011A578 (--$MakeSizedPoolPtr@VExecutionContextKnobCollection@@@@YA-AV-$unique_ptr@VExecutionContextKnobCo.c)
 *     ??$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA?AV?$unique_ptr@VNetSetupKnobCollection@@U?$KFreePool@VNetSetupKnobCollection@@@@@wistd@@K_K@Z @ 0x1C0140164 (--$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA-AV-$unique_ptr@VNetSetupKnobCollection@@U-$KFr.c)
 */

struct KnobCollection *__fastcall KnobCollection::Create(
        struct KnobNamespace *a1,
        const struct KnobDescriptor *a2,
        __int64 a3,
        unsigned __int8 (*a4)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a5)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  __int64 v5; // rdi
  _CONFIG_KNOB_NAMESPACE_TYPE NamespaceType; // r9d
  __int64 v9; // r8
  _QWORD **SizedPool; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rsi
  PVOID v13; // rcx
  int (*v14)(void *, const struct KnobDescriptor *, unsigned __int64); // rax
  unsigned __int64 *v15; // rcx
  unsigned __int64 *p_DefaultValue; // rdx
  unsigned __int64 v17; // rax
  __int32 v19; // r9d
  _QWORD **v20; // rax
  PVOID v21; // rcx
  PVOID P; // [rsp+60h] [rbp+30h] BYREF
  void *v23; // [rsp+78h] [rbp+48h] BYREF

  v23 = 0LL;
  v5 = a3;
  NamespaceType = a1->m_id.NamespaceType;
  v9 = 24 * (a3 + 3);
  if ( NamespaceType == ConfigKnobNamespaceNdisGlobal )
  {
    SizedPool = (_QWORD **)MakeSizedPoolPtr<RegistryKnobCollection>(&P, a2, v9);
    goto LABEL_3;
  }
  v19 = NamespaceType - 1;
  if ( !v19 )
  {
    SizedPool = (_QWORD **)MakeSizedPoolPtr<NetSetupKnobCollection>(&P, a2, v9);
LABEL_3:
    v11 = *SizedPool;
    *SizedPool = 0LL;
    v12 = v11;
    v13 = P;
    P = 0LL;
    v23 = v11;
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    goto LABEL_5;
  }
  if ( v19 != 1 )
  {
    __int2c();
    goto LABEL_17;
  }
  v20 = (_QWORD **)MakeSizedPoolPtr<ExecutionContextKnobCollection>(&P, a2, v9);
  v11 = *v20;
  *v20 = 0LL;
  v21 = P;
  P = 0LL;
  v23 = v11;
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  v12 = v11;
LABEL_5:
  if ( v12 )
  {
    v14 = a5;
    v11[8] = a2;
    v11[7] = v5;
    v11[3] = a1;
    v11[4] = 0LL;
    v11[5] = v14;
    v11[6] = 0LL;
    if ( v5 )
    {
      v15 = v11 + 9;
      p_DefaultValue = &a2->DefaultValue;
      do
      {
        *((_DWORD *)v15 + 2) = 0;
        v17 = *p_DefaultValue;
        p_DefaultValue += 6;
        *v15 = v17;
        *((_DWORD *)v15 + 3) = 1;
        v15 += 3;
        --v5;
      }
      while ( v5 );
    }
    return (struct KnobCollection *)v11;
  }
LABEL_17:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_069cc08c20e532709d80f678bd350850_Traceguids);
  wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&v23);
  return 0LL;
}
