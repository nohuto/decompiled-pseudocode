/*
 * XREFs of ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x180030AC0
 * Callers:
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x18002CDB8 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800308F0 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 * Callees:
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::ReplaceEffectChain(
        SystemEffectChainDescriptor *this,
        unsigned int a2,
        const struct _GUID *a3,
        unsigned int a4,
        const struct _GUID *a5)
{
  void *v7; // rcx
  __int64 *v10; // rdi
  void *v11; // rcx
  unsigned int v12; // r14d
  int v13; // esi
  unsigned int v14; // esi
  __int64 v15; // rax
  struct _GUID *v16; // rax
  int v17; // esi
  unsigned int v18; // esi
  __int64 v19; // rax
  struct _GUID *v20; // rax
  int v21; // ebx
  bool v23; // sf
  __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = (void *)*((_QWORD *)this + 5);
  if ( v7 )
  {
    free(v7);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_DWORD *)this + 12) = 0;
  v10 = (__int64 *)((char *)this + 56);
  *((_DWORD *)this + 13) = 0;
  v11 = (void *)*((_QWORD *)this + 7);
  if ( v11 )
  {
    free(v11);
    *v10 = 0LL;
  }
  *((_DWORD *)this + 16) = 0;
  v12 = 0;
  for ( *((_DWORD *)this + 17) = 0; v12 < a2; ++a3 )
  {
    v13 = *((_DWORD *)this + 12);
    if ( v13 == *((_DWORD *)this + 13) )
    {
      if ( *((_DWORD *)this + 13) )
      {
        v23 = (v13 & 0x40000000) != 0;
        v14 = 2 * v13;
        if ( v23 )
          goto LABEL_29;
      }
      else
      {
        v14 = 1;
      }
      if ( v14 > 0x7FFFFFFuLL || (v15 = _o__recalloc(*((_QWORD *)this + 5), v14, 16LL)) == 0 )
      {
LABEL_29:
        v24 = 68LL;
        goto LABEL_31;
      }
      *((_DWORD *)this + 13) = v14;
      *((_QWORD *)this + 5) = v15;
    }
    v16 = (struct _GUID *)(*((_QWORD *)this + 5) + 16LL * *((int *)this + 12));
    if ( v16 )
      *v16 = *a3;
    ++*((_DWORD *)this + 12);
    v17 = *((_DWORD *)this + 16);
    if ( v17 == *((_DWORD *)this + 17) )
    {
      if ( *((_DWORD *)this + 17) )
      {
        v23 = (v17 & 0x40000000) != 0;
        v18 = 2 * v17;
        if ( v23 )
          goto LABEL_32;
      }
      else
      {
        v18 = 1;
      }
      if ( v18 > 0x7FFFFFFuLL || (v19 = _o__recalloc(*v10, v18, 16LL)) == 0 )
      {
LABEL_32:
        v24 = 70LL;
        goto LABEL_31;
      }
      *((_DWORD *)this + 17) = v18;
      *v10 = v19;
    }
    v20 = (struct _GUID *)(*v10 + 16LL * *((int *)this + 16));
    if ( v20 )
      *v20 = *a3;
    ++*((_DWORD *)this + 16);
    ++v12;
  }
  v21 = 0;
  if ( !a4 )
    return 0LL;
  while ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v10, &a5[v21]) )
  {
    if ( ++v21 >= a4 )
      return 0LL;
  }
  v24 = 75LL;
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v25);
  return 2147942414LL;
}
