/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180030408
 * Callers:
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18002BDD0 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003064C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180030CE0 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 * Callees:
 *     ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180009318 (-MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV-$function@$$A6AJPEAVSystemEffectDescriptor.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180009464 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18003078C (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArray@@@Z @ 0x18003083C (-RemoveModesFromOverridingChains@SystemEffectDescriptor@@AEAAXAEAVCAudioSignalProcessingModeArra.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x1800308F0 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x180031324 (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180031414 (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 *a7)
{
  __int64 v11; // rbx
  struct _GUID *v12; // rcx
  int v13; // r9d
  int v14; // edi
  __int64 v15; // rdx
  __int64 *v16; // rcx
  int EffectChain; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 *v26; // rcx
  __int64 v27; // rdx
  __int64 *v28; // rcx
  __int64 v29; // rdx
  int v30; // [rsp+28h] [rbp-81h]
  int v31; // [rsp+28h] [rbp-81h]
  std::_Ref_count_base *v32[2]; // [rsp+38h] [rbp-71h] BYREF
  int v33[2]; // [rsp+48h] [rbp-61h] BYREF
  int v34[2]; // [rsp+50h] [rbp-59h]
  int v35[2]; // [rsp+58h] [rbp-51h] BYREF
  int v36[2]; // [rsp+60h] [rbp-49h]
  int v37[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v38; // [rsp+70h] [rbp-39h]
  int v39[2]; // [rsp+78h] [rbp-31h] BYREF
  __int64 v40; // [rsp+80h] [rbp-29h]
  _BYTE v41[72]; // [rsp+90h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+47h]

  SystemEffectDescriptor::RemoveModesFromOverridingChains(this, a2);
  *(_QWORD *)v39 = 0LL;
  v40 = 0LL;
  *(_QWORD *)v37 = 0LL;
  v38 = 0LL;
  SystemEffectDescriptor::SeparateStreamingModes(
    this,
    a2,
    (struct CAudioSignalProcessingModeArray *)v39,
    (struct CAudioSignalProcessingModeArray *)v37);
  *(_QWORD *)v35 = 0LL;
  *(_QWORD *)v36 = 0LL;
  *(_QWORD *)v33 = 0LL;
  *(_QWORD *)v34 = 0LL;
  SystemEffectDescriptor::CreateOverrideChainLists(this, a3, a4, a5, v35, v33);
  v11 = (__int64)a7;
  if ( (int)v40 <= 0 )
    goto LABEL_2;
  *(_OWORD *)v32 = 0LL;
  EffectChain = SystemEffectChainDescriptor::CreateEffectChain((int)v39, v34[0], v33[0], 0, 0LL, (__int64)v32);
  v14 = EffectChain;
  if ( EffectChain < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x158,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)EffectChain,
      v31);
    if ( v32[1] )
      std::_Ref_count_base::_Decref(v32[1]);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v33);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v37);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v39);
    v11 = (__int64)a7;
    goto LABEL_27;
  }
  if ( !a7[7]
    || (v19 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                (__int64)v41,
                (__int64)a7),
        v20 = SystemEffectChainDescriptor::MarkAsUnresolved((__int64)v32[0], v19),
        v14 = v20,
        v20 >= 0) )
  {
    if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                          (char *)this + 32,
                          v32) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15A,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        v31);
      if ( v32[1] )
        std::_Ref_count_base::_Decref(v32[1]);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v33);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v37);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v39);
      v26 = (__int64 *)a7[7];
      if ( !v26 )
        return 2147942414LL;
      LOBYTE(v25) = v26 != a7;
      (*(void (__fastcall **)(__int64 *, __int64))(*v26 + 32))(v26, v25);
      goto LABEL_43;
    }
    if ( v32[1] )
      std::_Ref_count_base::_Decref(v32[1]);
LABEL_2:
    if ( (int)v38 <= 0 )
    {
LABEL_10:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v33);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v37);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v39);
      v16 = (__int64 *)a7[7];
      if ( v16 )
      {
        LOBYTE(v15) = v16 != a7;
        (*(void (__fastcall **)(__int64 *, __int64))(*v16 + 32))(v16, v15);
        a7[7] = 0LL;
      }
      return 0LL;
    }
    *(_OWORD *)v32 = 0LL;
    if ( a6 == 1 && (v22 = *((_QWORD *)this + 2)) != 0 )
    {
      v12 = *(struct _GUID **)(v22 + 56);
      v13 = *(_DWORD *)(v22 + 64);
    }
    else
    {
      v12 = 0LL;
      v13 = 0;
    }
    v14 = SystemEffectChainDescriptor::CreateEffectChain((int)v37, v36[0], v35[0], v13, v12, (__int64)v32);
    if ( v14 < 0 )
    {
      v27 = 357LL;
      goto LABEL_32;
    }
    if ( a7[7] )
    {
      v21 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
              (__int64)v41,
              (__int64)a7);
      v14 = SystemEffectChainDescriptor::MarkAsUnresolved((__int64)v32[0], v21);
      if ( v14 < 0 )
      {
        v27 = 358LL;
LABEL_32:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)(unsigned int)v14,
          v30);
        goto LABEL_33;
      }
    }
    if ( (unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                         (char *)this + 32,
                         v32) )
    {
      if ( v32[1] )
        std::_Ref_count_base::_Decref(v32[1]);
      goto LABEL_10;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x167,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v30);
    if ( v32[1] )
      std::_Ref_count_base::_Decref(v32[1]);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v33);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v37);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v39);
    v28 = (__int64 *)a7[7];
    if ( !v28 )
      return 2147942414LL;
    v29 = *v28;
    LOBYTE(v29) = v28 != a7;
    (*(void (__fastcall **)(__int64 *, __int64))(*v28 + 32))(v28, v29);
LABEL_43:
    a7[7] = 0LL;
    return 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x159,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v20,
    v31);
LABEL_33:
  if ( v32[1] )
    std::_Ref_count_base::_Decref(v32[1]);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v33);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v37);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v39);
LABEL_27:
  v24 = *(_QWORD *)(v11 + 56);
  if ( v24 )
  {
    LOBYTE(v23) = v24 != v11;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v23);
    *(_QWORD *)(v11 + 56) = 0LL;
  }
  return (unsigned int)v14;
}
