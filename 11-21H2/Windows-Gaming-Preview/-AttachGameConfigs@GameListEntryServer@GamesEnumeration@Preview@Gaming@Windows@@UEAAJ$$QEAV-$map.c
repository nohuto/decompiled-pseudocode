/*
 * XREFs of ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x18002D630
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x180010110 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012F00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002CD3C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x18002D540 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ??0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180032C10 (--0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003ECE4 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ??4?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180040854 (--4-$map@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfigs(
        __int64 a1,
        __int64 ***a2,
        __int64 *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // r15
  __int64 v10; // rdx
  volatile signed __int64 *v11; // rcx
  char v12; // r12
  __int64 *j; // rbx
  int v14; // eax
  unsigned int v15; // esi
  __int64 **v16; // rax
  __int64 *i; // rax
  __int64 *v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  int PropertyValues; // eax
  signed __int64 v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  signed __int32 v29; // eax
  __int64 v30; // r8
  int v31[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+28h] [rbp-40h]
  struct _GUID v33; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !a2[1] )
  {
    v6 = -2147024809;
    v7 = 821LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !*a3 )
  {
    v6 = -2147467261;
    v7 = 822LL;
    goto LABEL_3;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v11 = *(volatile signed __int64 **)(a1 + 248);
  if ( v11 && *(_QWORD *)(a1 + 256) )
  {
    v12 = 1;
    j = **a2;
    while ( !*((_BYTE *)j + 25) )
    {
      v33 = (struct _GUID)*((_OWORD *)j + 2);
      v14 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(
              (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
              &v33,
              j + 6,
              a3);
      v15 = v14;
      if ( v14 < 0 )
      {
        v19 = (unsigned int)v14;
        v20 = 848LL;
        goto LABEL_31;
      }
      v16 = (__int64 **)j[2];
      if ( *((_BYTE *)v16 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v18 = *v16;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v18 + 25); v18 = (__int64 *)*v18 )
          j = v18;
      }
    }
    goto LABEL_46;
  }
  v12 = 0;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 248) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v11);
  }
  *(_QWORD *)(a1 + 248) = 0LL;
  v21 = (Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)operator new(
                                                                                     0xD0uLL,
                                                                                     (const struct std::nothrow_t *)&std::nothrow);
  if ( !v21 )
  {
    v15 = -2147024882;
    goto LABEL_30;
  }
  v22 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer(v21);
  std::map<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>::operator=(
    v22 + 80,
    a2);
  v23 = a3[1];
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    v23 = a3[1];
  }
  *(_QWORD *)v31 = *(_QWORD *)(v22 + 64);
  *(_QWORD *)(v22 + 64) = *a3;
  v24 = *(_QWORD *)(v22 + 72);
  *(_QWORD *)(v22 + 72) = v23;
  v32 = v24;
  std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)v31);
  PropertyValues = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues((Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *)v22);
  v15 = PropertyValues;
  if ( PropertyValues < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)(unsigned int)PropertyValues);
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v22);
LABEL_30:
    v19 = v15;
    v20 = 836LL;
LABEL_31:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v19);
    goto LABEL_47;
  }
  if ( v22 )
  {
    v26 = *(_QWORD *)(v22 + 56);
    if ( v26 >= 0 )
    {
      while ( (_DWORD)v26 != 0x7FFFFFFF )
      {
        v28 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 56), v26 + 1, v26);
        v27 = v26 == v28;
        v26 = v28;
        if ( v27 )
          break;
        if ( v28 < 0 )
          goto LABEL_40;
      }
      *(_QWORD *)(a1 + 248) = v22;
      goto LABEL_42;
    }
    do
LABEL_40:
      v29 = *(_DWORD *)(2 * v26 + 0x10);
    while ( v29 != 0x7FFFFFFF
         && v29 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v26 + 16), v29 + 1, v29) );
  }
  *(_QWORD *)(a1 + 248) = v22;
  if ( v22 )
LABEL_42:
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v22);
  v30 = a3[1];
  if ( v30 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
    v30 = a3[1];
  }
  *(_QWORD *)&v33.Data1 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 256) = *a3;
  *(_QWORD *)v33.Data4 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 264) = v30;
  std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)&v33);
LABEL_46:
  LOBYTE(v10) = v12;
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_ReinitializeAfterAttachingGameConfig(
    (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
    v10);
  v15 = 0;
LABEL_47:
  if ( v9 )
    LeaveCriticalSection(v9);
  return v15;
}
