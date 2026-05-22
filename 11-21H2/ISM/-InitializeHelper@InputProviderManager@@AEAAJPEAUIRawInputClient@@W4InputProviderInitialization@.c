/*
 * XREFs of ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003545C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18002792C (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z @ 0x180047BD0 (-DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x18007FF60 (--0DeviceInputHost@@AEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x1800356B8 (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18004B560 (IsGetMPCInputPostProcessorPresent.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InjectionRawInputProvider@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D068 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InjectionRawInputProvider@@@details@wil@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D0EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAAEAUInputProvider@@$$QEAU2@@Z @ 0x1800B4A4C (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 *     ?GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z @ 0x1800B4C54 (-GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DockInputProcessing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B4CC4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DockInputProcessing@@@details@wil@@QEAAX_.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputProviderManager::InitializeHelper(__int64 a1, __int64 a2, int a3, const char *a4)
{
  const char *v7; // r9
  int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v11; // r9
  __int64 *v12; // rbx
  __int64 *v13; // r14
  __int64 v14; // rsi
  int v15; // eax
  __int128 v16; // xmm0
  _OWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 *v20; // rdx
  _DWORD *v21; // rbx
  int v22; // eax
  __int128 v23; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v24[3]; // [rsp+30h] [rbp-D0h] BYREF
  bool v25; // [rsp+48h] [rbp-B8h]
  _DWORD v26[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  char v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall *v28)(struct IRawInputClient *, __int64, struct IRawInputProvider **); // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  bool v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+74h] [rbp-8Ch]
  __int64 (__fastcall *v32)(struct IRawInputClient *, __int64, struct IRawInputProvider **, const char *); // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  bool v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+94h] [rbp-6Ch]
  __int64 (__fastcall *v36)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  bool v38; // [rsp+B0h] [rbp-50h]
  int v39; // [rsp+B4h] [rbp-4Ch]
  int v40; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v41)(struct IRawInputClient *, __int64, struct IRawInputProvider **); // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  char v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D4h] [rbp-2Ch]
  __int64 (__fastcall *v45)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  char v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F4h] [rbp-Ch]
  __int64 v49; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  if ( !ISMScenarios::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismscenarios.cpp",
      a4);
  if ( *(_DWORD *)ISMScenarios::s_instance )
  {
    if ( *(_DWORD *)ISMScenarios::s_instance == 1 )
    {
      v24[1] = (__int64)RIMRawInputProvider::Create;
      v24[2] = 262123LL;
      if ( !ISMTestMode::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x21,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
          a4);
      v25 = *(_BYTE *)ISMTestMode::s_instance == 0;
      v26[0] = 0;
      v26[1] = GetRIMRawInputProviderSpecific(1LL);
      v21 = v26;
      do
      {
        if ( IsEdition(*(_QWORD *)(v21 - 3)) && *((_BYTE *)v21 - 4) && *v21 == a3 )
        {
          v24[0] = 0LL;
          Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(v24);
          v22 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v21 - 5))(a2, (unsigned int)v21[1], v24);
          if ( v22 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xAB,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\manager\\lib\\inputprovidermanager.cpp",
              (const char *)(unsigned int)v22,
              v23);
          v23 = *(_OWORD *)(v21 - 3);
          std::vector<InputProvider>::emplace_back<InputProvider>(a1, &v23);
          Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(v24);
        }
        v21 += 8;
      }
      while ( v21 - 5 != (_DWORD *)&v27 );
    }
  }
  else
  {
    v28 = GameControllerRawInputProvider::Create;
    v29 = 262123LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        a4);
    v30 = *(_BYTE *)ISMTestMode::s_instance == 0;
    v31 = 0LL;
    v32 = MPCRawInputProvider::Create;
    v33 = 262123LL;
    v34 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(retaddr) != 0;
    v35 = 0LL;
    v36 = RIMRawInputProvider::Create;
    v37 = 262123LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        v7);
    v38 = *(_BYTE *)ISMTestMode::s_instance == 0;
    v39 = 0;
    v8 = 0;
    if ( IsEdition(0x3DDA1uLL) )
    {
      LOBYTE(v9) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DockInputProcessing>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DockInputProcessing>::GetImpl'::`2'::impl,
        v9);
      v8 = 1048640;
    }
    LOBYTE(v9) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
      v9);
    v40 = v8 | ((unsigned __int8)IsGetMPCInputPostProcessorPresent(v10) != 0 ? 25728 : 16512);
    v41 = LampArrayRawInputProvider::Create;
    v42 = 262123LL;
    v43 = 1;
    v44 = 0LL;
    v45 = InjectionRawInputProvider::Create;
    v46 = 262123LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        v11);
    if ( !*(_BYTE *)ISMTestMode::s_instance )
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_InjectionRawInputProvider>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_InjectionRawInputProvider>::GetImpl'::`2'::impl,
        0LL);
    v47 = 0;
    v48 = 0LL;
    v12 = &v29;
    do
    {
      v13 = v12;
      v14 = *v12;
      if ( !InitOnceExecuteOnce(&gInitOnce, (PINIT_ONCE_FN)InitEditionOnceCallback, 0LL, 0LL) )
        __fastfail(7u);
      if ( _bittest64(&v14, gdwDeviceFamily) && *((_BYTE *)v12 + 8) && *((_DWORD *)v12 + 3) == a3 )
      {
        v24[0] = 0LL;
        v15 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))*(v12 - 1))(a2, *((unsigned int *)v12 + 4), v24);
        if ( v15 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x90,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\manager\\lib\\inputprovidermanager.cpp",
            (const char *)(unsigned int)v15,
            v23);
        v16 = *(_OWORD *)v12;
        v23 = *(_OWORD *)v12;
        v17 = *(_OWORD **)(a1 + 8);
        if ( v17 == *(_OWORD **)(a1 + 16) )
        {
          std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(a1, v17, &v23);
          v18 = v24[0];
        }
        else
        {
          *v17 = v16;
          v20 = (__int64 *)(v17 + 1);
          *v20 = 0LL;
          if ( v20 == v24 )
          {
            v18 = v24[0];
          }
          else
          {
            *v20 = v24[0];
            v18 = 0LL;
          }
          *(_QWORD *)(a1 + 8) += 24LL;
        }
        if ( v18 )
        {
          v24[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
      }
      v12 += 4;
    }
    while ( v13 + 3 != &v49 );
  }
  return 0LL;
}
