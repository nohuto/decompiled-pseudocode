/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18004816C
 * Callers:
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800103F0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAVCAudioSignalProcessingModeArray@@@Z @ 0x18004875C (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180051094 (-AddSpatialAudioProcessingSupportForConnector@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000ABEC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180047DE4 (-MarkAsUnresolved@SystemEffectChainDescriptor@@IEAAJV-$function@$$A6AJPEAVSystemEffectDescriptor.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180047EC8 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180048324 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180048D14 (-CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GU.c)
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180048E14 (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x18004921C (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x18005D250 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18014BF28 (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAt@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHH@Z @ 0x18014FDB8 (-RemoveAt@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualH.c)
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
  unsigned int v8; // r15d
  unsigned int v11; // esi
  unsigned int v12; // ebx
  __int64 v13; // rbx
  int v14; // eax
  int v15; // esi
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  __int64 *v19; // rcx
  int v21; // eax
  unsigned int i; // r15d
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // rdx
  int v36; // [rsp+20h] [rbp-91h]
  std::_Ref_count_base *v37[2]; // [rsp+30h] [rbp-81h] BYREF
  __int64 v38; // [rsp+40h] [rbp-71h] BYREF
  __int64 v39; // [rsp+48h] [rbp-69h]
  __int64 v40; // [rsp+50h] [rbp-61h] BYREF
  __int64 v41; // [rsp+58h] [rbp-59h]
  __int64 v42; // [rsp+60h] [rbp-51h] BYREF
  __int64 v43; // [rsp+68h] [rbp-49h]
  __int64 v44; // [rsp+70h] [rbp-41h] BYREF
  __int64 v45; // [rsp+78h] [rbp-39h]
  _BYTE v46[112]; // [rsp+80h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+47h]

  v8 = a3;
  v11 = 0;
  if ( *((int *)this + 10) > 0 )
  {
    v21 = *((_DWORD *)a2 + 2);
    do
    {
      for ( i = 0; (int)i < v21; v21 = *((_DWORD *)a2 + 2) )
      {
        v23 = *(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                           (char *)this + 32,
                           v11);
        v24 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a2, i);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v23, v24);
        ++i;
      }
      ++v11;
    }
    while ( (signed int)v11 < *((_DWORD *)this + 10) );
    v8 = a3;
  }
  while ( 1 )
  {
    v12 = 0;
    if ( *((int *)this + 10) <= 0 )
      break;
    while ( *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                     (char *)this + 32,
                                     v12)
                      + 8LL) )
    {
      if ( (signed int)++v12 >= *((_DWORD *)this + 10) )
        goto LABEL_3;
    }
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAt(
      (char *)this + 32,
      v12);
  }
LABEL_3:
  v44 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  SystemEffectDescriptor::SeparateStreamingModes(
    this,
    a2,
    (struct CAudioSignalProcessingModeArray *)&v44,
    (struct CAudioSignalProcessingModeArray *)&v42);
  v40 = 0LL;
  v41 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  SystemEffectDescriptor::CreateOverrideChainLists(this, v8, a4, a5, &v40, &v38);
  v13 = (__int64)a7;
  if ( (int)v45 <= 0 )
    goto LABEL_10;
  *(_OWORD *)v37 = 0LL;
  v14 = SystemEffectChainDescriptor::CreateEffectChain(&v44, (unsigned int)v39, v38, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15A,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v14,
      0);
    if ( v37[1] )
      std::_Ref_count_base::_Decref(v37[1]);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v38);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v40);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v42);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v44);
    v13 = (__int64)a7;
    goto LABEL_27;
  }
  if ( !a7[7]
    || (v16 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                (__int64)v46,
                (__int64)a7),
        v17 = SystemEffectChainDescriptor::MarkAsUnresolved((__int64)v37[0], v16),
        v15 = v17,
        v17 >= 0) )
  {
    if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                          (char *)this + 32,
                          v37) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x15C,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        0);
      if ( v37[1] )
        std::_Ref_count_base::_Decref(v37[1]);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v38);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v40);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v42);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v44);
      v29 = (__int64 *)a7[7];
      if ( !v29 )
        return 2147942414LL;
      LOBYTE(v28) = v29 != a7;
      (*(void (__fastcall **)(__int64 *, __int64))(*v29 + 32))(v29, v28);
      goto LABEL_54;
    }
    if ( v37[1] )
      std::_Ref_count_base::_Decref(v37[1]);
LABEL_10:
    if ( (int)v43 <= 0 )
    {
LABEL_11:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v38);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v40);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v42);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v44);
      v19 = (__int64 *)a7[7];
      if ( v19 )
      {
        LOBYTE(v18) = v19 != a7;
        (*(void (__fastcall **)(__int64 *, __int64))(*v19 + 32))(v19, v18);
        a7[7] = 0LL;
      }
      return 0LL;
    }
    *(_OWORD *)v37 = 0LL;
    if ( a6 == 1 && (v30 = *((_QWORD *)this + 2)) != 0 )
    {
      v31 = *(_QWORD *)(v30 + 56);
      v32 = *(unsigned int *)(v30 + 64);
    }
    else
    {
      LODWORD(v31) = 0;
      v32 = 0LL;
    }
    v36 = v31;
    v15 = SystemEffectChainDescriptor::CreateEffectChain(&v42, (unsigned int)v41, v40, v32);
    if ( v15 < 0 )
    {
      v27 = 359LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v27,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v15,
        v36);
      goto LABEL_33;
    }
    if ( a7[7] )
    {
      v33 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
              (__int64)v46,
              (__int64)a7);
      v15 = SystemEffectChainDescriptor::MarkAsUnresolved((__int64)v37[0], v33);
      if ( v15 < 0 )
      {
        v27 = 360LL;
        goto LABEL_32;
      }
    }
    if ( (unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                         (char *)this + 32,
                         v37) )
    {
      if ( v37[1] )
        std::_Ref_count_base::_Decref(v37[1]);
      goto LABEL_11;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x169,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL,
      v36);
    if ( v37[1] )
      std::_Ref_count_base::_Decref(v37[1]);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v38);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v40);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v42);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v44);
    v34 = (__int64 *)a7[7];
    if ( !v34 )
      return 2147942414LL;
    v35 = *v34;
    LOBYTE(v35) = v34 != a7;
    (*(void (__fastcall **)(__int64 *, __int64))(*v34 + 32))(v34, v35);
LABEL_54:
    a7[7] = 0LL;
    return 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15B,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v17,
    0);
LABEL_33:
  if ( v37[1] )
    std::_Ref_count_base::_Decref(v37[1]);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v38);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v40);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v42);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v44);
LABEL_27:
  v26 = *(_QWORD *)(v13 + 56);
  if ( v26 )
  {
    LOBYTE(v25) = v26 != v13;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 32LL))(v26, v25);
    *(_QWORD *)(v13 + 56) = 0LL;
  }
  return (unsigned int)v15;
}
