/*
 * XREFs of ?AttachGameConfigs@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJ$$QEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x18002DF60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x1800102C0 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180013470 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x18002D68C (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x18002DE74 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 *     ??0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x180033624 (--0GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003FA9C (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 *     ??4?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180041678 (--4-$map@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfigs(
        __int64 a1,
        __int64 ***a2,
        __int64 a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // r12
  __int64 v10; // rdx
  volatile signed __int64 *v11; // rcx
  char v12; // r15
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
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int PropertyValues; // eax
  signed __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rax
  signed __int32 v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v35; // [rsp+28h] [rbp-40h]
  struct _GUID v36; // [rsp+30h] [rbp-38h] BYREF
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
  if ( !*(_QWORD *)a3 )
  {
    v6 = -2147467261;
    v7 = 822LL;
    goto LABEL_3;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v11 = *(volatile signed __int64 **)(a1 + 248);
  if ( v11 )
  {
    if ( *(_QWORD *)(a1 + 256) )
    {
      v12 = 1;
      j = **a2;
      while ( !*((_BYTE *)j + 25) )
      {
        v36 = (struct _GUID)*((_OWORD *)j + 2);
        v14 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig(
                (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
                &v36,
                j + 6,
                (__int64 **)a3);
        v15 = v14;
        if ( v14 < 0 )
        {
          v19 = (unsigned int)v14;
          v20 = 848LL;
          goto LABEL_30;
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
      goto LABEL_45;
    }
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
    goto LABEL_29;
  }
  v22 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GameModeConfigurationServer(v21);
  std::map<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>::operator=(
    v22 + 80,
    a2);
  v23 = *(_QWORD *)(a3 + 8);
  if ( v23 )
    _InterlockedAdd((volatile signed __int32 *)(v23 + 8), 1u);
  v24 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)v34 = *(_QWORD *)(v22 + 64);
  *(_QWORD *)(v22 + 64) = *(_QWORD *)a3;
  v25 = *(_QWORD *)(v22 + 72);
  *(_QWORD *)(v22 + 72) = v24;
  v35 = v25;
  std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)v34);
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
LABEL_29:
    v19 = v15;
    v20 = 836LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v19);
    goto LABEL_46;
  }
  if ( v22 )
  {
    v27 = *(_QWORD *)(v22 + 56);
    if ( v27 >= 0 )
    {
      while ( (_DWORD)v27 != 0x7FFFFFFF )
      {
        v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 56), v27 + 1, v27);
        v28 = v27 == v29;
        v27 = v29;
        if ( v28 )
          break;
        if ( v29 < 0 )
          goto LABEL_39;
      }
      *(_QWORD *)(a1 + 248) = v22;
      goto LABEL_41;
    }
    do
LABEL_39:
      v30 = *(_DWORD *)(2 * v27 + 0x10);
    while ( v30 != 0x7FFFFFFF
         && v30 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v27 + 16), v30 + 1, v30) );
  }
  *(_QWORD *)(a1 + 248) = v22;
  if ( v22 )
LABEL_41:
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v22);
  v31 = *(_QWORD *)(a3 + 8);
  if ( v31 )
    _InterlockedAdd((volatile signed __int32 *)(v31 + 8), 1u);
  v32 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)&v36.Data1 = *(_QWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 256) = *(_QWORD *)a3;
  v33 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 264) = v32;
  *(_QWORD *)v36.Data4 = v33;
  std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)&v36);
  v12 = 0;
LABEL_45:
  LOBYTE(v10) = v12;
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_ReinitializeAfterAttachingGameConfig(
    (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
    v10);
  v15 = 0;
LABEL_46:
  if ( v9 )
    LeaveCriticalSection(v9);
  return v15;
}
