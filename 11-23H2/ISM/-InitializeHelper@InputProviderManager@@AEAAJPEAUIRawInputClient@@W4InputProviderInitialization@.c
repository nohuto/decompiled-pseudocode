/*
 * XREFs of ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003589C
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x18004DBFC (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ?DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z @ 0x180051F60 (-DeferredInitializeStatic@OneCoreUAPInputHost@@SAJPEAX_NPEAU_FILETIME@@@Z.c)
 *     ??0DeviceInputHost@@AEAA@XZ @ 0x180096EB4 (--0DeviceInputHost@@AEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180035818 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x180035AE4 (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x180057408 (IsGetMPCInputPostProcessorPresent.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAA?A_T$$QEAUInputProvider@@@Z @ 0x1800CDA70 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 *     ?GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z @ 0x1800CDABC (-GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputProviderManager::InitializeHelper(__int64 a1, __int64 a2, int a3, const char *a4)
{
  const char *v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rcx
  const char *v12; // r9
  __int64 *v13; // rbx
  __int64 *v14; // r15
  __int64 v15; // rdi
  int v16; // eax
  __int128 v17; // xmm0
  _OWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 *v21; // rdx
  _DWORD *v22; // rbx
  int v23; // eax
  __int128 v24; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v25[3]; // [rsp+30h] [rbp-D0h] BYREF
  bool v26; // [rsp+48h] [rbp-B8h]
  _DWORD v27[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  char v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall *v29)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  bool v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+74h] [rbp-8Ch]
  int (*v33)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  bool v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+94h] [rbp-6Ch]
  __int64 (__fastcall *v37)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  bool v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+B4h] [rbp-4Ch]
  int v41; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v42)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  char v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D4h] [rbp-2Ch]
  __int64 (__fastcall *v46)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  char v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F4h] [rbp-Ch]
  __int64 v50; // [rsp+100h] [rbp+0h] BYREF
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
      v25[1] = (__int64)RIMRawInputProvider::Create;
      v25[2] = 262123LL;
      if ( !ISMTestMode::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x21,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
          a4);
      v26 = *(_BYTE *)ISMTestMode::s_instance == 0;
      v27[0] = 0;
      v27[1] = GetRIMRawInputProviderSpecific(1LL);
      v22 = v27;
      do
      {
        if ( IsEdition(*(_QWORD *)(v22 - 3)) && *((_BYTE *)v22 - 4) && *v22 == a3 )
        {
          v25[0] = 0LL;
          Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v25);
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v22 - 5))(a2, (unsigned int)v22[1], v25);
          if ( v23 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xA8,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\manager\\lib\\inputprovidermanager.cpp",
              (const char *)(unsigned int)v23,
              v24);
          v24 = *(_OWORD *)(v22 - 3);
          std::vector<InputProvider>::emplace_back<InputProvider>(a1, &v24);
          Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v25);
        }
        v22 += 8;
      }
      while ( v22 - 5 != (_DWORD *)&v28 );
    }
  }
  else
  {
    v29 = GameControllerRawInputProvider::Create;
    v30 = 262123LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        a4);
    v31 = *(_BYTE *)ISMTestMode::s_instance == 0;
    v32 = 0LL;
    v33 = MPCRawInputProvider::Create;
    v34 = 262123LL;
    v35 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(retaddr) != 0;
    v36 = 0LL;
    v37 = RIMRawInputProvider::Create;
    v38 = 262123LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        v7);
    v39 = *(_BYTE *)ISMTestMode::s_instance == 0;
    v40 = 0;
    v10 = 0;
    if ( IsEdition(0x3DDA1uLL) )
      v10 = 1048640;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
      1u,
      v8,
      v9);
    v41 = v10 | ((unsigned __int8)IsGetMPCInputPostProcessorPresent(v11) != 0 ? 25728 : 16512);
    v42 = LampArrayRawInputProvider::Create;
    v43 = 262123LL;
    v44 = 1;
    v45 = 0LL;
    v46 = InjectionRawInputProvider::Create;
    v47 = 262123LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        v12);
    v48 = 0;
    v49 = 0LL;
    v13 = &v30;
    do
    {
      v14 = v13;
      v15 = *v13;
      if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
        __fastfail(7u);
      if ( _bittest64(&v15, gdwDeviceFamily) && *((_BYTE *)v13 + 8) && *((_DWORD *)v13 + 3) == a3 )
      {
        v25[0] = 0LL;
        v16 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64 *))*(v13 - 1))(a2, *((unsigned int *)v13 + 4), v25);
        if ( v16 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x8D,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\manager\\lib\\inputprovidermanager.cpp",
            (const char *)(unsigned int)v16,
            v24);
        v17 = *(_OWORD *)v13;
        v24 = *(_OWORD *)v13;
        v18 = *(_OWORD **)(a1 + 8);
        if ( v18 == *(_OWORD **)(a1 + 16) )
        {
          std::vector<InputProvider>::_Emplace_reallocate<InputProvider>(a1, v18, &v24);
          v19 = v25[0];
        }
        else
        {
          *v18 = v17;
          v21 = (__int64 *)(v18 + 1);
          *v21 = 0LL;
          if ( v21 == v25 )
          {
            v19 = v25[0];
          }
          else
          {
            *v21 = v25[0];
            v19 = 0LL;
          }
          *(_QWORD *)(a1 + 8) += 24LL;
        }
        if ( v19 )
        {
          v25[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
      }
      v13 += 4;
    }
    while ( v14 + 3 != &v50 );
  }
  return 0LL;
}
