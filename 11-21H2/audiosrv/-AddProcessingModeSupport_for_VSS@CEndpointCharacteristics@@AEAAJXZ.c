/*
 * XREFs of ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x180047194
 * Callers:
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180046864 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800101C0 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800103F0 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18001058C (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180046328 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800480F4 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180061D9C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _lambda_e6f097a164894528a3d2285fefe0cca7_::operator() @ 0x180069720 (_lambda_e6f097a164894528a3d2285fefe0cca7_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::AddProcessingModeSupport_for_VSS(CEndpointCharacteristics *this)
{
  int v2; // r9d
  int v3; // ebx
  int v4; // r9d
  SystemEffectDescriptor *v6; // rbx
  __int64 *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-49h]
  CEndpointCharacteristics *v11; // [rsp+40h] [rbp-29h] BYREF
  __int64 v12; // [rsp+48h] [rbp-21h] BYREF
  CEndpointCharacteristics *v13; // [rsp+50h] [rbp-19h]
  __int64 *v14; // [rsp+80h] [rbp+17h]
  GUID v15; // [rsp+90h] [rbp+27h] BYREF
  CLSID pClsid; // [rsp+A0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)this + 56LL))(this)
    || (unsigned __int8)IsGetDefaultSpatialRenderingModePresent()
    && !(unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform()
    || CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) < 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(this, eHostProcessConnector) )
  {
    v11 = this;
    v12 = (__int64)off_1801766E8;
    v13 = this;
    v14 = &v12;
    v3 = lambda_e6f097a164894528a3d2285fefe0cca7_::operator()((unsigned int)&v11, 0, (unsigned int)&v12, v2, 3);
    if ( v3 >= 0 )
    {
      if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this) )
      {
        v13 = this;
        v12 = (__int64)off_1801784A8;
        v14 = &v12;
        v3 = lambda_e6f097a164894528a3d2285fefe0cca7_::operator()((unsigned int)&v11, 1, (unsigned int)&v12, v4, 4);
        if ( v3 < 0 )
        {
          v9 = 2049LL;
          goto LABEL_12;
        }
      }
      return 0LL;
    }
    v9 = 2040LL;
  }
  else
  {
    v6 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 224, 0LL);
    v13 = this;
    v12 = (__int64)off_1801766E8;
    v14 = &v12;
    v7 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, 0LL);
    v15 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v8 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           v7,
           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    v3 = SystemEffectDescriptor::CreateOverridingChain(
           v6,
           (__int64)&v15,
           1LL,
           (__int64)&unk_18017E1B8,
           1,
           v8 != -1,
           &v12);
    if ( v3 >= 0 )
      return 0LL;
    v9 = 1978LL;
  }
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v3,
    v10);
  return (unsigned int)v3;
}
