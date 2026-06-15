/*
 * XREFs of ?CreateDriverEffectPackConfiguration@EffectPackConfiguration@@SAJPEAUIPropertyStore@@0AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x18002598C
 * Callers:
 *     ?CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics@@PEBU_tlgProvider_t@@AEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180024FF0 (-CreateDriverEffectPackInstance@EffectPack@@SAJPEAUIPropertyStore@@0PEAVCEndpointCharacteristics.c)
 * Callees:
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017908 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180022BF0 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 *     ??0EffectPackConfiguration@@QEAA@U_GUID@@@Z @ 0x180025550 (--0EffectPackConfiguration@@QEAA@U_GUID@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18002B64C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18002C970 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002EC18 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800314FC (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18003CF74 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EffectPackConfiguration::CreateDriverEffectPackConfiguration(
        __int64 a1,
        struct IPropertyStore *a2,
        _QWORD *a3)
{
  struct IPropertyStore *v3; // r13
  char *v5; // rax
  std::_Ref_count_base *v6; // rbx
  __int64 v7; // r14
  unsigned __int8 v8; // r15
  int Configuration; // eax
  unsigned int v10; // esi
  unsigned int v12; // eax
  __int64 v13; // rsi
  HRESULT v14; // eax
  unsigned int v15; // r14d
  PROPVARIANT *i; // rsi
  GUID *p_pclsid; // r15
  char *v18; // rax
  __int64 v19; // r12
  int v20; // r13d
  __int64 v21; // rcx
  int j; // r14d
  __int64 v23; // r11
  unsigned int v24; // eax
  __int64 v25; // rsi
  HRESULT v26; // eax
  unsigned int v27; // r14d
  __int64 v28; // rax
  CAudioSignalProcessingModeArray *v29; // rax
  int v30; // eax
  unsigned int v31; // r14d
  __int64 v32; // [rsp+20h] [rbp-B8h] BYREF
  int v33; // [rsp+28h] [rbp-B0h]
  int v34; // [rsp+2Ch] [rbp-ACh]
  __int64 v35; // [rsp+30h] [rbp-A8h]
  struct IPropertyStore *v36; // [rsp+38h] [rbp-A0h]
  char *v37; // [rsp+40h] [rbp-98h]
  struct _GUID v38; // [rsp+50h] [rbp-88h] BYREF
  _QWORD *v39; // [rsp+60h] [rbp-78h]
  GUID pclsid; // [rsp+68h] [rbp-70h] BYREF
  PROPVARIANT pvar[2]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v42; // [rsp+88h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v39 = a3;
  v3 = a2;
  v36 = a2;
  v5 = (char *)operator new(0x768uLL);
  v6 = (std::_Ref_count_base *)v5;
  v37 = v5;
  if ( v5 )
  {
    *(_OWORD *)v5 = 0LL;
    *((_DWORD *)v5 + 2) = 1;
    *((_DWORD *)v5 + 3) = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj2<EffectPackConfiguration>::`vftable';
    v38 = (struct _GUID)DRIVER_APO_EFFECTPACK_ID;
    EffectPackConfiguration::EffectPackConfiguration((EffectPackConfiguration *)(v5 + 16), &v38);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = (__int64)v6 + 16;
  *(_QWORD *)&v38.Data1 = (char *)v6 + 16;
  *(_QWORD *)v38.Data4 = v6;
  if ( v6 == (std::_Ref_count_base *)-16LL )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x277,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
      (const char *)0x8007000ELL,
      v32);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)0xFFFFFFFFFFFFFFF0LL);
    return 2147942414LL;
  }
  if ( !v3 || g_bIsGlobalDisableThirdPartyEnhancements )
    goto LABEL_13;
  v32 = 0LL;
  v33 = 0;
  v34 = 0;
  v8 = 0;
  *(_OWORD *)pvar = 0LL;
  v42 = 0LL;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(
         a1,
         &PKEY_Constrained_APO_ProcessingMode_List_For_Streaming,
         pvar) < 0
    || LOWORD(pvar[0]) != 4127
    || (v12 = (unsigned int)pvar[1]) == 0 )
  {
LABEL_8:
    PropVariantClear(pvar);
    Configuration = EffectPackConfiguration::ReadConfiguration(v7, (__int64)v3, v3, ((v8 ^ 1) << 6) | 0x781u);
    v10 = Configuration;
    if ( Configuration < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A4,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)Configuration,
        v32);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v32);
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
      return v10;
    }
    if ( v8 )
    {
      pvar[0] = (PROPVARIANT)0x100000000LL;
      LODWORD(pvar[1]) = 3;
      for ( i = pvar; i != (PROPVARIANT *)((char *)&pvar[1] + 4); i = (PROPVARIANT *)((char *)i + 4) )
      {
        pclsid.Data1 = 0;
        *(_DWORD *)&pclsid.Data2 = 1;
        *(_DWORD *)pclsid.Data4 = 2;
        p_pclsid = &pclsid;
        v18 = (char *)*(int *)i;
        v37 = v18;
        while ( p_pclsid != (GUID *)&pclsid.Data4[4] )
        {
          v19 = 32 * (p_pclsid->Data1 + 3LL * (_QWORD)v18);
          v20 = *(_DWORD *)(v19 + v7 + 1328);
          v21 = *(_QWORD *)(v19 + v7 + 1336);
          v35 = v21;
          if ( v20 )
          {
            for ( j = v20 - 1; j >= 0; --j )
            {
              if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                                   &v32,
                                   v21 + 16LL * j) == -1 )
              {
                memcpy_0((void *)v23, (const void *)(v23 + 16), 16LL * (unsigned int)(v20 - j - 1));
                --v20;
              }
              v21 = v35;
            }
            v7 = (__int64)v6 + 16;
            *(_DWORD *)((char *)v6 + v19 + 1344) = v20;
          }
          p_pclsid = (GUID *)((char *)p_pclsid + 4);
          v18 = v37;
        }
      }
      v3 = v36;
    }
    *(_OWORD *)pvar = 0LL;
    v42 = 0LL;
    if ( ((int (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))v3->lpVtbl->GetValue)(
           v3,
           &PKEY_APO_SWFallback_ProcessingModes,
           pvar) >= 0
      && LOWORD(pvar[0]) == 4127 )
    {
      v24 = (unsigned int)pvar[1];
      if ( LODWORD(pvar[1]) )
      {
        v25 = 0LL;
        while ( (unsigned int)v25 < v24 )
        {
          v26 = CLSIDFromString(*(LPCOLESTR *)(v42 + 8 * v25), &pclsid);
          v27 = v26;
          if ( v26 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2CA,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
              (const char *)(unsigned int)v26,
              v32);
            PropVariantClear(pvar);
            ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v32);
            if ( v6 )
              std::_Ref_count_base::_Decref(v6);
            return v27;
          }
          v28 = *(_QWORD *)&pclsid.Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
          if ( *(_QWORD *)&pclsid.Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
            v28 = *(_QWORD *)pclsid.Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
          if ( v28 )
          {
            v29 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                                       (char *)v6 + 1880,
                                                       0LL);
            v30 = CAudioSignalProcessingModeArray::AddMultiple(v29, 1u, &pclsid);
            v31 = v30;
            if ( v30 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2CE,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
                (const char *)(unsigned int)v30,
                v32);
              PropVariantClear(pvar);
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v32);
              if ( v6 )
                std::_Ref_count_base::_Decref(v6);
              return v31;
            }
          }
          v25 = (unsigned int)(v25 + 1);
          v24 = (unsigned int)pvar[1];
        }
      }
    }
    PropVariantClear(pvar);
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v32);
LABEL_13:
    std::shared_ptr<std::function<void (void)>>::operator=(v39, (__int64 *)&v38);
    if ( *(_QWORD *)v38.Data4 )
      std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)v38.Data4);
    return 0LL;
  }
  v8 = 1;
  v13 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v13 >= v12 )
    {
      v7 = (__int64)v6 + 16;
      v3 = v36;
      goto LABEL_8;
    }
    v14 = CLSIDFromString(*(LPCOLESTR *)(v42 + 8 * v13), &pclsid);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x28A,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
        (const char *)(unsigned int)v14,
        v32);
      PropVariantClear(pvar);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v32);
      if ( v6 )
        std::_Ref_count_base::_Decref(v6);
      return v15;
    }
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&v32, &pclsid) )
      break;
    v13 = (unsigned int)(v13 + 1);
    v12 = (unsigned int)pvar[1];
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x28B,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpack.cpp",
    (const char *)0x8007000ELL,
    v32);
  PropVariantClear(pvar);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v32);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return 2147942414LL;
}
