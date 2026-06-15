/*
 * XREFs of ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180048D14
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004816C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x180048708 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180048F04 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x180048F9C (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ??$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA?AV?$shared_ptr@VSystemEffectChainDescriptor@@@0@XZ @ 0x180049164 (--$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA-AV-$shared_ptr@VSystemEffectChainDescri.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::CreateEffectChain(
        __int64 a1,
        unsigned int a2,
        const struct _GUID *a3,
        unsigned int a4,
        struct _GUID *a5,
        SystemEffectChainDescriptor **a6)
{
  __int64 v9; // rax
  SystemEffectChainDescriptor *v10; // r14
  volatile signed __int32 *v11; // rbx
  unsigned int v12; // esi
  unsigned int i; // edi
  int v14; // eax
  unsigned int v15; // edi
  std::_Ref_count_base *v16; // rcx
  int v18; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-40h] BYREF
  std::_Ref_count_base *v21; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v9 = std::make_shared<SystemEffectChainDescriptor,>(&v20);
  v10 = *(SystemEffectChainDescriptor **)v9;
  v11 = *(volatile signed __int32 **)(v9 + 8);
  *(_QWORD *)v9 = 0LL;
  *(_QWORD *)(v9 + 8) = 0LL;
  if ( v21 )
    std::_Ref_count_base::_Decref(v21);
  v12 = *(_DWORD *)(a1 + 8);
  for ( i = 0; i < v12; ++i )
  {
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v10) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        v18);
      if ( v11 )
        JUMPOUT(0x18008822ALL);
      JUMPOUT(0x18008822FLL);
    }
  }
  v14 = SystemEffectChainDescriptor::ReplaceEffectChain(v10, a2, a3, a4, a5);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v14,
      v19);
    if ( v11 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
    return v15;
  }
  else
  {
    if ( v11 )
      _InterlockedIncrement(v11 + 2);
    *a6 = v10;
    v16 = a6[1];
    a6[1] = (SystemEffectChainDescriptor *)v11;
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    if ( v11 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
    return 0LL;
  }
}
