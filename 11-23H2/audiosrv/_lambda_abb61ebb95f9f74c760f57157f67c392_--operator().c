/*
 * XREFs of _lambda_abb61ebb95f9f74c760f57157f67c392_::operator() @ 0x180074E28
 * Callers:
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180040510 (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180009464 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180029DE8 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x18002C594 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003064C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800312FC (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18003CEE4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x18004AA4C (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_abb61ebb95f9f74c760f57157f67c392_::operator()(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  unsigned __int64 v6; // r15
  int v7; // esi
  __int64 *SupportedConnectorModesInternal; // r13
  int DefaultEffectChainClsids; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int128 v13; // xmm6
  int v14; // edi
  __int64 *v15; // rax
  int OverridingChain; // eax
  int v17; // edi
  int v18; // ebx
  __int64 *v19; // rax
  BOOL v20; // edi
  __int64 v21; // rbx
  SystemEffectDescriptor *v22; // rax
  __int64 v23; // rdx
  __int64 v25[2]; // [rsp+48h] [rbp-91h] BYREF
  GUID v26; // [rsp+58h] [rbp-81h] BYREF
  GUID v27; // [rsp+68h] [rbp-71h] BYREF
  __int64 v28; // [rsp+78h] [rbp-61h]
  __int64 v29[9]; // [rsp+80h] [rbp-59h] BYREF
  unsigned int v30[4]; // [rsp+C8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+57h]

  v6 = a2;
  v28 = a3;
  *(_QWORD *)&v27.Data1 = *a1;
  *(_QWORD *)&v26.Data1 = gsl::span<SystemEffectDescriptor,-1>::operator[](
                            (unsigned __int64 *)(*(_QWORD *)&v27.Data1 + 1152LL),
                            a2);
  v7 = 0;
  v25[0] = 0LL;
  v25[1] = 0LL;
  SupportedConnectorModesInternal = (__int64 *)EffectPack::GetSupportedConnectorModesInternal(
                                                 *(EffectPack **)&v27.Data1,
                                                 v6,
                                                 1,
                                                 0);
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               *(SystemEffectDescriptor **)&v26.Data1,
                               (struct CAudioSignalProcessingModeArray *)v25,
                               v30,
                               0LL);
  v10 = DefaultEffectChainClsids;
  if ( DefaultEffectChainClsids >= 0 )
  {
    if ( a5 <= 0 )
    {
LABEL_11:
      if ( (_DWORD)v6 != 1
        && !v7
        && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           SupportedConnectorModesInternal,
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
      {
        v18 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                SupportedConnectorModesInternal,
                &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
        v19 = (__int64 *)std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                           (__int64)v29,
                           a3);
        v20 = v18 != -1;
        *(GUID *)v30 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                     *(SystemEffectDescriptor **)&v26.Data1,
                                     (__int64)v30,
                                     1u,
                                     (__int64)&unk_180183810,
                                     1u,
                                     v20,
                                     v19);
        v10 = DefaultEffectChainClsids;
        if ( DefaultEffectChainClsids < 0 )
        {
          v11 = 2709LL;
          goto LABEL_16;
        }
        v26 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v21 = *(_QWORD *)&v27.Data1;
        if ( !(unsigned int)EffectPack::IsAPOModeSupported(*(__int64 *)&v27.Data1, 1, (__int128 *)&v26, v6) )
        {
          v22 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                            (unsigned __int64 *)(v21 + 1168),
                                            v6);
          v29[7] = 0LL;
          v27 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                       v22,
                                       (__int64)&v27,
                                       0,
                                       0LL,
                                       2u,
                                       v20,
                                       v29);
          v10 = DefaultEffectChainClsids;
          if ( DefaultEffectChainClsids < 0 )
          {
            v11 = 2715LL;
            goto LABEL_16;
          }
        }
      }
      v10 = 0;
      goto LABEL_22;
    }
    v12 = 0LL;
    while ( 1 )
    {
      v13 = *(_OWORD *)*((_QWORD *)&off_1801CD220 + v12);
      *(_OWORD *)v30 = v13;
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           SupportedConnectorModesInternal,
                           v30) == -1 )
      {
        v14 = 0;
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v25, v30) == -1 )
          goto LABEL_10;
      }
      else
      {
        v14 = 1;
      }
      v15 = (__int64 *)std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                         (__int64)v29,
                         a3);
      *(_OWORD *)v30 = v13;
      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                          *(SystemEffectDescriptor **)&v26.Data1,
                          (__int64)v30,
                          1u,
                          (__int64)&unk_180183810,
                          1u,
                          v14,
                          v15);
      v17 = OverridingChain;
      if ( OverridingChain < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA89,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)OverridingChain);
        v10 = v17;
        goto LABEL_22;
      }
      ++v7;
LABEL_10:
      if ( ++v12 >= a5 )
        goto LABEL_11;
    }
  }
  v11 = 2686LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DefaultEffectChainClsids);
LABEL_22:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v25);
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(a3, v23);
  return v10;
}
