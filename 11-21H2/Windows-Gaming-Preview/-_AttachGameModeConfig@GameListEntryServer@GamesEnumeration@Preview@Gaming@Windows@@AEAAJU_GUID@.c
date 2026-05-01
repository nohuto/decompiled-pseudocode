/*
 * XREFs of ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002CD3C
 * Callers:
 *     ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x18002D630 (-AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV-$map.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002D930 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x180010110 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012F00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800188CC (-SetStringPropertyToGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePrope.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180018984 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z @ 0x180018B64 (-GetPackageFamilyName@@YAJPEBUGameConfig@ExecutionModel@@PEAPEAUHSTRING__@@@Z.c)
 *     ?_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@Wrappers@WRL@Microsoft@@0_N@Z @ 0x18002CCBC (-_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@W.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIGamesListInfo@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18002E5D4 (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJPEBGPEAPEAUIStorageFile@Storage@5@@Z @ 0x18002E64C (-_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJP.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002FFC0 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ??$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Details@WRL@Microsoft@@YAJPEAPEAVGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180031148 (--$MakeAndInitialize@VGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@V1234.c)
 *     ?GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGameConfig@ExecutionModel@@U_GUID@@@Z @ 0x18003E36C (-GetGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAPEBUGame.c)
 *     ?SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJAEBVHString@Wrappers@WRL@Microsoft@@0@Z @ 0x18003E828 (-SetGameLaunchInfoOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003EBB4 (-_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Win.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003ECE4 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ??$emplace@AEAU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@1@@Z @ 0x180040E6C (--$emplace@AEAU_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@-$_Tr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct _GUID *a2,
        _QWORD *a3,
        __int64 *a4)
{
  const struct ExecutionModel::GameConfig *v6; // rbx
  HSTRING *v7; // rdi
  __int64 v8; // rdx
  int PackageFamilyName; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  char v12; // si
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rdx
  int GamesListProperties; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  HSTRING v24; // rdi
  int LaunchParameters; // eax
  _QWORD *v26; // rsi
  char v27; // al
  int StringPropertyFromGameConfigStore; // eax
  int v29; // eax
  HSTRING v30; // rcx
  __int64 (__fastcall ***v31)(_QWORD, GUID *, HSTRING *); // rdx
  const unsigned __int16 *StringRawBuffer; // rax
  int StorageFileForFilePath; // eax
  int v34; // eax
  __int64 v35; // rbx
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
  int PropertyValues; // eax
  __int64 v53; // r9
  __int64 v54; // rdx
  int v55; // eax
  char v56; // [rsp+30h] [rbp-39h]
  HSTRING string; // [rsp+38h] [rbp-31h] BYREF
  HSTRING v58[2]; // [rsp+40h] [rbp-29h] BYREF
  struct _GUID v59; // [rsp+50h] [rbp-19h] BYREF
  struct _GUID v60; // [rsp+60h] [rbp-9h] BYREF
  _QWORD *v61; // [rsp+70h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  *(_QWORD *)&v60.Data1 = a4;
  v61 = a3;
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
    a4 = *(__int64 **)&v60.Data1;
LABEL_12:
    if ( *((_QWORD *)this + 34) && *((_QWORD *)this + 35) )
    {
      v12 = 1;
      v56 = 1;
      v59 = *a2;
      if ( Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetGameConfig(
             *((Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)this + 34),
             &v59) )
      {
        return 0LL;
      }
    }
    else
    {
      v12 = 0;
      v56 = 0;
      v14 = a4[1];
      if ( v14 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        v14 = a4[1];
      }
      v15 = *a4;
      *(_QWORD *)&v59.Data1 = *((_QWORD *)this + 35);
      *((_QWORD *)this + 35) = v15;
      *(_QWORD *)v59.Data4 = *((_QWORD *)this + 36);
      *((_QWORD *)this + 36) = v14;
      std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)&v59);
    }
    v16 = (_QWORD *)((char *)this + 152);
    if ( *((_QWORD *)this + 19) )
    {
      v59 = *a2;
      v17 = SetStringPropertyToGameConfigStore(*((__int64 **)this + 35), (__int128 *)&v59, 0xFu, (HSTRING *)this + 19);
      v18 = retaddr;
      if ( v17 >= 0 )
        goto LABEL_41;
      v19 = 665LL;
      goto LABEL_40;
    }
    WindowsDeleteString(0LL);
    *((_QWORD *)this + 19) = 0LL;
    v59 = *a2;
    if ( (int)GetStringPropertyFromGameConfigStore(
                *((__int64 **)this + 35),
                (__int128 *)&v59,
                15LL,
                (HSTRING *)this + 19) < 0
      || !*v16 )
    {
LABEL_41:
      v24 = 0LL;
      *(_QWORD *)&v59.Data1 = 0LL;
      if ( v12 )
      {
        WindowsDeleteString(0LL);
        *(_QWORD *)&v59.Data1 = 0LL;
        LaunchParameters = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
                             (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)((char *)this + 16),
                             (HSTRING *)&v59);
        if ( LaunchParameters < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            696LL,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)LaunchParameters);
        v24 = *(HSTRING *)&v59.Data1;
      }
      v26 = (_QWORD *)((char *)this + 296);
      if ( !*((_QWORD *)this + 37) && !v24 )
      {
        v27 = v56;
        if ( v56 )
        {
          string = 0LL;
          WindowsDeleteString(0LL);
          string = 0LL;
          v60 = *a2;
          StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                                *((__int64 **)this + 35),
                                                (__int128 *)&v60,
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
LABEL_92:
            WindowsDeleteString(v24);
            return v10;
          }
          v58[0] = 0LL;
          WindowsDeleteString(0LL);
          v58[0] = 0LL;
          v60 = *a2;
          v29 = GetStringPropertyFromGameConfigStore(*((__int64 **)this + 35), (__int128 *)&v60, 26LL, v58);
          v10 = v29;
          if ( v29 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2F8,
              (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              (const char *)(unsigned int)v29);
            WindowsDeleteString(v58[0]);
            v58[0] = 0LL;
            goto LABEL_52;
          }
          v30 = string;
          if ( string || v58[0] )
          {
            v31 = (__int64 (__fastcall ***)(_QWORD, GUID *, HSTRING *))*v26;
            if ( *v26 )
            {
              *v26 = 0LL;
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, HSTRING *)))(*v31)[2])(v31);
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
            v34 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::SetGameLaunchInfoOnGameConfigs(
                    *((Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer **)this + 34),
                    (const struct Microsoft::WRL::Wrappers::HString *)&string,
                    (const struct Microsoft::WRL::Wrappers::HString *)v58);
            if ( v34 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                771LL,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)(unsigned int)v34);
          }
          WindowsDeleteString(v58[0]);
          v58[0] = 0LL;
          WindowsDeleteString(string);
          v35 = *((_QWORD *)this + 34);
          goto LABEL_86;
        }
LABEL_85:
        v35 = *((_QWORD *)this + 34);
        if ( !v27 )
        {
          if ( v35 )
          {
            *((_QWORD *)this + 34) = 0LL;
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v35);
          }
          v55 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer,_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,std::shared_ptr<ExecutionModel::IGameConfigStore> const &>(
                  (char *)this + 272,
                  a2,
                  v61,
                  *(_QWORD *)&v60.Data1);
          v10 = v55;
          if ( v55 >= 0 )
            goto LABEL_91;
          v53 = (unsigned int)v55;
          v54 = 787LL;
          goto LABEL_99;
        }
LABEL_86:
        v60 = *a2;
        if ( *(_OWORD *)&v60 != 0LL && *v61 && *(_QWORD *)(v35 + 88) )
        {
          std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::emplace<_GUID &,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>(
            v35 + 80,
            &v61,
            &v60,
            v61);
          PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues((Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)v35);
          if ( PropertyValues < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              82LL,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
              (const char *)(unsigned int)PropertyValues);
LABEL_91:
          v10 = 0;
          goto LABEL_92;
        }
        v10 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4E,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)0x80070057LL);
        v53 = 2147942487LL;
        v54 = 779LL;
LABEL_99:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v54,
          (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)v53);
        goto LABEL_92;
      }
      v36 = (__int64 *)*((_QWORD *)this + 35);
      *(struct _GUID *)v58 = *a2;
      if ( v24 )
      {
        v37 = SetStringPropertyToGameConfigStore(v36, (__int128 *)v58, 0x1Au, (HSTRING *)&v59);
        v38 = retaddr;
        if ( v37 >= 0 )
          goto LABEL_69;
        v39 = 708LL;
      }
      else
      {
        v37 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *, __int64, const WCHAR *, int))(*v36 + 72))(
                v36,
                v58,
                26LL,
                &word_180057440,
                2);
        v38 = retaddr;
        if ( v37 >= 0 )
          goto LABEL_69;
        v39 = 715LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v38,
        v39,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v37);
LABEL_69:
      v40 = 0LL;
      string = 0LL;
      v41 = (__int64 (__fastcall ***)(_QWORD, GUID *, HSTRING *))*v26;
      if ( !*v26 )
        goto LABEL_78;
      v58[0] = 0LL;
      v42 = (**v41)(v41, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, v58);
      v43 = retaddr;
      if ( v42 >= 0 )
      {
        v45 = v58[0];
        v46 = *(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v58[0] + 96LL);
        WindowsDeleteString(string);
        string = 0LL;
        v42 = v46(v45, &string);
        v43 = retaddr;
        if ( v42 >= 0 )
        {
LABEL_75:
          v47 = v58[0];
          if ( v58[0] )
          {
            v58[0] = 0LL;
            (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v47 + 16LL))(v47);
          }
          v40 = string;
LABEL_78:
          v48 = (__int64 *)*((_QWORD *)this + 35);
          *(struct _GUID *)v58 = *a2;
          if ( v40 )
          {
            v49 = SetStringPropertyToGameConfigStore(v48, (__int128 *)v58, 0x19u, &string);
            v50 = retaddr;
            if ( v49 < 0 )
            {
              v51 = 734LL;
LABEL_83:
              wil::details::in1diag3::_Log_Hr(
                v50,
                v51,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                (const char *)(unsigned int)v49);
            }
          }
          else
          {
            v49 = (*(__int64 (__fastcall **)(__int64 *, HSTRING *, __int64, const WCHAR *, int))(*v48 + 72))(
                    v48,
                    v58,
                    25LL,
                    &word_180057440,
                    2);
            v50 = retaddr;
            if ( v49 < 0 )
            {
              v51 = 742LL;
              goto LABEL_83;
            }
          }
          WindowsDeleteString(string);
          v27 = v56;
          goto LABEL_85;
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
      goto LABEL_75;
    }
    if ( !*((_QWORD *)this + 32) || !*((_QWORD *)this + 30) )
    {
LABEL_37:
      if ( v12 )
      {
        v17 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
                *((_QWORD *)this + 34),
                15LL,
                (char *)this + 152);
        v18 = retaddr;
        if ( v17 < 0 )
        {
          v19 = 688LL;
LABEL_40:
          wil::details::in1diag3::_Log_Hr(
            v18,
            v19,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
            (const char *)(unsigned int)v17);
          goto LABEL_41;
        }
      }
      goto LABEL_41;
    }
    *(_QWORD *)&v59.Data1 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            this,
                            (struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo **)&v59);
    v21 = retaddr;
    if ( GamesListProperties >= 0 )
    {
      GamesListProperties = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&v59.Data1 + 72LL))(
                              *(_QWORD *)&v59.Data1,
                              *v16);
      v21 = retaddr;
      if ( GamesListProperties >= 0 )
        goto LABEL_35;
      v22 = 682LL;
    }
    else
    {
      v22 = 680LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v21,
      v22,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
LABEL_35:
    v23 = *(_QWORD *)&v59.Data1;
    if ( *(_QWORD *)&v59.Data1 )
    {
      *(_QWORD *)&v59.Data1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
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
