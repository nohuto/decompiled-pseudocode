/*
 * XREFs of ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002D68C
 * Callers:
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x18002DF60 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002E270 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x1800102C0 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013470 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013F80 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180018D84 (-SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePrope.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180018E3C (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z @ 0x18001908C (-GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z.c)
 *     ?_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@Wrappers@WRL@Microsoft@@0_N@Z @ 0x18002D60C (-_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@W.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIGamesListInfo@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18002EE04 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJPEBGPEAPEAUIStorageFile@Storage@5@@Z @ 0x18002EE7C (-_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJP.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800307D0 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18003195C (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 *     ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x18003F13C (-GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGame.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x18003F5E0 (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003F96C (-_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Win.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003FA9C (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ??$emplace@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@1@@Z @ 0x180041BEC (--$emplace@AEAU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@-$_Tr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct _GUID *a2,
        _QWORD *a3,
        __int64 **a4)
{
  const struct ExecutionModel::GameConfig *v6; // rbx
  HSTRING *v7; // rdi
  __int64 v8; // rdx
  int PackageFamilyName; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **v12; // rdi
  __int64 **v13; // r12
  __int64 *v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rcx
  HSTRING *v18; // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rdx
  int GamesListProperties; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  HSTRING v26; // rdi
  int LaunchParameters; // eax
  int StringPropertyFromGameConfigStore; // eax
  int v29; // eax
  HSTRING v30; // rcx
  __int64 v31; // rdx
  const unsigned __int16 *StringRawBuffer; // rax
  int StorageFileForFilePath; // eax
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **v34; // rsi
  int v35; // eax
  __int64 *v36; // rcx
  int v37; // eax
  wil::details::in1diag3 *v38; // rcx
  __int64 v39; // rdx
  HSTRING v40; // rax
  __int64 (__fastcall ***v41)(_QWORD, GUID *, HSTRING *); // rcx
  int v42; // eax
  wil::details::in1diag3 *v43; // rcx
  __int64 v44; // rdx
  HSTRING v45; // rbx
  __int64 (__fastcall *v46)(HSTRING, HSTRING *); // rsi
  HSTRING v47; // rcx
  __int64 *v48; // rcx
  int v49; // eax
  wil::details::in1diag3 *v50; // rcx
  __int64 v51; // rdx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v52; // rbx
  int PropertyValues; // eax
  __int64 v54; // r9
  __int64 v55; // rdx
  int v56; // eax
  char v57; // [rsp+30h] [rbp-59h]
  HSTRING string; // [rsp+38h] [rbp-51h] BYREF
  HSTRING v59[2]; // [rsp+40h] [rbp-49h] BYREF
  struct _GUID v60; // [rsp+50h] [rbp-39h] BYREF
  struct _GUID v61; // [rsp+60h] [rbp-29h] BYREF
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **v62; // [rsp+70h] [rbp-19h]
  struct _GUID v63; // [rsp+80h] [rbp-9h] BYREF
  _QWORD *v64; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  *(_QWORD *)&v63.Data1 = a4;
  v64 = a3;
  v6 = (const struct ExecutionModel::GameConfig *)*a3;
  v7 = (HSTRING *)((char *)this + 160);
  if ( *(_DWORD *)(*a3 + 20LL) != 2 )
  {
    if ( *v7 )
    {
      v8 = 631LL;
      goto LABEL_18;
    }
    goto LABEL_12;
  }
  if ( !*v7 )
  {
    v8 = 615LL;
LABEL_18:
    v10 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    goto LABEL_19;
  }
  WindowsDeleteString(0LL);
  string = 0LL;
  PackageFamilyName = GetPackageFamilyName(v6, &string);
  if ( PackageFamilyName < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      620LL,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)PackageFamilyName);
  if ( string )
  {
    if ( !Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AreStringsEqual(v7, &string, 1u) )
    {
      v10 = -2147024891;
      v11 = 627LL;
      goto LABEL_8;
    }
    WindowsDeleteString(string);
    a4 = *(__int64 ***)&v63.Data1;
LABEL_12:
    v12 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)((char *)this + 272);
    v62 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)((char *)this + 272);
    v13 = (__int64 **)((char *)this + 280);
    if ( *((_QWORD *)this + 34) && *v13 )
    {
      v57 = 1;
      v60 = *a2;
      if ( Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(*v12, &v60) )
        return 0LL;
    }
    else
    {
      v57 = 0;
      v15 = a4[1];
      if ( v15 )
        _InterlockedIncrement((volatile signed __int32 *)v15 + 2);
      v16 = a4[1];
      v17 = *a4;
      *(_QWORD *)&v60.Data1 = *v13;
      *v13 = v17;
      *(_QWORD *)v60.Data4 = *((_QWORD *)this + 36);
      *((_QWORD *)this + 36) = v16;
      std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)&v60);
    }
    v18 = (HSTRING *)((char *)this + 152);
    if ( *((_QWORD *)this + 19) )
    {
      v60 = *a2;
      v19 = SetStringPropertyToGameConfigStore(*v13, (__int128 *)&v60, 0xFu, (HSTRING *)this + 19);
      v20 = retaddr;
      if ( v19 >= 0 )
        goto LABEL_41;
      v21 = 665LL;
      goto LABEL_40;
    }
    WindowsDeleteString(*v18);
    *v18 = 0LL;
    v60 = *a2;
    if ( (int)GetStringPropertyFromGameConfigStore(*v13, (__int128 *)&v60, 15LL, (HSTRING *)this + 19) < 0 || !*v18 )
    {
LABEL_41:
      v26 = 0LL;
      *(_QWORD *)&v60.Data1 = 0LL;
      if ( v57 )
      {
        WindowsDeleteString(0LL);
        *(_QWORD *)&v60.Data1 = 0LL;
        LaunchParameters = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
                             (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)((char *)this + 16),
                             (HSTRING *)&v60);
        if ( LaunchParameters < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            696LL,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)LaunchParameters);
        v26 = *(HSTRING *)&v60.Data1;
      }
      if ( !*((_QWORD *)this + 37) && !v26 )
      {
        if ( v57 )
        {
          string = 0LL;
          WindowsDeleteString(0LL);
          string = 0LL;
          v61 = *a2;
          StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                                *v13,
                                                (__int128 *)&v61,
                                                25LL,
                                                &string);
          v10 = StringPropertyFromGameConfigStore;
          if ( StringPropertyFromGameConfigStore < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F1,
              (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)StringPropertyFromGameConfigStore);
LABEL_52:
            WindowsDeleteString(string);
LABEL_94:
            WindowsDeleteString(v26);
            return v10;
          }
          v59[0] = 0LL;
          WindowsDeleteString(0LL);
          v59[0] = 0LL;
          v61 = *a2;
          v29 = GetStringPropertyFromGameConfigStore(*v13, (__int128 *)&v61, 26LL, v59);
          v10 = v29;
          if ( v29 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F8,
              (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v29);
            WindowsDeleteString(v59[0]);
            v59[0] = 0LL;
            goto LABEL_52;
          }
          v30 = string;
          if ( string || v59[0] )
          {
            v31 = *((_QWORD *)this + 37);
            if ( v31 )
            {
              *((_QWORD *)this + 37) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
              v30 = string;
            }
            if ( v30 )
            {
              StringRawBuffer = WindowsGetStringRawBuffer(v30, 0LL);
              StorageFileForFilePath = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath(
                                         StringRawBuffer,
                                         (struct Windows::Storage::IStorageFile **)this + 37);
              if ( StorageFileForFilePath < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  768LL,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                  (const char *)(unsigned int)StorageFileForFilePath);
            }
            v34 = v62;
            v35 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
                    *v62,
                    (const struct Microsoft::WRL::Wrappers::HString *)&string,
                    (const struct Microsoft::WRL::Wrappers::HString *)v59);
            if ( v35 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                771LL,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)(unsigned int)v35);
          }
          else
          {
            v34 = v62;
          }
          WindowsDeleteString(v59[0]);
          v59[0] = 0LL;
          WindowsDeleteString(string);
LABEL_87:
          v52 = *v34;
          if ( v57 )
          {
            v63 = *a2;
            if ( *(_OWORD *)&v63 != 0LL && *v64 && *((_QWORD *)v52 + 11) )
            {
              std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::emplace<_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>(
                (char *)v52 + 80,
                &v64,
                &v63,
                v64);
              PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues(v52);
              if ( PropertyValues < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  82LL,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
                  (const char *)(unsigned int)PropertyValues);
LABEL_93:
              v10 = 0;
              goto LABEL_94;
            }
            v10 = -2147024809;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4E,
              (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
              (const char *)0x80070057LL);
            v54 = 2147942487LL;
            v55 = 779LL;
          }
          else
          {
            if ( v52 )
            {
              *v34 = 0LL;
              Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v52);
            }
            v56 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,std::shared_ptr<ExecutionModel::IGameConfigStore> const &>(
                    v34,
                    a2,
                    v64,
                    *(_QWORD *)&v63.Data1);
            v10 = v56;
            if ( v56 >= 0 )
              goto LABEL_93;
            v54 = (unsigned int)v56;
            v55 = 787LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v55,
            (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)v54);
          goto LABEL_94;
        }
LABEL_86:
        v34 = v62;
        goto LABEL_87;
      }
      v36 = *v13;
      v61 = *a2;
      if ( v26 )
      {
        v37 = SetStringPropertyToGameConfigStore(v36, (__int128 *)&v61, 0x1Au, (HSTRING *)&v60);
        v38 = retaddr;
        if ( v37 >= 0 )
          goto LABEL_70;
        v39 = 708LL;
      }
      else
      {
        v37 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, const WCHAR *, int))(*v36 + 72))(
                v36,
                &v61,
                26LL,
                &word_180058540,
                2);
        v38 = retaddr;
        if ( v37 >= 0 )
          goto LABEL_70;
        v39 = 715LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v38,
        v39,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v37);
LABEL_70:
      v40 = 0LL;
      string = 0LL;
      v41 = (__int64 (__fastcall ***)(_QWORD, GUID *, HSTRING *))*((_QWORD *)this + 37);
      if ( !v41 )
        goto LABEL_79;
      v59[0] = 0LL;
      v42 = (**v41)(v41, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, v59);
      v43 = retaddr;
      if ( v42 >= 0 )
      {
        v45 = v59[0];
        v46 = *(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v59[0] + 96LL);
        WindowsDeleteString(string);
        string = 0LL;
        v42 = v46(v45, &string);
        v43 = retaddr;
        if ( v42 >= 0 )
        {
LABEL_76:
          v47 = v59[0];
          if ( v59[0] )
          {
            v59[0] = 0LL;
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v47 + 16LL))(v47);
          }
          v40 = string;
LABEL_79:
          v48 = *v13;
          v61 = *a2;
          if ( v40 )
          {
            v49 = SetStringPropertyToGameConfigStore(v48, (__int128 *)&v61, 0x19u, &string);
            v50 = retaddr;
            if ( v49 < 0 )
            {
              v51 = 734LL;
LABEL_84:
              wil::details::in1diag3::_Log_Hr(
                v50,
                v51,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)(unsigned int)v49);
            }
          }
          else
          {
            v49 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, __int64, const WCHAR *, int))(*v48 + 72))(
                    v48,
                    &v61,
                    25LL,
                    &word_180058540,
                    2);
            v50 = retaddr;
            if ( v49 < 0 )
            {
              v51 = 742LL;
              goto LABEL_84;
            }
          }
          WindowsDeleteString(string);
          goto LABEL_86;
        }
        v44 = 724LL;
      }
      else
      {
        v44 = 722LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v43,
        v44,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v42);
      goto LABEL_76;
    }
    if ( !*((_QWORD *)this + 32) || !*((_QWORD *)this + 30) )
    {
LABEL_37:
      if ( v57 )
      {
        v19 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
                *v12,
                15LL,
                (char *)this + 152);
        v20 = retaddr;
        if ( v19 < 0 )
        {
          v21 = 688LL;
LABEL_40:
          wil::details::in1diag3::_Log_Hr(
            v20,
            v21,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v19);
          goto LABEL_41;
        }
      }
      goto LABEL_41;
    }
    *(_QWORD *)&v60.Data1 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            this,
                            (struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo **)&v60);
    v23 = retaddr;
    if ( GamesListProperties >= 0 )
    {
      GamesListProperties = (*(__int64 (__fastcall **)(_QWORD, HSTRING))(**(_QWORD **)&v60.Data1 + 72LL))(
                              *(_QWORD *)&v60.Data1,
                              *v18);
      v23 = retaddr;
      if ( GamesListProperties >= 0 )
        goto LABEL_35;
      v24 = 682LL;
    }
    else
    {
      v24 = 680LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v23,
      v24,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
LABEL_35:
    v25 = *(_QWORD *)&v60.Data1;
    if ( *(_QWORD *)&v60.Data1 )
    {
      *(_QWORD *)&v60.Data1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    goto LABEL_37;
  }
  v10 = -2147024809;
  v11 = 622LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v10);
  WindowsDeleteString(string);
LABEL_19:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x282,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v10);
  return v10;
}
