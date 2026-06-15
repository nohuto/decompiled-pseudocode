/*
 * XREFs of ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180030CE0
 * Callers:
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x18002FFF0 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18002D110 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180030408 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x180030C74 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800312FC (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?GetFilteredProcessingModesForStreaming@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4ApoType@@_NAEAVCAudioSignalProcessingModeArray@@@Z @ 0x180031B7C (-GetFilteredProcessingModesForStreaming@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18004A09C (-AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x180084AA2 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EffectPack::FixupProcessingModeSupport(EffectPack *this, int a2)
{
  __int64 v2; // rsi
  __int64 v4; // r14
  int v5; // edx
  int FilteredProcessingModesForStreaming; // eax
  __int64 v7; // r9
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  SystemEffectDescriptor *v11; // rax
  __int64 v12; // rsi
  char *v13; // r15
  SystemEffectDescriptor *v14; // rax
  SystemEffectDescriptor *v15; // rax
  signed int v16; // ebx
  signed int v17; // edi
  _QWORD *v19; // rax
  SystemEffectDescriptor *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  SystemEffectDescriptor *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // rdx
  SystemEffectDescriptor *v31; // rax
  int OverridingChain; // eax
  int v33; // [rsp+20h] [rbp-69h]
  int *v34; // [rsp+20h] [rbp-69h]
  int v35[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v36; // [rsp+48h] [rbp-41h]
  int v37[2]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v38; // [rsp+58h] [rbp-31h]
  int v39[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v40; // [rsp+68h] [rbp-21h]
  struct _GUID v41; // [rsp+70h] [rbp-19h] BYREF
  __int64 v42[8]; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v2 = a2;
  v4 = a2;
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 164) )
  {
    _o_terminate(this);
    __debugbreak();
    JUMPOUT(0x180097CDFLL);
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 165) + 4LL * a2) )
  {
    if ( (a2 & 0xFFFFFFFC) == 0 && a2 != 2 )
    {
      *(_QWORD *)v39 = 0LL;
      v40 = 0LL;
      FilteredProcessingModesForStreaming = EffectPack::GetFilteredProcessingModesForStreaming(
                                              this,
                                              (unsigned int)a2,
                                              0LL,
                                              0LL);
      v8 = FilteredProcessingModesForStreaming;
      if ( FilteredProcessingModesForStreaming < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC6B,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)FilteredProcessingModesForStreaming,
          (int)v39);
      }
      else
      {
        *(_QWORD *)v35 = 0LL;
        v36 = 0LL;
        LOBYTE(v7) = *((_BYTE *)this + 1761);
        v9 = EffectPack::GetFilteredProcessingModesForStreaming(this, (unsigned int)v2, 1LL, v7);
        v8 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC6F,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v9,
            (int)v35);
        }
        else
        {
          *(_QWORD *)v37 = 0LL;
          v38 = 0LL;
          v34 = v37;
          v10 = EffectPack::GetFilteredProcessingModesForStreaming(this, (unsigned int)v2, 2LL, 0LL);
          v8 = v10;
          if ( v10 < 0 )
          {
            v27 = 3187LL;
          }
          else
          {
            v11 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1152, v4);
            v12 = 96 * v2;
            v10 = SystemEffectDescriptor::SetDefaultEffectChain(
                    v11,
                    (struct CAudioSignalProcessingModeArray *)v39,
                    *(_DWORD *)(v12 + *((_QWORD *)this + 159) + 1312),
                    *(struct _GUID **)(v12 + *((_QWORD *)this + 159) + 1320));
            v8 = v10;
            if ( v10 < 0 )
            {
              v27 = 3192LL;
            }
            else
            {
              v13 = (char *)this + 1168;
              v14 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1168, v4);
              v10 = SystemEffectDescriptor::SetDefaultEffectChain(
                      v14,
                      (struct CAudioSignalProcessingModeArray *)v35,
                      *(_DWORD *)(96 * (v4 + 14) + *((_QWORD *)this + 159)),
                      *(struct _GUID **)(*((_QWORD *)this + 159) + v12 + 1352));
              v8 = v10;
              if ( v10 < 0 )
              {
                v27 = 3196LL;
              }
              else
              {
                v15 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                                  (char *)this + 1184,
                                                  v4);
                v10 = SystemEffectDescriptor::SetDefaultEffectChain(
                        v15,
                        (struct CAudioSignalProcessingModeArray *)v37,
                        *(_DWORD *)(v12 + *((_QWORD *)this + 159) + 1376),
                        *(struct _GUID **)(v12 + *((_QWORD *)this + 159) + 1384));
                v8 = v10;
                if ( v10 >= 0 )
                {
                  *(_QWORD *)&v41.Data1 = 0LL;
                  *(_QWORD *)v41.Data4 = 0LL;
                  v16 = 0;
                  v17 = v40;
                  if ( (int)v40 > 0 )
                  {
                    do
                    {
                      v19 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                        (__int64)v39,
                                        v16);
                      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                           (__int64 *)v35,
                                           v19) == -1 )
                      {
                        v28 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                (__int64)v39,
                                v16);
                        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v41, v28) )
                        {
                          v8 = -2147024882;
                          v29 = 2147942414LL;
                          v30 = 3217LL;
LABEL_24:
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)v30,
                            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                            (const char *)v29,
                            (int)v34);
                          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v41);
                          goto LABEL_25;
                        }
                      }
                      ++v16;
                    }
                    while ( v16 < v17 );
                    if ( *(int *)v41.Data4 > 0 )
                    {
                      v31 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](v13, v4);
                      v42[7] = 0LL;
                      OverridingChain = SystemEffectDescriptor::CreateOverridingChain(
                                          v31,
                                          (struct CAudioSignalProcessingModeArray *)&v41,
                                          0,
                                          0LL,
                                          2u,
                                          1,
                                          v42);
                      v8 = OverridingChain;
                      if ( OverridingChain < 0 )
                      {
                        v29 = (unsigned int)OverridingChain;
                        v30 = 3224LL;
                        goto LABEL_24;
                      }
                    }
                  }
                  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v41);
                  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v37);
                  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
                  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v39);
                  return 0LL;
                }
                v27 = 3200LL;
              }
            }
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v27,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v10,
            (int)v37);
LABEL_25:
          ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v37);
        }
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v35);
      }
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v39);
      return v8;
    }
    return 0LL;
  }
  if ( a2 == 3 || !EffectPackConfiguration::AposRegisteredAsLfxGfx(*((EffectPackConfiguration **)this + 159)) || v5 )
    return 0LL;
  v20 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1152, v4);
  v21 = *((_QWORD *)this + 159);
  v41 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  v22 = SystemEffectDescriptor::SetDefaultEffectChain(
          v20,
          &v41,
          *(_DWORD *)(v21 + 1696),
          *(const struct _GUID **)(v21 + 1704));
  v8 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5F,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v22,
      v33);
    return v8;
  }
  v23 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1168, v4);
  v24 = *((_QWORD *)this + 159);
  v41 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  v25 = SystemEffectDescriptor::SetDefaultEffectChain(
          v23,
          &v41,
          *(_DWORD *)(v24 + 1712),
          *(const struct _GUID **)(v24 + 1720));
  v26 = v25;
  if ( v25 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC60,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v25,
    v33);
  return v26;
}
