/*
 * XREFs of ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18003FCFC
 * Callers:
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x18003FBCC (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000E62C (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003064C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800312FC (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x1800406B0 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x18005494C (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18014EABC (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 */

__int64 __fastcall EffectPack::AddInternalVoiceProcessingMode(__int64 a1, __int64 a2, struct _GUID *a3, int a4)
{
  __int64 v7; // rcx
  unsigned __int64 *v9; // rcx
  __int64 *v10; // rax
  unsigned __int64 *v11; // rdi
  SystemEffectDescriptor *v12; // rax
  struct _GUID v13; // xmm0
  int OverridingChain; // ebx
  SystemEffectDescriptor *v15; // rax
  __int64 *v16; // rax
  int v17; // ebp
  __int64 *v18; // rax
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  struct _GUID v29; // [rsp+40h] [rbp-98h] BYREF
  __int64 v30[8]; // [rsp+50h] [rbp-88h] BYREF
  struct _GUID v31; // [rsp+90h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1288) + 56LL))(*(_QWORD *)(a1 + 1288)) != 1 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 1312) )
    goto LABEL_29;
  v9 = (unsigned __int64 *)(a1 + 1392);
  if ( !**(_DWORD **)(a1 + 1320) )
  {
    v16 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v9, 0LL);
    v17 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
            v16,
            &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf);
    v18 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 1392), 0LL);
    v19 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
            v18,
            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    if ( *(_QWORD *)(a1 + 1312) )
    {
      **(_DWORD **)(a1 + 1320) = 1;
      v20 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 1392), 0LL);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v20);
      v21 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 1392), 0LL);
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                            v21,
                            &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
      {
        v22 = 2760LL;
        goto LABEL_13;
      }
      if ( *(_QWORD *)(a1 + 1424) )
      {
        **(_DWORD **)(a1 + 1432) = 1;
        if ( v17 != -1 )
          goto LABEL_6;
        v24 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((unsigned __int64 *)(a1 + 1536), 0LL);
        if ( v19 == -1 )
        {
          if ( (unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                               v24,
                               v23,
                               &GUID_00000000_0000_0000_0000_000000000000) )
            goto LABEL_6;
          v22 = 2775LL;
        }
        else
        {
          if ( (unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                               v24,
                               v23,
                               &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
            goto LABEL_6;
          v22 = 2771LL;
        }
LABEL_13:
        OverridingChain = -2147024882;
        goto LABEL_14;
      }
    }
LABEL_29:
    _o_terminate(v7);
    __debugbreak();
    JUMPOUT(0x1800B17F2LL);
  }
  v10 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v9, 0LL);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       v10,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
    goto LABEL_6;
  v25 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 1392), 0LL);
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                        v25,
                        &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
  {
    OverridingChain = -2147418113;
    v22 = 2784LL;
    goto LABEL_14;
  }
  v26 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)(a1 + 1392), 0LL);
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        v26,
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v22 = 2785LL;
    goto LABEL_13;
  }
  v27 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[]((unsigned __int64 *)(a1 + 1536), 0LL);
  if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                        v27,
                        v28,
                        &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
  {
    v22 = 2787LL;
    goto LABEL_13;
  }
LABEL_6:
  v11 = (unsigned __int64 *)(a1 + 1168);
  v31 = GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f;
  v12 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)(a1 + 1168), 0LL);
  v13 = *a3;
  v30[7] = 0LL;
  v29 = v13;
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(v12, (__int64)&v29, 1u, (__int64)&v31, 2u, 0, v30);
  if ( OverridingChain < 0 )
  {
    v22 = 2793LL;
  }
  else
  {
    if ( a4 )
      return 0LL;
    v15 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](v11, 0LL);
    v31 = *a3;
    OverridingChain = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v15, &v31);
    if ( OverridingChain >= 0 )
      return 0LL;
    v22 = 2798LL;
  }
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)OverridingChain);
  return (unsigned int)OverridingChain;
}
