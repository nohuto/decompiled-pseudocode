/*
 * XREFs of ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800308F0
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180030408 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x180030C74 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x180030AC0 (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18004B0A0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::CreateEffectChain(
        __int64 a1,
        unsigned int a2,
        const struct _GUID *a3,
        unsigned int a4,
        struct _GUID *a5,
        __int64 **a6)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rdi
  __int64 *v10; // rbx
  _OWORD *v11; // r12
  unsigned int v12; // ecx
  unsigned int i; // r13d
  int v14; // r15d
  unsigned int v15; // r15d
  __int64 v16; // rax
  _OWORD *v17; // rax
  int v18; // eax
  unsigned int v19; // r15d
  std::_Ref_count_base *v20; // rcx
  bool v22; // sf
  int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+20h] [rbp-48h]
  unsigned int v25; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x58uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<SystemEffectChainDescriptor>::`vftable';
    memset_0(v8 + 4, 0, 0x48uLL);
    v9[6] = 0;
    v9[7] = 0;
    v9[8] = 0;
    *((_BYTE *)v9 + 36) = 0;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    v9[16] = 0;
    v9[17] = 0;
    *((_QWORD *)v9 + 9) = 0LL;
    v9[20] = 0;
    v9[21] = 0;
  }
  else
  {
    v9 = 0LL;
  }
  v10 = (__int64 *)(v9 + 4);
  v11 = *(_OWORD **)a1;
  v12 = *(_DWORD *)(a1 + 8);
  v25 = v12;
  for ( i = 0; i < v12; ++v11 )
  {
    v14 = v9[6];
    if ( v14 == v9[7] )
    {
      if ( v9[7] )
      {
        v22 = (v14 & 0x40000000) != 0;
        v15 = 2 * v14;
        if ( v22 )
          goto LABEL_25;
      }
      else
      {
        v15 = 1;
      }
      if ( v15 > 0x7FFFFFFuLL || (v16 = _o__recalloc(*v10, v15, 16LL)) == 0 )
      {
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL,
          v23);
        if ( v9 )
          JUMPOUT(0x180097A76LL);
        JUMPOUT(0x180097A7BLL);
      }
      v9[7] = v15;
      *v10 = v16;
      v12 = v25;
    }
    v17 = (_OWORD *)(*v10 + 16LL * (int)v9[6]);
    if ( v17 )
      *v17 = *v11;
    ++v9[6];
    ++i;
  }
  v18 = SystemEffectChainDescriptor::ReplaceEffectChain((SystemEffectChainDescriptor *)(v9 + 4), a2, a3, a4, a5);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v18,
      v24);
    if ( v9 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v9);
    return v19;
  }
  else
  {
    if ( v9 )
      _InterlockedIncrement(v9 + 2);
    *a6 = v10;
    v20 = (std::_Ref_count_base *)a6[1];
    a6[1] = (__int64 *)v9;
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(_DWORD *))v9)(v9);
        std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v9);
      }
    }
    return 0LL;
  }
}
