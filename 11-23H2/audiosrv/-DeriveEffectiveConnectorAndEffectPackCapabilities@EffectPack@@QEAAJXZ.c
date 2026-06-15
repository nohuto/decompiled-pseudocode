/*
 * XREFs of ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x18002FFF0
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180025BA0 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x18000E1AC (-CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180030CE0 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800312FC (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x18003FBCC (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x1800406B0 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ?AposRegisteredAsSfxMfxEfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18004864C (-AposRegisteredAsSfxMfxEfx@EffectPackConfiguration@@QEBA_NXZ.c)
 *     ?AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18004A09C (-AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ.c)
 */

__int64 __fastcall EffectPack::DeriveEffectiveConnectorAndEffectPackCapabilities(EffectPack *this)
{
  unsigned __int64 v1; // rdi
  int v3; // ebx
  __int64 i; // rcx
  BOOL *v5; // rdx
  EffectPackConfiguration *v6; // rcx
  BOOL v7; // eax
  unsigned __int64 j; // rbx
  int v9; // eax
  unsigned int v10; // ebp
  __int64 *v11; // rax
  struct _GUID *v12; // rdx
  SystemEffectDescriptor *v13; // rax
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rax
  signed int k; // ebp
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx
  SystemEffectDescriptor *v22; // rbx
  __int64 v23; // rax
  struct _GUID v24; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = 0LL;
  if ( *((_BYTE *)this + 1760) )
    return 0LL;
  v3 = EffectPack::CopyCapabilitiesFromEndpoint(this);
  if ( v3 < 0 )
  {
    v15 = 2185LL;
  }
  else
  {
    for ( i = 0LL; (unsigned __int64)i < *((_QWORD *)this + 178); ++i )
      *(_DWORD *)(*((_QWORD *)this + 179) + 4 * i) = 0;
    if ( !*((_QWORD *)this + 164) )
    {
LABEL_28:
      _o_terminate(i);
      __debugbreak();
      JUMPOUT(0x1800301EDLL);
    }
    v5 = (BOOL *)*((_QWORD *)this + 165);
    v7 = *v5
      && (EffectPackConfiguration::AposRegisteredAsSfxMfxEfx(*((EffectPackConfiguration **)this + 159))
       || !EffectPackConfiguration::AposRegisteredAsLfxGfx(v6));
    *v5 = v7;
    for ( j = 0LL; j < 4; ++j )
    {
      if ( j != 2 )
      {
        v9 = EffectPack::FixupProcessingModeSupport(this, (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)j);
        v10 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x89B,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v9,
            v24.Data1);
          return v10;
        }
      }
    }
    v3 = EffectPack::AddOsProcessingModeSupport(this);
    if ( v3 < 0 )
    {
      v15 = 2206LL;
    }
    else
    {
      v11 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 174, 0LL);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v11,
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
      {
        v16 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 174, 0LL);
        if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                             v16,
                             &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
        {
          v17 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 174, 0LL);
          v12 = (struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v17, 0);
        }
      }
      v24 = *v12;
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((char *)this + 1632, &v24) )
      {
        v3 = -2147024882;
        v15 = 2218LL;
        goto LABEL_32;
      }
      v13 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1168, 0LL);
      v24 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v3 = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v13, &v24);
      if ( v3 >= 0 )
      {
        if ( *(_BYTE *)(*((_QWORD *)this + 161) + 8235LL) )
        {
          for ( k = 0;
                k < *(_DWORD *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                  (unsigned __int64 *)this + 174,
                                  0LL)
                              + 8);
                ++k )
          {
            v19 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 174, 0LL);
            v20 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v19, k);
            v21 = *v20 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
            if ( *v20 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
              v21 = v20[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
            if ( v21 )
            {
              v22 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1168, 0LL);
              v23 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 174, 0LL);
              v24 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v23, k);
              v3 = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v22, &v24);
              if ( v3 < 0 )
              {
                v15 = 2233LL;
                goto LABEL_32;
              }
            }
          }
        }
        for ( i = 0LL; i < 384; i += 96LL )
        {
          if ( v1 >= *((_QWORD *)this + 144) )
            goto LABEL_28;
          *(_BYTE *)(*((_QWORD *)this + 145) + i + 52) = 1;
          if ( v1 >= *((_QWORD *)this + 146) )
            goto LABEL_28;
          *(_BYTE *)(*((_QWORD *)this + 147) + i + 52) = 1;
          if ( v1 >= *((_QWORD *)this + 148) )
            goto LABEL_28;
          ++v1;
          *(_BYTE *)(*((_QWORD *)this + 149) + i + 52) = 1;
        }
        *((_BYTE *)this + 1760) = 1;
        return 0LL;
      }
      v15 = 2221LL;
    }
  }
LABEL_32:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v3,
    v24.Data1);
  return (unsigned int)v3;
}
