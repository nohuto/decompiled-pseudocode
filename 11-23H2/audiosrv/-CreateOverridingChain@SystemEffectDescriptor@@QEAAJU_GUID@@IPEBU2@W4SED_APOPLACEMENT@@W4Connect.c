/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003064C
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002BDD0 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18003FCFC (-AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18003FE74 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180040510 (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 *     _lambda_abb61ebb95f9f74c760f57157f67c392_::operator() @ 0x180074E28 (_lambda_abb61ebb95f9f74c760f57157f67c392_--operator().c)
 * Callees:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180030408 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain(
        SystemEffectDescriptor *this,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 *a7)
{
  __int64 v10; // rbx
  __int64 (__fastcall ***v11)(_QWORD, __int64 *); // rcx
  int OverridingChain; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 *v20; // rcx
  int v21; // [rsp+28h] [rbp-41h]
  int v22; // [rsp+28h] [rbp-41h]
  __int64 v23; // [rsp+50h] [rbp-19h] BYREF
  int v24; // [rsp+58h] [rbp-11h]
  int v25; // [rsp+5Ch] [rbp-Dh]
  __int64 v26[7]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v27; // [rsp+98h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+47h]

  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v23, a2) )
  {
    v13 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v21);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v23);
    v10 = (__int64)a7;
    v17 = (__int64 *)a7[7];
    if ( !v17 )
      return v13;
    v18 = *v17;
    LOBYTE(v18) = v17 != a7;
    (*(void (__fastcall **)(__int64 *, __int64))(*v17 + 32))(v17, v18);
LABEL_10:
    *(_QWORD *)(v10 + 56) = 0LL;
    return v13;
  }
  v27 = 0LL;
  v10 = (__int64)a7;
  v11 = (__int64 (__fastcall ***)(_QWORD, __int64 *))a7[7];
  if ( v11 )
    v27 = (**v11)(v11, v26);
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                      this,
                      (struct CAudioSignalProcessingModeArray *)&v23,
                      a3,
                      a4,
                      a5,
                      a6,
                      v26);
  v13 = OverridingChain;
  if ( OverridingChain < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)OverridingChain,
      v22);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v23);
    v20 = (__int64 *)a7[7];
    if ( !v20 )
      return v13;
    LOBYTE(v19) = v20 != a7;
    (*(void (__fastcall **)(__int64 *, __int64))(*v20 + 32))(v20, v19);
    goto LABEL_10;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v23);
  v15 = (__int64 *)a7[7];
  if ( v15 )
  {
    LOBYTE(v14) = v15 != a7;
    (*(void (__fastcall **)(__int64 *, __int64))(*v15 + 32))(v15, v14);
    a7[7] = 0LL;
  }
  return 0LL;
}
