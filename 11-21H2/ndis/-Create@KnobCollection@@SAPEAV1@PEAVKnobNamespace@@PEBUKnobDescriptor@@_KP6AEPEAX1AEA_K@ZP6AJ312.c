/*
 * XREFs of ?Create@KnobCollection@@SAPEAV1@PEAVKnobNamespace@@PEBUKnobDescriptor@@_KP6AEPEAX1AEA_K@ZP6AJ312@Z3@Z @ 0x1C0114064
 * Callers:
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1C0113CB4 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ??$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA?AV?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@K_K@Z @ 0x1C0114158 (--$MakeSizedPoolPtr@VRegistryKnobCollection@@@@YA-AV-$unique_ptr@VRegistryKnobCollection@@U-$KFr.c)
 *     ??$MakeSizedPoolPtr@VExecutionContextKnobCollection@@@@YA?AV?$unique_ptr@VExecutionContextKnobCollection@@U?$KFreePool@VExecutionContextKnobCollection@@@@@wistd@@K_K@Z @ 0x1C01141D0 (--$MakeSizedPoolPtr@VExecutionContextKnobCollection@@@@YA-AV-$unique_ptr@VExecutionContextKnobCo.c)
 *     ??$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA?AV?$unique_ptr@VNetSetupKnobCollection@@U?$KFreePool@VNetSetupKnobCollection@@@@@wistd@@K_K@Z @ 0x1C013446C (--$MakeSizedPoolPtr@VNetSetupKnobCollection@@@@YA-AV-$unique_ptr@VNetSetupKnobCollection@@U-$KFr.c)
 */

struct KnobCollection *__fastcall KnobCollection::Create(
        struct KnobNamespace *a1,
        const struct KnobDescriptor *a2,
        __int64 a3,
        unsigned __int8 (*a4)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a5)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  _CONFIG_KNOB_NAMESPACE_TYPE NamespaceType; // r9d
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v10; // r8
  _QWORD *SizedPool; // rax
  _QWORD *v12; // rbx
  PVOID v13; // rcx
  int (*v14)(void *, const struct KnobDescriptor *, unsigned __int64); // rax
  unsigned __int64 *v15; // rcx
  unsigned __int64 *p_DefaultValue; // rdx
  unsigned __int64 v17; // rax
  __int32 v19; // r9d
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  P = a4;
  NamespaceType = a1->m_id.NamespaceType;
  v6 = a3;
  v7 = 0LL;
  v10 = 24 * (a3 + 3);
  if ( NamespaceType )
  {
    v19 = NamespaceType - 1;
    if ( v19 )
    {
      if ( v19 != 1 )
      {
        __int2c();
        goto LABEL_16;
      }
      SizedPool = (_QWORD *)MakeSizedPoolPtr<ExecutionContextKnobCollection>(&P, a2, v10);
    }
    else
    {
      SizedPool = (_QWORD *)MakeSizedPoolPtr<NetSetupKnobCollection>(&P, a2, v10);
    }
  }
  else
  {
    SizedPool = (_QWORD *)MakeSizedPoolPtr<RegistryKnobCollection>(&P, a2, v10);
  }
  v12 = (_QWORD *)*SizedPool;
  *SizedPool = 0LL;
  v13 = P;
  P = 0LL;
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  if ( v12 )
  {
    v14 = a5;
    v12[8] = a2;
    v12[7] = v6;
    v12[3] = a1;
    v12[4] = 0LL;
    v12[5] = v14;
    v12[6] = 0LL;
    if ( v6 )
    {
      v15 = v12 + 9;
      p_DefaultValue = &a2->DefaultValue;
      do
      {
        *((_DWORD *)v15 + 2) = 0;
        v17 = *p_DefaultValue;
        p_DefaultValue += 6;
        *v15 = v17;
        *((_DWORD *)v15 + 3) = 1;
        v15 += 3;
        --v6;
      }
      while ( v6 );
    }
    return (struct KnobCollection *)v12;
  }
LABEL_16:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      1u,
      0xAu,
      (struct _GUID *)&WPP_069cc08c20e532709d80f678bd350850_Traceguids);
  return (struct KnobCollection *)v7;
}
