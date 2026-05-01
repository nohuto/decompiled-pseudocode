/*
 * XREFs of ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003FA9C
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002D68C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x18002DF60 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18003F070 (-RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180013090 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180018E3C (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z @ 0x1800191F8 (-GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z.c)
 *     ?GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800199F8 (-GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$C.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x18003F794 (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x180040AB4 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18004172C (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x1800418B0 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800418F8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  __int64 FirstGameConfig; // rbx
  __int64 v3; // rdx
  bool v4; // zf
  unsigned int v5; // r8d
  __int64 *v6; // rcx
  __int64 v7; // rax
  HSTRING v8; // rcx
  const wchar_t *StringRawBuffer; // rax
  unsigned int v10; // ebx
  __int64 v11; // r14
  __int64 *v12; // rsi
  __int64 v13; // rcx
  int RelatedProcessesFromGameConfigStore; // eax
  int NullableInt; // ebx
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v18)(_QWORD, GUID *, char *); // r15
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v22)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  unsigned int v39; // r15d
  unsigned int v40; // esi
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  int v44; // [rsp+30h] [rbp-50h]
  unsigned int v45; // [rsp+40h] [rbp-40h] BYREF
  int v46; // [rsp+44h] [rbp-3Ch] BYREF
  char v47; // [rsp+48h] [rbp-38h]
  HSTRING string[2]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v49[4]; // [rsp+60h] [rbp-20h] BYREF
  int v50; // [rsp+64h] [rbp-1Ch]
  _BYTE v51[8]; // [rsp+68h] [rbp-18h] BYREF
  struct _GUID v52; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  __int64 (__fastcall ***v54)(_QWORD, GUID *, char *); // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v55; // [rsp+C8h] [rbp+48h] BYREF
  UINT32 length; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v57; // [rsp+D8h] [rbp+58h] BYREF

  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      this,
                      0LL);
  v3 = *(_QWORD *)(FirstGameConfig + 16);
  v4 = (*(_DWORD *)(v3 + 32) & 0x80) == 0;
  *((_BYTE *)this + 96) = (*(_DWORD *)(v3 + 32) & 0x80) != 0;
  if ( v4 )
  {
    v5 = `wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl;
    if ( (`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl & 4) == 0 )
    {
      v54 = *(__int64 (__fastcall ****)(_QWORD, GUID *, char *))wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedFeatureEnabledState(
                                                                  &`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
                                                                  v51);
      v5 = (unsigned int)v54;
    }
    v46 = 0;
    v47 = 3;
    wil::details::ReportUsageToService(
      (volatile signed __int32 *)&unk_180064FD8,
      0xA8161Eu,
      (v5 >> 10) & 1,
      (v5 >> 11) & 1,
      (__int64)&v46,
      1u,
      v44);
    LODWORD(v54) = 0;
    v6 = (__int64 *)*((_QWORD *)this + 8);
    v7 = *v6;
    *(_OWORD *)string = *(_OWORD *)FirstGameConfig;
    if ( (*(int (__fastcall **)(__int64 *, HSTRING *, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(v7 + 112))(
           v6,
           string,
           17LL,
           &v54) >= 0
      && !(_DWORD)v54 )
    {
      string[0] = 0LL;
      WindowsDeleteString(0LL);
      string[0] = 0LL;
      v52 = *(struct _GUID *)FirstGameConfig;
      if ( (int)GetStringPropertyFromGameConfigStore(*((__int64 **)this + 8), (__int128 *)&v52, 15LL, string) >= 0 )
      {
        v8 = string[0];
        if ( !string[0] )
        {
LABEL_15:
          WindowsDeleteString(v8);
          goto LABEL_16;
        }
        StringRawBuffer = WindowsGetStringRawBuffer(string[0], &length);
        if ( StringRawBuffer )
        {
          if ( length )
          {
            v10 = wcstoul(StringRawBuffer, 0LL, 10);
            if ( v10 - 1 <= 0xFFFFFFFD )
            {
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
                &`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
                v49);
              if ( v10 == v50
                && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl) == 1 )
              {
                *((_BYTE *)this + 96) = 1;
              }
            }
          }
        }
      }
      v8 = string[0];
      goto LABEL_15;
    }
  }
LABEL_16:
  v11 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(this, 0LL);
  *((_BYTE *)this + 160) = (*(_DWORD *)(*(_QWORD *)(v11 + 16) + 32LL) & 0x100) == 0;
  v12 = (__int64 *)((char *)this + 104);
  v13 = *((_QWORD *)this + 13);
  if ( v13 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v54 = 0LL;
  v52 = *(struct _GUID *)v11;
  RelatedProcessesFromGameConfigStore = GetRelatedProcessesFromGameConfigStore(
                                          *((__int64 **)this + 8),
                                          (__int128 *)&v52,
                                          (__int64 *)&v54);
  NullableInt = RelatedProcessesFromGameConfigStore;
  if ( RelatedProcessesFromGameConfigStore < 0 )
  {
    v16 = 368LL;
    goto LABEL_24;
  }
  v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v54;
  v18 = **v54;
  v19 = *v12;
  if ( *v12 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  RelatedProcessesFromGameConfigStore = v18(v17, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, (char *)this + 104);
  NullableInt = RelatedProcessesFromGameConfigStore;
  if ( RelatedProcessesFromGameConfigStore < 0 )
  {
    v16 = 370LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)RelatedProcessesFromGameConfigStore);
    v20 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v54;
    if ( v54 )
    {
      v54 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v20)[2])(v20);
    }
    return (unsigned int)NullableInt;
  }
  v22 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v54;
  if ( v54 )
  {
    v54 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v22)[2])(v22);
  }
  v23 = (__int64 *)*((_QWORD *)this + 8);
  LODWORD(v54) = 0;
  length = 4;
  v24 = *v23;
  v52 = *(struct _GUID *)v11;
  v25 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *), UINT32 *))(v24 + 64))(
          v23,
          &v52,
          19LL,
          &v54,
          &length);
  NullableInt = v25;
  if ( v25 >= 0 )
  {
    v39 = (unsigned int)v54 >> 16;
    v40 = (unsigned int)v54 >> 8;
    NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                    v26,
                    (__int64 *)this + 14,
                    (unsigned int)v54 >> 24);
    if ( NullableInt < 0 )
    {
      v38 = 387LL;
      goto LABEL_49;
    }
    NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                    v41,
                    (__int64 *)this + 15,
                    (unsigned __int8)v39);
    if ( NullableInt < 0 )
    {
      v38 = 388LL;
      goto LABEL_49;
    }
    NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                    v42,
                    (__int64 *)this + 16,
                    (unsigned __int8)v40);
    if ( NullableInt < 0 )
    {
      v38 = 389LL;
      goto LABEL_49;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v25);
    if ( (_WORD)NullableInt != 2 )
    {
      v38 = 386LL;
      goto LABEL_49;
    }
    v27 = *((_QWORD *)this + 14);
    if ( v27 )
    {
      *((_QWORD *)this + 14) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = *((_QWORD *)this + 15);
    if ( v28 )
    {
      *((_QWORD *)this + 15) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = *((_QWORD *)this + 16);
    if ( v29 )
    {
      *((_QWORD *)this + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
  }
  v55 = 0;
  v30 = (__int64 *)*((_QWORD *)this + 8);
  LODWORD(v54) = 4;
  v31 = *v30;
  v52 = *(struct _GUID *)v11;
  v32 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, unsigned int *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(v31 + 64))(
          v30,
          &v52,
          20LL,
          &v55,
          &v54);
  NullableInt = v32;
  if ( v32 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v32);
  if ( (_WORD)NullableInt != 2 )
  {
    if ( NullableInt >= 0 )
    {
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v33,
                      (__int64 *)this + 17,
                      v55);
      if ( NullableInt >= 0 )
        goto LABEL_42;
      v38 = 401LL;
    }
    else
    {
      v38 = 400LL;
    }
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)NullableInt);
    return (unsigned int)NullableInt;
  }
  v34 = *((_QWORD *)this + 17);
  if ( v34 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
LABEL_42:
  v52 = *(struct _GUID *)v11;
  NullableInt = GetGameCpuMask(*((struct ExecutionModel::IGameConfigStore **)this + 8), &v52, &v57, &v45);
  if ( (_WORD)NullableInt == 2 )
  {
    v36 = *((_QWORD *)this + 18);
    if ( v36 )
    {
      *((_QWORD *)this + 18) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    v37 = *((_QWORD *)this + 19);
    if ( v37 )
    {
      *((_QWORD *)this + 19) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    return 0LL;
  }
  if ( NullableInt < 0 )
  {
    v38 = 414LL;
    goto LABEL_49;
  }
  NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                  v35,
                  (__int64 *)this + 18,
                  v57);
  if ( NullableInt < 0 )
  {
    v38 = 415LL;
    goto LABEL_49;
  }
  NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                  v43,
                  (__int64 *)this + 19,
                  v45);
  if ( NullableInt < 0 )
  {
    v38 = 416LL;
    goto LABEL_49;
  }
  return 0LL;
}
