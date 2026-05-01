/*
 * XREFs of ?ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x18002DAB0
 * Callers:
 *     _lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator() @ 0x18001FE34 (_lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ @ 0x180010110 (--1-$shared_ptr@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfiguration@GamesEnumeration@Preview@Gaming@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012F00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameModeConfigur.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002BE4C (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C5F0 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ??4?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180040854 (--4-$map@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::ExtractGameConfigsOwnership(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // rbp
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // rax
  __int64 **v13; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  volatile signed __int64 *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v7 = *(_QWORD *)(a1 + 248);
  if ( !v7 || !*(_QWORD *)(a1 + 256) )
  {
    v8 = -2147467259;
    v9 = 903LL;
    goto LABEL_28;
  }
  if ( *(_QWORD *)(a1 + 136) )
  {
    v8 = -2147024891;
    v9 = 906LL;
LABEL_28:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v8);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v8;
  }
  if ( !*(_QWORD *)(v7 + 88) )
  {
    v8 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
      (const char *)0x80004005LL);
    v9 = 910LL;
    goto LABEL_28;
  }
  v10 = **(__int64 ***)(v7 + 80);
  while ( !*((_BYTE *)v10 + 25) )
  {
    v11 = *(__int64 **)(v7 + 64);
    v12 = *v11;
    v22 = *((_OWORD *)v10 + 2);
    (*(void (__fastcall **)(__int64 *, __int128 *, __int64, const WCHAR *, int))(v12 + 72))(
      v11,
      &v22,
      24LL,
      &word_180057440,
      2);
    v13 = (__int64 **)v10[2];
    if ( *((_BYTE *)v13 + 25) )
    {
      for ( i = (__int64 *)v10[1]; !*((_BYTE *)i + 25) && v10 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v10 = i;
      v10 = i;
    }
    else
    {
      v10 = (__int64 *)v10[2];
      for ( j = *v13; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v10 = j;
    }
  }
  std::map<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>::operator=(
    a2,
    v7 + 80);
  v16 = *(_QWORD *)(v7 + 64);
  v17 = *(_QWORD *)(v7 + 72);
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)&v22 = *a3;
  *a3 = v16;
  *((_QWORD *)&v22 + 1) = a3[1];
  a3[1] = v17;
  std::shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::~shared_ptr<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>((__int64)&v22);
  v18 = *(volatile signed __int64 **)(a1 + 248);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 248) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration,Microsoft::WRL::FtmBase>::Release(v18);
  }
  v19 = *(_QWORD *)(a1 + 192);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 192) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( *(_QWORD *)(a1 + 232) && *(_QWORD *)(a1 + 216) )
  {
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory((Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24));
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeLaunchTarget(
      (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
      v20);
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
