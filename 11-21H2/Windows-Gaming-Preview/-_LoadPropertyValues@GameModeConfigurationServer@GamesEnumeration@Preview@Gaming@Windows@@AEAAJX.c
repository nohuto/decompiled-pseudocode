/*
 * XREFs of ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003ECE4
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002CD3C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x18002D630 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18003E2A0 (-RuntimeClassInitialize@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180018984 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z @ 0x180018CD0 (-GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z.c)
 *     ?GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800194E4 (-GetRelatedProcessesFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$C.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x18003E9DC (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x18003FCA4 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     ?GetCachedVariantState@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180040908 (-GetCachedVariantState@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@AEA.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA?AW4Variant_AutoGameMode@@W4VariantReportingKind@3@_N@Z @ 0x180040A74 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180040D84 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutoGameMode@@@details@wil@@QEAAX_NW4Repo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this)
{
  __int64 FirstGameConfig; // rbx
  __int64 v3; // rdx
  bool v4; // zf
  __int64 *v5; // rcx
  __int64 v6; // rax
  HSTRING v7; // rcx
  const wchar_t *StringRawBuffer; // rax
  unsigned int v9; // ebx
  __int64 v10; // r15
  __int64 *v11; // rsi
  __int64 v12; // rcx
  int RelatedProcessesFromGameConfigStore; // eax
  int NullableInt; // ebx
  __int64 v15; // rdx
  __int64 (__fastcall ***v16)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v17)(_QWORD, GUID *, char *); // r14
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned int v38; // r14d
  unsigned int v39; // esi
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct _GUID v43; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 (__fastcall ***v45)(_QWORD, GUID *, char *); // [rsp+80h] [rbp+40h] BYREF
  unsigned int v46; // [rsp+88h] [rbp+48h] BYREF
  UINT32 length; // [rsp+90h] [rbp+50h] BYREF
  HSTRING string; // [rsp+98h] [rbp+58h] BYREF

  FirstGameConfig = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                      this,
                      0LL);
  v3 = *(_QWORD *)(FirstGameConfig + 16);
  v4 = (*(_DWORD *)(v3 + 32) & 0x80) == 0;
  *((_BYTE *)this + 96) = (*(_DWORD *)(v3 + 32) & 0x80) != 0;
  if ( v4 )
  {
    LOBYTE(v3) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
      v3);
    LODWORD(v45) = 0;
    v5 = (__int64 *)*((_QWORD *)this + 8);
    v6 = *v5;
    v43 = *(struct _GUID *)FirstGameConfig;
    if ( (*(int (__fastcall **)(__int64 *, struct _GUID *, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(v6 + 112))(
           v5,
           &v43,
           17LL,
           &v45) >= 0
      && !(_DWORD)v45 )
    {
      string = 0LL;
      WindowsDeleteString(0LL);
      string = 0LL;
      v43 = *(struct _GUID *)FirstGameConfig;
      if ( (int)GetStringPropertyFromGameConfigStore(*((__int64 **)this + 8), (__int128 *)&v43, 15LL, &string) >= 0 )
      {
        v7 = string;
        if ( !string )
        {
LABEL_13:
          WindowsDeleteString(v7);
          goto LABEL_14;
        }
        StringRawBuffer = WindowsGetStringRawBuffer(string, &length);
        if ( StringRawBuffer )
        {
          if ( length )
          {
            v9 = wcstoul(StringRawBuffer, 0LL, 10);
            if ( v9 - 1 <= 0xFFFFFFFD )
            {
              wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::GetCachedVariantState(
                &`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl,
                &v43);
              if ( v9 == *(_DWORD *)&v43.Data2
                && (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutoGameMode>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_AutoGameMode>::GetImpl'::`2'::impl) == 1 )
              {
                *((_BYTE *)this + 96) = 1;
              }
            }
          }
        }
      }
      v7 = string;
      goto LABEL_13;
    }
  }
LABEL_14:
  v10 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(this, 0LL);
  *((_BYTE *)this + 160) = (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 32LL) & 0x100) == 0;
  v11 = (__int64 *)((char *)this + 104);
  v12 = *((_QWORD *)this + 13);
  if ( v12 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v45 = 0LL;
  v43 = *(struct _GUID *)v10;
  RelatedProcessesFromGameConfigStore = GetRelatedProcessesFromGameConfigStore(
                                          *((__int64 **)this + 8),
                                          (__int128 *)&v43,
                                          (__int64 *)&v45);
  NullableInt = RelatedProcessesFromGameConfigStore;
  if ( RelatedProcessesFromGameConfigStore < 0 )
  {
    v15 = 368LL;
    goto LABEL_22;
  }
  v16 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v45;
  v17 = **v45;
  v18 = *v11;
  if ( *v11 )
  {
    *v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  RelatedProcessesFromGameConfigStore = v17(v16, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, (char *)this + 104);
  NullableInt = RelatedProcessesFromGameConfigStore;
  if ( RelatedProcessesFromGameConfigStore < 0 )
  {
    v15 = 370LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)RelatedProcessesFromGameConfigStore);
    v19 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v45;
    if ( v45 )
    {
      v45 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v19)[2])(v19);
    }
    return (unsigned int)NullableInt;
  }
  v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v45;
  if ( v45 )
  {
    v45 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v21)[2])(v21);
  }
  v22 = (__int64 *)*((_QWORD *)this + 8);
  LODWORD(v45) = 0;
  length = 4;
  v23 = *v22;
  v43 = *(struct _GUID *)v10;
  v24 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, char *), UINT32 *))(v23 + 64))(
          v22,
          &v43,
          19LL,
          &v45,
          &length);
  NullableInt = v24;
  if ( v24 >= 0 )
  {
    v38 = (unsigned int)v45 >> 16;
    v39 = (unsigned int)v45 >> 8;
    NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                    v25,
                    (__int64 *)this + 14,
                    (unsigned int)v45 >> 24);
    if ( NullableInt < 0 )
    {
      v37 = 387LL;
      goto LABEL_47;
    }
    NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                    v40,
                    (__int64 *)this + 15,
                    (unsigned __int8)v38);
    if ( NullableInt < 0 )
    {
      v37 = 388LL;
      goto LABEL_47;
    }
    NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                    v41,
                    (__int64 *)this + 16,
                    (unsigned __int8)v39);
    if ( NullableInt < 0 )
    {
      v37 = 389LL;
      goto LABEL_47;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v24);
    if ( (_WORD)NullableInt != 2 )
    {
      v37 = 386LL;
      goto LABEL_47;
    }
    v26 = *((_QWORD *)this + 14);
    if ( v26 )
    {
      *((_QWORD *)this + 14) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = *((_QWORD *)this + 15);
    if ( v27 )
    {
      *((_QWORD *)this + 15) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = *((_QWORD *)this + 16);
    if ( v28 )
    {
      *((_QWORD *)this + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  v46 = 0;
  v29 = (__int64 *)*((_QWORD *)this + 8);
  LODWORD(v45) = 4;
  v30 = *v29;
  v43 = *(struct _GUID *)v10;
  v31 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, unsigned int *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(v30 + 64))(
          v29,
          &v43,
          20LL,
          &v46,
          &v45);
  NullableInt = v31;
  if ( v31 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14C,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v31);
  if ( (_WORD)NullableInt != 2 )
  {
    if ( NullableInt >= 0 )
    {
      NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                      v32,
                      (__int64 *)this + 17,
                      v46);
      if ( NullableInt >= 0 )
        goto LABEL_40;
      v37 = 401LL;
    }
    else
    {
      v37 = 400LL;
    }
LABEL_47:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v37,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)NullableInt);
    return (unsigned int)NullableInt;
  }
  v33 = *((_QWORD *)this + 17);
  if ( v33 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
LABEL_40:
  v43 = *(struct _GUID *)v10;
  NullableInt = GetGameCpuMask(
                  *((struct ExecutionModel::IGameConfigStore **)this + 8),
                  &v43,
                  (unsigned int *)&v45,
                  &length);
  if ( (_WORD)NullableInt == 2 )
  {
    v35 = *((_QWORD *)this + 18);
    if ( v35 )
    {
      *((_QWORD *)this + 18) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    v36 = *((_QWORD *)this + 19);
    if ( v36 )
    {
      *((_QWORD *)this + 19) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    return 0LL;
  }
  if ( NullableInt < 0 )
  {
    v37 = 414LL;
    goto LABEL_47;
  }
  NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                  v34,
                  (__int64 *)this + 18,
                  (unsigned int)v45);
  if ( NullableInt < 0 )
  {
    v37 = 415LL;
    goto LABEL_47;
  }
  NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                  v42,
                  (__int64 *)this + 19,
                  length);
  if ( NullableInt < 0 )
  {
    v37 = 416LL;
    goto LABEL_47;
  }
  return 0LL;
}
