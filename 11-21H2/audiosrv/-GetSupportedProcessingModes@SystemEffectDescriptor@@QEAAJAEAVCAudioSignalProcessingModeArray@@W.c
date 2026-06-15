/*
 * XREFs of ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18002C3F0
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002F320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180030430 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180034120 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180147970 (-GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ @ 0x18014A018 (-InitializeAPOInfo@CEndpointCharacteristics@@AEAAJXZ.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18000F714 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180048324 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800483F0 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180048F04 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18005B5FC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x18005D250 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1801440C0 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180144B04 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemEffectDescriptor::GetSupportedProcessingModes(__int64 a1, __int64 *a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  char *v6; // rbp
  __int64 v7; // r14
  unsigned int v8; // r15d
  unsigned int v9; // r15d
  unsigned int i; // edi
  int *v11; // rax
  int v12; // edi
  __int64 k; // r14
  _QWORD *v14; // rcx
  int v15; // r8d
  signed int v16; // edx
  __int64 v17; // r15
  int v18; // eax
  unsigned int v19; // ebp
  __int64 v20; // rax
  _OWORD *v21; // rax
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rdx
  SystemEffectChainDescriptor **v26; // rax
  int v27; // eax
  char *v28; // r15
  unsigned int j; // ebp
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // r10
  __int64 v34; // r9
  int v35[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v36; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+68h] [rbp+20h] BYREF

  if ( !a3 )
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(a2);
    if ( *((_DWORD *)a2 + 2) != *(_DWORD *)(a1 + 8) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23A,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL,
        v35[0]);
      return 2147942414LL;
    }
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 52) )
  {
    v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
    v38 = v5;
    v6 = 0LL;
    *(_QWORD *)v35 = 0LL;
    v7 = 0LL;
    v36 = 0LL;
    v8 = 0;
    if ( *(int *)(a1 + 40) > 0 )
    {
      while ( 1 )
      {
        v23 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                a1 + 32,
                v8);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              v35,
                              v23) )
          break;
        if ( (signed int)++v8 >= *(_DWORD *)(a1 + 40) )
        {
          v7 = (unsigned int)v36;
          v6 = *(char **)v35;
          goto LABEL_4;
        }
      }
      v24 = 2147942414LL;
      v25 = 502LL;
    }
    else
    {
LABEL_4:
      v9 = 0;
      if ( (int)v7 <= 0 )
      {
LABEL_5:
        if ( v6 )
        {
          if ( (int)v7 > 0 )
          {
            v28 = v6;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v28);
              v28 += 16;
              --v7;
            }
            while ( v7 );
          }
          free(v6);
        }
        if ( v5 )
          LeaveCriticalSection(v5);
        goto LABEL_8;
      }
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                     v35,
                                     v9)
                      + 20LL) )
        {
          v26 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                  v35,
                                                  v9);
          v27 = SystemEffectChainDescriptor::Resolve(*v26, (struct SystemEffectDescriptor *)a1);
          if ( v27 < 0 )
            break;
        }
        if ( (int)++v9 >= (int)v7 )
          goto LABEL_5;
      }
      v24 = (unsigned int)v27;
      v25 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v24,
      v35[0]);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(v35);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v38);
  }
LABEL_8:
  for ( i = 0; (signed int)i < *(_DWORD *)(a1 + 40); ++i )
  {
    for ( j = 0;
          (signed int)j < *(_DWORD *)(*(_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                   a1 + 32,
                                                   i)
                                    + 8LL);
          ++j )
    {
      v30 = (_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                        a1 + 32,
                        i);
      v31 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v30, j);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(a2, v31) == -1 )
      {
        v32 = (_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                          a1 + 32,
                          i);
        ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](*v32, j);
        if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(a2) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x248,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL,
            v35[0]);
          return 2147942414LL;
        }
      }
    }
  }
  v11 = *(int **)(a1 + 16);
  if ( !v11 )
    return 0LL;
  v12 = 0;
  if ( v11[2] <= 0 )
    return 0LL;
  for ( k = 0LL; ; k += 16LL )
  {
    if ( v12 < 0 || v12 >= v11[2] )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v11);
      JUMPOUT(0x18008B108LL);
    }
    v14 = (_QWORD *)(*(_QWORD *)v11 + 16LL * v12);
    v15 = 0;
    v16 = *((_DWORD *)a2 + 2);
    if ( v16 > 0 )
    {
      while ( 1 )
      {
        v33 = (_QWORD *)(*a2 + 16LL * v15);
        v34 = *v33 - *v14;
        if ( *v33 == *v14 )
          v34 = v33[1] - v14[1];
        if ( !v34 )
          break;
        if ( ++v15 >= v16 )
          goto LABEL_15;
      }
      if ( v15 != -1 )
        goto LABEL_25;
    }
LABEL_15:
    if ( v12 >= v11[2] )
    {
      ATL::_AtlRaiseException(0xC000008C, v16);
      __debugbreak();
    }
    v17 = *(_QWORD *)v11;
    v18 = *((_DWORD *)a2 + 3);
    if ( v16 == v18 )
      break;
LABEL_22:
    v21 = (_OWORD *)(*a2 + 16LL * v16);
    if ( v21 )
    {
      *v21 = *(_OWORD *)(v17 + k);
      v16 = *((_DWORD *)a2 + 2);
    }
    *((_DWORD *)a2 + 2) = v16 + 1;
LABEL_25:
    ++v12;
    v11 = *(int **)(a1 + 16);
    if ( v12 >= v11[2] )
      return 0LL;
  }
  if ( v18 )
  {
    v19 = 2 * v16;
    if ( (v16 & 0x40000000) != 0 )
      goto LABEL_59;
  }
  else
  {
    v19 = 1;
  }
  if ( v19 <= 0x7FFFFFFuLL )
  {
    v20 = _o__recalloc(*a2, v19, 16LL);
    if ( v20 )
    {
      *((_DWORD *)a2 + 3) = v19;
      *a2 = v20;
      v16 = *((_DWORD *)a2 + 2);
      goto LABEL_22;
    }
  }
LABEL_59:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x254,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v35[0]);
  return 2147942414LL;
}
