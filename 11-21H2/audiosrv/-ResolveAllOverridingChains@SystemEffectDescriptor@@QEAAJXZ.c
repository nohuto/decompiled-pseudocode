/*
 * XREFs of ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180032E20
 * Callers:
 *     ?GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180002514 (-GetSupportedConnectorModesInternal@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingMode.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000CB2C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18002C880 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002F320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180034120 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800480F4 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004E4A0 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAVCEndpointCharacteristics@@PEBUtWAVEFORMA.c)
 * Callees:
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18005B5FC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x18005D250 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005DFD0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemEffectDescriptor::ResolveAllOverridingChains(SystemEffectDescriptor *this)
{
  SystemEffectDescriptor *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edx
  SystemEffectDescriptor **v4; // rbp
  __int64 v5; // rsi
  unsigned int v6; // r14d
  int v7; // r15d
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  SystemEffectDescriptor **v11; // rcx
  __int64 v12; // rax
  int v13; // r15d
  SystemEffectDescriptor **v14; // r12
  SystemEffectChainDescriptor **v16; // rax
  int v17; // eax
  int v18[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+28h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = this;
  if ( !*((_BYTE *)this + 52) )
    return 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v4 = 0LL;
  *(_QWORD *)v18 = 0LL;
  v5 = 0LL;
  v19 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( *((int *)v1 + 10) > 0 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 < 0 || v7 >= *((_DWORD *)v1 + 10) )
      {
        ATL::_AtlRaiseException(0xC000008C, v3);
        __debugbreak();
      }
      v9 = *((_QWORD *)v1 + 4);
      if ( (_DWORD)v5 == v6 )
      {
        if ( v6 )
        {
          v6 = 2 * v5;
          if ( (v5 & 0x40000000) != 0 )
            goto LABEL_39;
        }
        else
        {
          v6 = 1;
        }
        if ( v6 > 0x7FFFFFFuLL || (v10 = _o__recalloc(v4, v6, 16LL)) == 0 )
        {
LABEL_39:
          v6 = -2147024882;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F6,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            v18[0]);
          goto LABEL_24;
        }
        HIDWORD(v19) = v6;
        v4 = (SystemEffectDescriptor **)v10;
        *(_QWORD *)v18 = v10;
      }
      v11 = &v4[2 * (int)v5];
      if ( v11 )
      {
        *v11 = 0LL;
        v11[1] = 0LL;
        v12 = *(_QWORD *)(v9 + v8 + 8);
        if ( v12 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          v6 = HIDWORD(v19);
          LODWORD(v5) = v19;
          v4 = *(SystemEffectDescriptor ***)v18;
        }
        *v11 = *(SystemEffectDescriptor **)(v9 + v8);
        v11[1] = *(SystemEffectDescriptor **)(v9 + v8 + 8);
      }
      v5 = (unsigned int)(v5 + 1);
      LODWORD(v19) = v5;
      ++v7;
      v8 += 16LL;
    }
    while ( v7 < *((_DWORD *)v1 + 10) );
  }
  v13 = 0;
  if ( (int)v5 <= 0 )
  {
LABEL_23:
    v6 = 0;
  }
  else
  {
    v14 = v4;
    while ( 1 )
    {
      if ( v13 < 0 || v13 >= (int)v5 )
      {
        ATL::_AtlRaiseException(0xC000008C, v3);
        goto LABEL_42;
      }
      if ( *((_BYTE *)*v14 + 20) )
      {
        v16 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                v18,
                                                (unsigned int)v13);
        v17 = SystemEffectChainDescriptor::Resolve(*v16, v1);
        v6 = v17;
        if ( v17 < 0 )
          break;
      }
      ++v13;
      v14 += 2;
      if ( v13 >= (int)v5 )
        goto LABEL_23;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v17,
      v18[0]);
  }
LABEL_24:
  if ( v4 )
  {
    if ( (int)v5 > 0 )
    {
      ++v4;
      do
      {
        v1 = *v4;
        if ( *v4 && _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 2, 0xFFFFFFFF) == 1 )
        {
LABEL_42:
          (**(void (__fastcall ***)(SystemEffectDescriptor *))v1)(v1);
          std::_Ref_count_base::_Decwref(v1);
        }
        v4 += 2;
        --v5;
      }
      while ( v5 );
      v4 = *(SystemEffectDescriptor ***)v18;
    }
    free(v4);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v6;
}
