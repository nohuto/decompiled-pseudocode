/*
 * XREFs of _lambda_e6f097a164894528a3d2285fefe0cca7_::operator() @ 0x180069720
 * Callers:
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x180047194 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180002514 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800101C0 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800103F0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??1?$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ @ 0x1800104D0 (--1-$function@$$A6A_NPEAUISaDeviceProxy@@@Z@std@@QEAA@XZ.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x1800107D0 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180047EC8 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004A0DC (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18014A354 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_e6f097a164894528a3d2285fefe0cca7_::operator()(
        CEndpointCharacteristics **a1,
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
  CEndpointCharacteristics *v21; // rbx
  SystemEffectDescriptor *v22; // rax
  __int64 v23; // rdx
  int v25; // [rsp+28h] [rbp-B1h]
  int v26; // [rsp+28h] [rbp-B1h]
  __int64 v27[2]; // [rsp+48h] [rbp-91h] BYREF
  GUID v28; // [rsp+58h] [rbp-81h] BYREF
  CEndpointCharacteristics *v29[2]; // [rsp+68h] [rbp-71h] BYREF
  __int64 v30; // [rsp+78h] [rbp-61h]
  __int64 v31[9]; // [rsp+80h] [rbp-59h] BYREF
  unsigned int v32[4]; // [rsp+C8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+57h]

  v6 = a2;
  v30 = a3;
  v29[0] = *a1;
  *(_QWORD *)&v28.Data1 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)v29[0] + 224, a2);
  v7 = 0;
  v27[0] = 0LL;
  v27[1] = 0LL;
  SupportedConnectorModesInternal = (__int64 *)CEndpointCharacteristics::GetSupportedConnectorModesInternal(
                                                 v29[0],
                                                 v6,
                                                 0);
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               *(SystemEffectDescriptor **)&v28.Data1,
                               (struct CAudioSignalProcessingModeArray *)v27,
                               v32,
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
                           (__int64)v31,
                           a3);
        v20 = v18 != -1;
        *(GUID *)v32 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                     *(SystemEffectDescriptor **)&v28.Data1,
                                     (__int64)v32,
                                     1LL,
                                     (__int64)&unk_18017E1B8,
                                     1,
                                     v20,
                                     v19);
        v10 = DefaultEffectChainClsids;
        if ( DefaultEffectChainClsids < 0 )
        {
          v11 = 2026LL;
          goto LABEL_16;
        }
        v28 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v21 = v29[0];
        if ( !(unsigned int)CEndpointCharacteristics::IsAPOModeSupported(
                              v29[0],
                              &v28,
                              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v6) )
        {
          v22 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                            (unsigned __int64 *)v21 + 226,
                                            v6);
          v31[7] = 0LL;
          *(GUID *)v29 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          DefaultEffectChainClsids = SystemEffectDescriptor::CreateOverridingChain(
                                       v22,
                                       (__int64)v29,
                                       0LL,
                                       0LL,
                                       2,
                                       v20,
                                       v31);
          v10 = DefaultEffectChainClsids;
          if ( DefaultEffectChainClsids < 0 )
          {
            v11 = 2032LL;
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
      v13 = (__int128)*off_1801C0290[v12];
      *(_OWORD *)v32 = v13;
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           SupportedConnectorModesInternal,
                           v32) == -1 )
      {
        v14 = 0;
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v27, v32) == -1 )
          goto LABEL_10;
      }
      else
      {
        v14 = 1;
      }
      v15 = (__int64 *)std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
                         (__int64)v31,
                         a3);
      *(_OWORD *)v32 = v13;
      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                          *(SystemEffectDescriptor **)&v28.Data1,
                          (__int64)v32,
                          1LL,
                          (__int64)&unk_18017E1B8,
                          1,
                          v14,
                          v15);
      v17 = OverridingChain;
      if ( OverridingChain < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7DE,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)OverridingChain,
          v26);
        v10 = v17;
        goto LABEL_22;
      }
      ++v7;
LABEL_10:
      if ( ++v12 >= a5 )
        goto LABEL_11;
    }
  }
  v11 = 2003LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DefaultEffectChainClsids,
    v25);
LABEL_22:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v27);
  std::function<bool (ISaDeviceProxy *)>::~function<bool (ISaDeviceProxy *)>(a3, v23);
  return v10;
}
