/*
 * XREFs of ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x180040510
 * Callers:
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x18003FBCC (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 * Callees:
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18002EDFC (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003064C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4Connect.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800312FC (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006A07C (IsGetDefaultSpatialRenderingModePresent.c)
 *     _lambda_abb61ebb95f9f74c760f57157f67c392_::operator() @ 0x180074E58 (_lambda_abb61ebb95f9f74c760f57157f67c392_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall EffectPack::AddProcessingModeSupport_for_VSS(EffectPack *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // r9d
  int v8; // ebx
  int v9; // r9d
  SystemEffectDescriptor *v11; // rbx
  __int64 *v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  EffectPack *v15; // [rsp+40h] [rbp-29h] BYREF
  __int64 v16; // [rsp+48h] [rbp-21h] BYREF
  EffectPack *v17; // [rsp+50h] [rbp-19h]
  __int64 *v18; // [rsp+80h] [rbp+17h]
  GUID v19; // [rsp+90h] [rbp+27h] BYREF
  CLSID pClsid; // [rsp+A0h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 161) + 56LL))(*((_QWORD *)this + 161))
    || (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v3, v2, v4, v5)
    && !(unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform()
    || CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) < 0 )
  {
    return 0LL;
  }
  if ( !*((_QWORD *)this + 164) )
  {
    _o_terminate(v6);
    __debugbreak();
    JUMPOUT(0x1800B18B2LL);
  }
  if ( **((_DWORD **)this + 165) )
  {
    v15 = this;
    v16 = (__int64)off_18017AD98;
    v17 = this;
    v18 = &v16;
    v8 = lambda_abb61ebb95f9f74c760f57157f67c392_::operator()((unsigned int)&v15, 0, (unsigned int)&v16, v7, 3);
    if ( v8 >= 0 )
    {
      if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(*((CEndpointCharacteristics **)this + 161)) )
      {
        v17 = this;
        v16 = (__int64)off_18017D640;
        v18 = &v16;
        v8 = lambda_abb61ebb95f9f74c760f57157f67c392_::operator()((unsigned int)&v15, 1, (unsigned int)&v16, v9, 4);
        if ( v8 < 0 )
        {
          v14 = 2732LL;
          goto LABEL_13;
        }
      }
      return 0LL;
    }
    v14 = 2723LL;
  }
  else
  {
    v11 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                      (unsigned __int64 *)this + 144,
                                      0LL);
    v17 = this;
    v16 = (__int64)off_18017AD98;
    v18 = &v16;
    v12 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 174, 0LL);
    v19 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v13 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
            v12,
            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    v8 = SystemEffectDescriptor::CreateOverridingChain(
           v11,
           (__int64)&v19,
           1u,
           (__int64)&unk_180183810,
           1u,
           v13 != -1,
           &v16);
    if ( v8 >= 0 )
      return 0LL;
    v14 = 2661LL;
  }
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
