/*
 * XREFs of ?AddInternalVoiceProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x180046980
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180046864 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000ED54 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800101C0 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800103F0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18001058C (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x1800480D4 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180048F04 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x180144C78 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18014BF28 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddInternalVoiceProcessingMode(
        __int64 a1,
        __int64 a2,
        struct _GUID *a3,
        int a4)
{
  __int64 v7; // rcx
  _DWORD *v9; // rax
  unsigned __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  int OverridingChain; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 *v22; // rdi
  SystemEffectDescriptor *v23; // rax
  struct _GUID v24; // xmm0
  SystemEffectDescriptor *v25; // rax
  int v26; // [rsp+20h] [rbp-A8h]
  struct _GUID v27; // [rsp+40h] [rbp-88h] BYREF
  __int64 v28[8]; // [rsp+50h] [rbp-78h] BYREF
  struct _GUID v29; // [rsp+90h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1) != 1 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 64) )
    goto LABEL_24;
  v9 = *(_DWORD **)(a1 + 72);
  v10 = (unsigned __int64 *)(a1 + 152);
  if ( !*v9 )
  {
    *v9 = 1;
    v11 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v10, 0LL);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v11);
    v12 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 152), 0LL);
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v12) )
    {
      v13 = 2070LL;
LABEL_8:
      OverridingChain = -2147024882;
      goto LABEL_9;
    }
    if ( *(_QWORD *)(a1 + 1840) )
    {
      **(_DWORD **)(a1 + 1848) = 1;
      v15 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((unsigned __int64 *)(a1 + 1856), 0LL);
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            v15,
                            v16,
                            &GUID_00000000_0000_0000_0000_000000000000) )
      {
        v13 = 2074LL;
        goto LABEL_8;
      }
      goto LABEL_19;
    }
LABEL_24:
    _o_terminate(v7);
    __debugbreak();
    JUMPOUT(0x180086964LL);
  }
  v17 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v10, 0LL);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       v17,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
  {
    v18 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 152), 0LL);
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                          v18,
                          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
    {
      OverridingChain = -2147418113;
      v13 = 2082LL;
      goto LABEL_9;
    }
    v19 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 152), 0LL);
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(v19) )
    {
      v13 = 2083LL;
      goto LABEL_8;
    }
    v20 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((unsigned __int64 *)(a1 + 1856), 0LL);
    if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                          v20,
                          v21,
                          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
    {
      v13 = 2085LL;
      goto LABEL_8;
    }
  }
LABEL_19:
  v22 = (unsigned __int64 *)(a1 + 1808);
  v29 = GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
  v23 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)(a1 + 1808), 0LL);
  v24 = *a3;
  v28[7] = 0LL;
  v27 = v24;
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(v23, (__int64)&v27, 1LL, (__int64)&v29, 2, 0, v28);
  if ( OverridingChain >= 0 )
  {
    if ( a4 )
      return 0LL;
    v25 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](v22, 0LL);
    v29 = *a3;
    OverridingChain = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v25, &v29);
    if ( OverridingChain >= 0 )
      return 0LL;
    v13 = 2096LL;
  }
  else
  {
    v13 = 2091LL;
  }
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain,
    v26);
  return (unsigned int)OverridingChain;
}
