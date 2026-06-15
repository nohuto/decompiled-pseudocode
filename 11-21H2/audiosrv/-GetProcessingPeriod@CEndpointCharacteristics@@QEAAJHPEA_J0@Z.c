/*
 * XREFs of ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18002C880
 * Callers:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18000DEC0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000CB2C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     ??A?$span@VCAudioSignalProcessingModeMap@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z @ 0x18000ED54 (--A-$span@VCAudioSignalProcessingModeMap@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeMap@@_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002C580 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x18002E210 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180032E20 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?Add@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAHAEBV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x180048324 (-Add@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800492E4 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18005B5FC (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x18005D250 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005DFD0 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006251D (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800C5F24 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??1?$unique_ptr@USpatialAudioEncoderDescriptor@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x1800CB9A0 (--1-$unique_ptr@USpatialAudioEncoderDescriptor@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800E803C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18013F2C0 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ??1?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAA@XZ @ 0x1801440C0 (--1-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ??_G?$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z @ 0x180144B04 (--_G-$shared_ptr@VSystemEffectChainDescriptor@@@std@@QEAAPEAXI@Z.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x18014C8C4 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CEndpointCharacteristics::GetProcessingPeriod(
        CEndpointCharacteristics *this,
        int a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // r15
  __int64 *v5; // r14
  int v6; // eax
  CEndpointCharacteristics *v7; // rbx
  int v8; // edi
  struct _RTL_CRITICAL_SECTION *v9; // rsi
  __int64 *v10; // r15
  __int64 v11; // r12
  unsigned int v12; // r13d
  unsigned int v13; // r13d
  __int64 v14; // r13
  volatile signed __int32 *v15; // rsi
  unsigned int v16; // r15d
  signed int v17; // edx
  __int64 v18; // r12
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 *v24; // r12
  char *v25; // rax
  int v26; // edx
  int v27; // r8d
  __int64 v28; // r9
  __int64 v29; // rax
  GUID *DefaultConnectorProcessingModeInternal; // rax
  GUID v31; // xmm6
  unsigned int v32; // edx
  __int64 v33; // rax
  __int64 v34; // rcx
  int ProposedConnectorFormatForProcessingMode; // esi
  char *v36; // r9
  int v37; // edx
  int v38; // r8d
  _QWORD *v39; // rcx
  __int64 v40; // rax
  int v41; // r8d
  _QWORD *v42; // rcx
  __int64 v43; // rax
  GUID v44; // xmm0
  void *v45; // rdx
  unsigned __int16 *v46; // rsi
  unsigned __int64 *v47; // rcx
  __int64 *v48; // rax
  int v49; // r8d
  int v50; // edx
  LPCRITICAL_SECTION *v51; // rax
  GUID v52; // xmm0
  struct _RTL_CRITICAL_SECTION *v53; // r8
  __int64 v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // r13
  _QWORD *v57; // r9
  _QWORD *v58; // rcx
  __int64 v59; // rax
  struct _RTL_CRITICAL_SECTION *p_LockCount; // r12
  struct _RTL_CRITICAL_SECTION *v61; // rcx
  struct _RTL_CRITICAL_SECTION *v62; // rax
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // r12
  unsigned __int16 *v64; // rcx
  int v65; // edx
  unsigned __int16 v66; // ax
  int v67; // r10d
  __int16 v68; // r11
  int v69; // edx
  unsigned __int16 v70; // ax
  int v71; // r9d
  __int16 v72; // r15
  __int16 v73; // dx
  int v74; // ecx
  __int16 v75; // ax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v79; // rax
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // rax
  SystemEffectChainDescriptor **v83; // rax
  int v84; // eax
  __int64 v85; // r9
  __int64 v86; // rdx
  SystemEffectChainDescriptor **v87; // rax
  int v88; // eax
  int v89; // eax
  __int64 v90; // r10
  __int64 v91; // rax
  __int64 v92; // r10
  int v93; // ecx
  int v94; // r9d
  _QWORD *v95; // r8
  __int64 v96; // rdx
  GUID v97; // xmm0
  __int64 v98; // rax
  __int64 v99; // rax
  unsigned __int16 v100; // r8
  unsigned __int16 v101; // r9
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned __int16 v104; // r8
  unsigned __int16 v105; // r9
  int v106; // eax
  __int64 v107; // rcx
  __int64 v108; // r9
  __int64 v109; // rdx
  int v110; // [rsp+20h] [rbp-E0h]
  int v111; // [rsp+20h] [rbp-E0h]
  signed int v112; // [rsp+30h] [rbp-D0h]
  struct _RTL_CRITICAL_SECTION *v113; // [rsp+30h] [rbp-D0h]
  __int64 *v114; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v115; // [rsp+40h] [rbp-C0h]
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  struct _RTL_CRITICAL_SECTION *v117; // [rsp+50h] [rbp-B0h] BYREF
  struct _RTL_CRITICAL_SECTION *v118; // [rsp+58h] [rbp-A8h] BYREF
  int v119; // [rsp+60h] [rbp-A0h]
  __int64 *v120; // [rsp+68h] [rbp-98h]
  struct tagPROPVARIANT v121; // [rsp+70h] [rbp-90h] BYREF
  PROPVARIANT v122[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 *v123; // [rsp+98h] [rbp-68h]
  PROPVARIANT pvar[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v125; // [rsp+B0h] [rbp-50h]
  PROPVARIANT v126[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v127; // [rsp+C8h] [rbp-38h]
  __int64 v128; // [rsp+D0h] [rbp-30h]
  __int64 *v129; // [rsp+D8h] [rbp-28h]
  GUID v130; // [rsp+E0h] [rbp-20h] BYREF
  __int128 Buf1; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v132[24]; // [rsp+100h] [rbp+0h]
  __int128 Buf2; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v134[24]; // [rsp+130h] [rbp+30h]
  __m256i v135; // [rsp+150h] [rbp+50h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+170h] [rbp+70h] BYREF
  __int128 v137; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v138; // [rsp+190h] [rbp+90h]
  GUID v139; // [rsp+198h] [rbp+98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v4 = a4;
  v120 = a4;
  v5 = a3;
  v129 = a3;
  v6 = a2;
  v119 = a2;
  v7 = this;
  if ( a3 )
  {
    if ( !a4 )
    {
      v8 = 0;
      goto LABEL_147;
    }
  }
  else if ( !a4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E37,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x80004003LL,
      v110);
    return 2147500035LL;
  }
  v8 = 0;
  pv = 0LL;
  *(GUID *)v135.m256i_i8 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( !*((_BYTE *)this + 9727) )
  {
    this = (CEndpointCharacteristics *)*((_QWORD *)this + 10);
    if ( this )
    {
      *(_OWORD *)pvar = 0LL;
      v125 = 0LL;
      if ( (*(int (__fastcall **)(CEndpointCharacteristics *, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)this + 40LL))(
             this,
             &PKEY_AudioEndpoint_Disable_SysFx,
             pvar) >= 0
        && LOWORD(pvar[0]) == 19
        && LODWORD(pvar[1]) )
      {
        PropVariantClear(pvar);
        v25 = (char *)v7 + 168;
        goto LABEL_51;
      }
      PropVariantClear(pvar);
    }
  }
  if ( !*((_QWORD *)v7 + 224)
    || (SystemEffectDescriptor::ResolveAllOverridingChains(*((SystemEffectDescriptor **)v7 + 225)),
        !*((_QWORD *)v7 + 226)) )
  {
LABEL_244:
    _o_terminate(this);
    while ( 1 )
    {
LABEL_245:
      *(_OWORD *)v122 = 0LL;
      v123 = 0LL;
      v106 = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v7 + 5) + 40LL))(
               *((_QWORD *)v7 + 5),
               &PKEY_AudioEngine_Period,
               v122);
      ProposedConnectorFormatForProcessingMode = v106;
      if ( v106 < 0 )
      {
        v109 = 7760LL;
        goto LABEL_258;
      }
      if ( LOWORD(v122[0]) != 65 )
        break;
      if ( LODWORD(v122[1]) != 8 )
        goto LABEL_256;
      v107 = *v123;
      *v5 = *v123;
      if ( v107 )
        goto LABEL_255;
      if ( (unsigned int)++v8 >= 0x7D0 )
      {
        ProposedConnectorFormatForProcessingMode = -2147467259;
        v108 = 2147500037LL;
        v109 = 7773LL;
        goto LABEL_259;
      }
      Sleep(5u);
      PropVariantClear(v122);
    }
    if ( LOWORD(v122[0]) )
    {
LABEL_256:
      ProposedConnectorFormatForProcessingMode = -2147024809;
      v108 = 2147942487LL;
      v109 = 7786LL;
      goto LABEL_259;
    }
    *v5 = 100000LL;
    v106 = CEndpointCharacteristics::SetProcessingPeriod(v7, v5);
    ProposedConnectorFormatForProcessingMode = v106;
    if ( v106 >= 0 )
    {
LABEL_255:
      PropVariantClear(v122);
      return 0LL;
    }
    v109 = 7782LL;
LABEL_258:
    v108 = (unsigned int)v106;
LABEL_259:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v109,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v108,
      v110);
    PropVariantClear(v122);
    return (unsigned int)ProposedConnectorFormatForProcessingMode;
  }
  v5 = (__int64 *)*((_QWORD *)v7 + 227);
  if ( *((_BYTE *)v5 + 52) )
  {
    v9 = (struct _RTL_CRITICAL_SECTION *)(v5 + 7);
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 7));
    v117 = (struct _RTL_CRITICAL_SECTION *)(v5 + 7);
    v10 = 0LL;
    v130 = (GUID)0LL;
    v11 = 0LL;
    v12 = 0;
    if ( *((int *)v5 + 10) > 0 )
    {
      while ( 1 )
      {
        v79 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                v5 + 4,
                v12);
        if ( !(unsigned int)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::Add(
                              &v130,
                              v79) )
          break;
        if ( (signed int)++v12 >= *((_DWORD *)v5 + 10) )
        {
          v11 = *(unsigned int *)v130.Data4;
          v10 = *(__int64 **)&v130.Data1;
          goto LABEL_12;
        }
      }
      v80 = 2147942414LL;
      v81 = 502LL;
    }
    else
    {
LABEL_12:
      v13 = 0;
      if ( (int)v11 <= 0 )
      {
LABEL_13:
        if ( v10 )
        {
          if ( (int)v11 > 0 )
          {
            v5 = v10;
            do
            {
              std::shared_ptr<SystemEffectChainDescriptor>::`scalar deleting destructor'(v5);
              v5 += 2;
              --v11;
            }
            while ( v11 );
          }
          free(v10);
        }
        if ( v9 )
          LeaveCriticalSection(v9);
        goto LABEL_16;
      }
      while ( 1 )
      {
        v82 = ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                &v130,
                v13);
        this = *(CEndpointCharacteristics **)v82;
        if ( *(_BYTE *)(*(_QWORD *)v82 + 20LL) )
        {
          v83 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                  &v130,
                                                  v13);
          v84 = SystemEffectChainDescriptor::Resolve(*v83, (struct SystemEffectDescriptor *)v5);
          if ( v84 < 0 )
            break;
        }
        if ( (int)++v13 >= (int)v11 )
          goto LABEL_13;
      }
      v80 = (unsigned int)v84;
      v81 = 508LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v81,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)v80,
      v110);
    ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v130);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v117);
  }
LABEL_16:
  if ( !*((_QWORD *)v7 + 228) )
    goto LABEL_244;
  v14 = *((_QWORD *)v7 + 229);
  if ( *(_BYTE *)(v14 + 52) )
  {
    lpCriticalSection[0] = (LPCRITICAL_SECTION)(v14 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 56));
    v118 = (struct _RTL_CRITICAL_SECTION *)(v14 + 56);
    v5 = 0LL;
    v114 = 0LL;
    v15 = 0LL;
    v115 = 0LL;
    v16 = 0;
    v17 = 0;
    v112 = 0;
    if ( *(int *)(v14 + 40) > 0 )
    {
      v18 = 0LL;
      do
      {
        if ( v18 < 0 || v17 >= *(_DWORD *)(v14 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, v17);
          __debugbreak();
        }
        v19 = *(_QWORD *)(v14 + 32);
        v128 = v19;
        if ( (_DWORD)v15 == v16 )
        {
          if ( v16 )
          {
            v16 = 2 * (_DWORD)v15;
            if ( ((unsigned int)v15 & 0x40000000) != 0 )
              goto LABEL_166;
          }
          else
          {
            v16 = 1;
          }
          if ( v16 > 0x7FFFFFFuLL || (v20 = _o__recalloc(v5, v16, 16LL), (v5 = (__int64 *)v20) == 0LL) )
          {
LABEL_166:
            v85 = 2147942414LL;
            v86 = 502LL;
            goto LABEL_168;
          }
          HIDWORD(v115) = v16;
          v114 = (__int64 *)v20;
          v17 = v112;
          v19 = v128;
        }
        v21 = &v5[2 * (int)v15];
        if ( v21 )
        {
          *v21 = 0LL;
          v21[1] = 0LL;
          v22 = *(_QWORD *)(v18 + v19 + 8);
          if ( v22 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
            v16 = HIDWORD(v115);
            LODWORD(v15) = v115;
            v5 = v114;
          }
          *v21 = *(_QWORD *)(v18 + v19);
          v21[1] = *(_QWORD *)(v18 + v19 + 8);
        }
        v15 = (volatile signed __int32 *)(unsigned int)((_DWORD)v15 + 1);
        LODWORD(v115) = (_DWORD)v15;
        v112 = ++v17;
        v18 += 16LL;
      }
      while ( v17 < *(_DWORD *)(v14 + 40) );
    }
    v23 = 0LL;
    if ( (int)v15 <= 0 )
    {
LABEL_39:
      if ( v5 )
      {
        if ( (int)v15 > 0 )
        {
          ++v5;
          v23 = (unsigned int)v15;
          do
          {
            v15 = (volatile signed __int32 *)*v5;
            if ( *v5 && _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_173:
              (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v15);
            }
            v5 += 2;
            --v23;
          }
          while ( v23 );
          v5 = v114;
        }
        free(v5);
      }
      this = (CEndpointCharacteristics *)lpCriticalSection[0];
      if ( lpCriticalSection[0] )
        LeaveCriticalSection(lpCriticalSection[0]);
    }
    else
    {
      v24 = v5;
      while ( 1 )
      {
        if ( (int)v23 < 0 || (int)v23 >= (int)v15 )
        {
          ATL::_AtlRaiseException(0xC000008C, v17);
          goto LABEL_173;
        }
        if ( *(_BYTE *)(*v24 + 20) )
        {
          v87 = (SystemEffectChainDescriptor **)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                                                  &v114,
                                                  (unsigned int)v23);
          v88 = SystemEffectChainDescriptor::Resolve(*v87, (struct SystemEffectDescriptor *)v14);
          if ( v88 < 0 )
            break;
        }
        v23 = (unsigned int)(v23 + 1);
        v24 += 2;
        if ( (int)v23 >= (int)v15 )
          goto LABEL_39;
      }
      v85 = (unsigned int)v88;
      v86 = 508LL;
LABEL_168:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v86,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)v85,
        v110);
      ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::~CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>(&v114);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v118);
    }
  }
  if ( !*((_QWORD *)v7 + 19) )
    goto LABEL_244;
  v25 = (char *)*((_QWORD *)v7 + 20);
  v4 = v120;
LABEL_51:
  v26 = 0;
  v27 = *((_DWORD *)v25 + 2);
  if ( v27 <= 0 )
    goto LABEL_175;
  v28 = *(_QWORD *)v25;
  while ( 1 )
  {
    v29 = *(_QWORD *)(v28 + 16LL * v26) - v135.m256i_i64[0];
    if ( !v29 )
      v29 = *(_QWORD *)(v28 + 16LL * v26 + 8) - v135.m256i_i64[1];
    if ( !v29 )
      break;
    if ( ++v26 >= v27 )
      goto LABEL_175;
  }
  if ( v26 == -1 )
  {
LABEL_175:
    DefaultConnectorProcessingModeInternal = CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(
                                               (__int64)v7,
                                               &v139,
                                               0,
                                               0);
  }
  else
  {
    *(GUID *)v135.m256i_i8 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    DefaultConnectorProcessingModeInternal = (GUID *)&v135;
  }
  v31 = *DefaultConnectorProcessingModeInternal;
  *v4 = 0LL;
  *(_QWORD *)&Buf1 = &pv;
  *((_QWORD *)&Buf1 + 1) = 0LL;
  v132[0] = 1;
  *(GUID *)v135.m256i_i8 = v31;
  v32 = 0;
  while ( 1 )
  {
    v33 = qword_18017E3E0[2 * v32] - *(_QWORD *)&v31.Data1;
    if ( !v33 )
      v33 = qword_18017E3E0[2 * v32 + 1] - *(_QWORD *)v31.Data4;
    if ( !v33 )
      break;
    if ( ++v32 >= 0xA )
      goto LABEL_67;
  }
  v137 = PKEY_AudioEngine_SignalProcessingMode_Specific_ConnectorFormat;
  v138 = v32 + 2;
  memset(&v121, 0, sizeof(v121));
  if ( (*(int (__fastcall **)(_QWORD, __int128 *, struct tagPROPVARIANT *, _QWORD))(**((_QWORD **)v7 + 5) + 40LL))(
         *((_QWORD *)v7 + 5),
         &v137,
         &v121,
         *(_QWORD *)&v31.Data1) >= 0
    && v121.vt == 65
    && (unsigned int)IsValidWfxBlob(&v121) )
  {
    v89 = CloneWaveFormat((const struct tWAVEFORMATEX *)v121.bstrblobVal.pData, (struct tWAVEFORMATEX **)&Buf1 + 1);
    ProposedConnectorFormatForProcessingMode = v89;
    if ( v89 >= 0 )
    {
      PropVariantClear((PROPVARIANT *)&v121);
      ProposedConnectorFormatForProcessingMode = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x17A5,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v89,
        v110);
      PropVariantClear((PROPVARIANT *)&v121);
    }
    goto LABEL_88;
  }
  PropVariantClear((PROPVARIANT *)&v121);
LABEL_67:
  *(GUID *)v135.m256i_i8 = v31;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               v7,
                                               eHostProcessConnector,
                                               (struct _GUID *)&v135,
                                               (struct tWAVEFORMATEX **)&Buf1 + 1);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    if ( !*((_BYTE *)v7 + 9727) )
    {
      v34 = *((_QWORD *)v7 + 10);
      if ( v34 )
      {
        *(_OWORD *)v126 = 0LL;
        v127 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v34 + 40LL))(
               v34,
               &PKEY_AudioEndpoint_Disable_SysFx,
               v126) >= 0
          && LOWORD(v126[0]) == 19
          && LODWORD(v126[1]) )
        {
          PropVariantClear(v126);
          v36 = (char *)v7 + 168;
LABEL_75:
          v37 = *((_DWORD *)v36 + 2);
          if ( v37 )
          {
            v38 = 0;
            if ( v37 <= 0 )
              goto LABEL_81;
            while ( 1 )
            {
              v39 = (_QWORD *)(*(_QWORD *)v36 + 16LL * v38);
              v40 = *v39 - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
              if ( *v39 == *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1 )
                v40 = v39[1] - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
              if ( !v40 )
                break;
              if ( ++v38 >= v37 )
                goto LABEL_81;
            }
            if ( v38 == -1 )
            {
LABEL_81:
              v41 = 0;
              if ( v37 <= 0 )
                goto LABEL_185;
              while ( 1 )
              {
                v42 = (_QWORD *)(*(_QWORD *)v36 + 16LL * v41);
                v43 = *v42 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
                if ( *v42 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
                  v43 = v42[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
                if ( !v43 )
                  break;
                if ( ++v41 >= v37 )
                  goto LABEL_185;
              }
              if ( v41 == -1 )
LABEL_185:
                v44 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v36, 0LL);
              else
                v44 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            }
            else
            {
              v44 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
            }
          }
          else
          {
            v44 = GUID_00000000_0000_0000_0000_000000000000;
          }
          v135.m256i_i64[0] = (__int64)v7;
          v135.m256i_i32[2] = 0;
          *(GUID *)((char *)&v135.m256i_u64[1] + 4) = v44;
          Buf2 = *(_OWORD *)v135.m256i_i8;
          *(_OWORD *)v134 = *(_OWORD *)&v135.m256i_u64[2];
          ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
                                                       v7,
                                                       (__int64)&Buf2,
                                                       (__int64)&Buf1 + 8);
          goto LABEL_88;
        }
        PropVariantClear(v126);
      }
    }
    if ( !*((_QWORD *)v7 + 19) )
    {
      _o_terminate(v34);
LABEL_188:
      CoTaskMemFree(v45);
      goto LABEL_90;
    }
    v36 = (char *)*((_QWORD *)v7 + 20);
    goto LABEL_75;
  }
LABEL_88:
  if ( v132[0] )
  {
    v45 = *(void **)Buf1;
    *(_QWORD *)Buf1 = *((_QWORD *)&Buf1 + 1);
    if ( v45 )
      goto LABEL_188;
  }
LABEL_90:
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    v5 = (__int64 *)pv;
    v46 = (unsigned __int16 *)pv;
    *v4 = 30000LL;
    *(GUID *)v135.m256i_i8 = v31;
    v47 = (unsigned __int64 *)((char *)v7 + 1856);
    if ( *((_QWORD *)v7 + 232) )
    {
      v48 = (__int64 *)*((_QWORD *)v7 + 233);
      v49 = 0;
      v50 = *((_DWORD *)v48 + 4);
      if ( v50 <= 0 )
        goto LABEL_93;
      v90 = *v48;
      while ( 1 )
      {
        v91 = *(_QWORD *)(v90 + 16LL * v49) - v135.m256i_i64[0];
        if ( !v91 )
          v91 = *(_QWORD *)(v90 + 16LL * v49 + 8) - v135.m256i_i64[1];
        if ( !v91 )
          break;
        if ( ++v49 >= v50 )
          goto LABEL_93;
      }
      if ( v49 == -1 )
      {
LABEL_93:
        *(GUID *)lpCriticalSection = v31;
        v51 = lpCriticalSection;
      }
      else
      {
        v92 = gsl::span<CAudioSignalProcessingModeMap,-1>::operator[](v47, 0LL);
        *(GUID *)v135.m256i_i8 = v31;
        v93 = 0;
        v94 = *(_DWORD *)(v92 + 16);
        if ( v94 <= 0 )
          goto LABEL_202;
        while ( 1 )
        {
          v95 = (_QWORD *)(*(_QWORD *)v92 + 16LL * v93);
          v96 = *v95 - v135.m256i_i64[0];
          if ( *v95 == v135.m256i_i64[0] )
            v96 = v95[1] - v135.m256i_i64[1];
          if ( !v96 )
            break;
          if ( ++v93 >= v94 )
            goto LABEL_202;
        }
        if ( v93 == -1 )
        {
LABEL_202:
          v97 = GUID_00000000_0000_0000_0000_000000000000;
        }
        else
        {
          if ( v93 < 0 || v93 >= v94 )
          {
            ATL::_AtlRaiseException(0xC000008C, 0);
            __debugbreak();
          }
          v97 = *(GUID *)(*(_QWORD *)(v92 + 8) + 16LL * v93);
        }
        v130 = v97;
        v51 = (LPCRITICAL_SECTION *)&v130;
        v5 = (__int64 *)pv;
      }
      v52 = *(GUID *)v51;
      v130 = v52;
      v53 = *(struct _RTL_CRITICAL_SECTION **)&v52.Data1;
      v117 = *(struct _RTL_CRITICAL_SECTION **)&v52.Data1;
      v54 = *(_QWORD *)&v52.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      v55 = *(_QWORD *)v52.Data4;
      if ( *(_QWORD *)&v52.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v54 = *(_QWORD *)v52.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( !v54 )
      {
        v130 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v53 = *(struct _RTL_CRITICAL_SECTION **)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        v117 = *(struct _RTL_CRITICAL_SECTION **)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        v55 = *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      }
      v56 = (_QWORD *)*((_QWORD *)v7 + 28);
      v57 = (_QWORD *)*((_QWORD *)v7 + 29);
      if ( v56 != v57 )
      {
        while ( 1 )
        {
          v58 = (_QWORD *)*v56;
          v59 = *(_QWORD *)*v56 - (_QWORD)v53;
          if ( !v59 )
            v59 = v58[1] - v55;
          if ( !v59 )
          {
            p_LockCount = (struct _RTL_CRITICAL_SECTION *)v58[2];
            v118 = p_LockCount;
            v61 = (struct _RTL_CRITICAL_SECTION *)v58[3];
            v113 = v61;
            if ( p_LockCount != v61 )
              break;
          }
LABEL_241:
          if ( ++v56 == v57 )
            goto LABEL_139;
        }
        v62 = v61;
        while ( 1 )
        {
          DebugInfo = p_LockCount->DebugInfo;
          v64 = *(unsigned __int16 **)&DebugInfo->Type;
          if ( v46 )
          {
            if ( v64 )
            {
              v65 = *v46;
              v66 = v46[8];
              if ( (_WORD)v65 == 0xFFFE )
              {
                if ( v66 == 22 )
                  goto LABEL_108;
                v98 = *((_QWORD *)v46 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                if ( !v98 )
                  v98 = *((_QWORD *)v46 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                if ( !v98 )
                  goto LABEL_108;
                v99 = *((_QWORD *)v46 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                if ( !v99 )
                  v99 = *((_QWORD *)v46 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                if ( !v99 )
                {
LABEL_108:
                  Buf1 = *(_OWORD *)v46;
                  *(_OWORD *)v132 = *((_OWORD *)v46 + 1);
                  *(_QWORD *)&v132[16] = *((_QWORD *)v46 + 4);
                  *(_WORD *)v132 = 22;
                  v67 = *(_DWORD *)&v132[4];
                  v68 = Buf1;
                  goto LABEL_109;
                }
LABEL_238:
                v62 = v113;
                goto LABEL_239;
              }
              if ( v66 && (((_WORD)v65 - 1) & 0xFFFD) != 0 )
                goto LABEL_238;
              v100 = v46[1];
              if ( (unsigned __int16)(v100 - 1) > 1u )
                goto LABEL_238;
              v101 = v46[7];
              if ( ((v101 - 8) & 0xFFE7) != 0 )
                goto LABEL_238;
              Buf1 = *(_OWORD *)v46;
              v68 = -2;
              LOWORD(Buf1) = -2;
              *(_WORD *)v132 = 22;
              *(_WORD *)&v132[2] = v101;
              *(GUID *)&v132[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
              *(_DWORD *)&v132[8] = v65;
              v67 = (v100 == 1) + 3;
              *(_DWORD *)&v132[4] = v67;
LABEL_109:
              v69 = *v64;
              v70 = v64[8];
              if ( (_WORD)v69 == 0xFFFE )
              {
                if ( v70 != 22 )
                {
                  v102 = *((_QWORD *)v64 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
                  if ( !v102 )
                    v102 = *((_QWORD *)v64 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
                  if ( v102 )
                  {
                    v103 = *((_QWORD *)v64 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
                    if ( !v103 )
                      v103 = *((_QWORD *)v64 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
                    if ( v103 )
                      goto LABEL_238;
                  }
                }
                Buf2 = *(_OWORD *)v64;
                *(_OWORD *)v134 = *((_OWORD *)v64 + 1);
                *(_QWORD *)&v134[16] = *((_QWORD *)v64 + 4);
                v71 = *(_DWORD *)&v134[4];
                v72 = Buf2;
              }
              else
              {
                if ( v70 && (((_WORD)v69 - 1) & 0xFFFD) != 0 )
                  goto LABEL_238;
                v104 = v64[1];
                if ( (unsigned __int16)(v104 - 1) > 1u )
                  goto LABEL_238;
                v105 = v64[7];
                v72 = -2;
                if ( ((v105 - 8) & 0xFFE7) != 0 )
                  goto LABEL_238;
                Buf2 = *(_OWORD *)v64;
                LOWORD(Buf2) = -2;
                *(_WORD *)&v134[2] = v105;
                *(GUID *)&v134[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
                *(_DWORD *)&v134[8] = v69;
                v71 = (v104 == 1) + 3;
                *(_DWORD *)&v134[4] = v71;
              }
              *(_WORD *)v134 = 22;
              if ( WORD1(Buf1) )
              {
                v73 = WORD1(Buf2);
              }
              else
              {
                v73 = 0;
                WORD1(Buf2) = 0;
                DWORD2(Buf2) = 0;
                WORD6(Buf2) = 0;
              }
              if ( DWORD1(Buf1) )
              {
                v74 = DWORD1(Buf2);
              }
              else
              {
                v74 = 0;
                *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
              }
              if ( HIWORD(Buf1) )
              {
                v75 = HIWORD(Buf2);
              }
              else
              {
                v75 = 0;
                HIDWORD(Buf2) = 0;
              }
              if ( !v67 )
              {
                v71 = 0;
                *(_DWORD *)&v134[4] = 0;
              }
              if ( !v68 )
              {
                v72 = 0;
                LOWORD(Buf2) = 0;
              }
              if ( !v73 )
              {
                WORD1(Buf1) = 0;
                DWORD2(Buf1) = 0;
                WORD6(Buf1) = 0;
              }
              if ( !v74 )
                *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
              if ( !v75 )
                HIDWORD(Buf1) = 0;
              if ( !v71 )
                *(_DWORD *)&v132[4] = 0;
              if ( !v72 )
                LOWORD(Buf1) = 0;
              v76 = *(_QWORD *)&v132[8] - *(_QWORD *)&v134[8];
              if ( *(_QWORD *)&v132[8] == *(_QWORD *)&v134[8] )
                v76 = *(_QWORD *)&v132[16] - *(_QWORD *)&v134[16];
              if ( !v76 && !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
              {
LABEL_136:
                v77 = (unsigned int)(int)((double)SLODWORD(DebugInfo->ProcessLocksList.Flink)
                                        * 10000000.0
                                        / (double)*((int *)v46 + 1)
                                        + 0.5);
                if ( v77 >= *v120 )
                  v77 = *v120;
                *v120 = v77;
                break;
              }
              goto LABEL_238;
            }
          }
          else if ( !v64 )
          {
            goto LABEL_136;
          }
LABEL_239:
          p_LockCount = (struct _RTL_CRITICAL_SECTION *)&v118->LockCount;
          v118 = p_LockCount;
          if ( p_LockCount == v62 )
          {
            v55 = *(_QWORD *)v130.Data4;
            v53 = v117;
            v57 = (_QWORD *)*((_QWORD *)v7 + 29);
            goto LABEL_241;
          }
        }
      }
LABEL_139:
      pv = 0LL;
      if ( v5 )
        CoTaskMemFree(v5);
      v5 = v129;
      if ( !v129 )
        return 0LL;
      v6 = v119;
LABEL_147:
      if ( !v6 )
        goto LABEL_245;
      *v5 = 100000LL;
      return 0LL;
    }
    _o_terminate(v47);
    __debugbreak();
    goto LABEL_244;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E80,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)ProposedConnectorFormatForProcessingMode,
    v110);
  wistd::unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<SpatialAudioEncoderDescriptor,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E3C,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)ProposedConnectorFormatForProcessingMode,
    v111);
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
