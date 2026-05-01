/*
 * XREFs of ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A7E0
 * Callers:
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x18000A3B8 (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800041B0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000AE10 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shi.c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x18000C5A0 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInterna.c)
 *     ??$GetRangeNoThrow@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@wil@@YA?AV?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@0@PEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x18000D724 (--$GetRangeNoThrow@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@wil@@YA-AV-$vector_range_nothro.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800103A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800106D4 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18001263C (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAE@Z @ 0x180013A14 (-IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@Shim@UnifiedTile@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800183A8 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180018620 (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x180044674 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180044918 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=37
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        __int64 a2)
{
  int CallingProcessHandle; // eax
  void *v4; // rdx
  bool *v5; // r9
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  int v15; // ebx
  int v16; // esi
  int v17; // eax
  Windows::Gaming::Preview::GamesEnumeration *v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64 *); // rsi
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, __int64 *); // rsi
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int8 *v26; // r8
  int v27; // ebx
  int v28; // esi
  int IsUserPinnedTile; // eax
  wil::details::in1diag3 *v30; // rcx
  __int64 v31; // rdx
  Windows::Gaming::Preview::GamesEnumeration *v32; // rcx
  wil::details_abi *v33; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v35; // rbx
  int v36; // r14d
  int GameConfigStoreClientIfNeeded; // eax
  int v38; // esi
  unsigned __int64 v39; // r9
  __int64 v40; // rdx
  _QWORD *v41; // rdx
  struct wil::ThreadErrorContext *v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  unsigned __int16 v47[4]; // [rsp+28h] [rbp-89h] BYREF
  __int64 v48; // [rsp+30h] [rbp-81h] BYREF
  __int64 v49; // [rsp+38h] [rbp-79h] BYREF
  char *v50; // [rsp+40h] [rbp-71h] BYREF
  __int64 v51; // [rsp+48h] [rbp-69h] BYREF
  struct wil::details_abi::ThreadLocalData *v52; // [rsp+50h] [rbp-61h] BYREF
  __int64 v53; // [rsp+58h] [rbp-59h]
  unsigned int v54[2]; // [rsp+60h] [rbp-51h] BYREF
  const char *v55; // [rsp+68h] [rbp-49h]
  int *v56; // [rsp+70h] [rbp-41h]
  __int16 v57; // [rsp+78h] [rbp-39h]
  Windows::Gaming::Preview::GamesEnumeration *v58; // [rsp+80h] [rbp-31h]
  HANDLE hObject[2]; // [rsp+88h] [rbp-29h] BYREF
  _QWORD v60[7]; // [rsp+98h] [rbp-19h] BYREF
  _QWORD *v61; // [rsp+D0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  hObject[0] = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, hObject);
  v6 = CallingProcessHandle;
  if ( CallingProcessHandle < 0 )
  {
    v7 = (unsigned int)CallingProcessHandle;
    v8 = 93LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)v7);
    goto LABEL_68;
  }
  v9 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)hObject[0], v4, v47, v5);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 97LL;
    goto LABEL_7;
  }
  if ( !LOBYTE(v47[0]) )
  {
    v6 = -2147024891;
    v7 = 2147942405LL;
    v8 = 98LL;
    goto LABEL_7;
  }
  v51 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), &v51);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 113LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_66;
  }
  v10 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v51);
  v6 = v10;
  if ( v10 < 0 )
  {
    v11 = 114LL;
    goto LABEL_12;
  }
  v49 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 14) + 56LL))(
          *((_QWORD *)this + 14),
          1LL,
          &v49);
  v6 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_64;
  }
  v48 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 48LL))(v49, &v48);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 120LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_62;
  }
  wil::GetRangeNoThrow<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>(v54, v48, &v50);
  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::get_at_current(
    v54,
    0LL);
  v15 = 0;
  v16 = (int)v55;
  while ( *v56 >= 0 && v15 != v16 )
  {
    v17 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v58);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7D,
        (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v17,
        *(int *)v47);
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::get_at_current(
      v54,
      (unsigned int)++v15);
  }
  v18 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( (int)v50 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7F,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v50,
      *(int *)v47);
  v19 = *((_QWORD *)this + 14);
  v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 56LL);
  v21 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v13 = v20(v19, 0LL, &v49);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 130LL;
    goto LABEL_35;
  }
  v22 = v49;
  v23 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v49 + 48LL);
  v24 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v13 = v23(v22, &v48);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 131LL;
    goto LABEL_35;
  }
  wil::GetRangeNoThrow<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>(v54, v48, &v50);
  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::get_at_current(
    v54,
    0LL);
  v27 = 0;
  v28 = (int)v55;
  while ( *v56 >= 0 && v27 != v28 )
  {
    v52 = 0LL;
    LOBYTE(v47[0]) = 0;
    IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::IsUserPinnedTile(
                         v58,
                         (struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *)v47,
                         v26);
    v30 = retaddr;
    if ( IsUserPinnedTile < 0 )
    {
      v31 = 137LL;
LABEL_44:
      wil::details::in1diag3::_Log_Hr(
        v30,
        (void *)v31,
        (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)IsUserPinnedTile,
        *(int *)v47);
      goto LABEL_45;
    }
    if ( LOBYTE(v47[0]) )
    {
      IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v58);
      v30 = retaddr;
      if ( IsUserPinnedTile < 0 )
      {
        v31 = 140LL;
        goto LABEL_44;
      }
    }
LABEL_45:
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::get_at_current(
      v54,
      (unsigned int)++v27);
  }
  v32 = v58;
  if ( v58 )
  {
    v58 = 0LL;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v32 + 16LL))(v32);
  }
  if ( (int)v50 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8F,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v50,
      *(int *)v47);
  *(_QWORD *)v54 = retaddr;
  v55 = "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp";
  v56 = 0LL;
  v57 = 146;
  LOBYTE(v25) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetImpl'::`2'::impl,
    v25);
  LOBYTE(v33) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v33);
  v35 = ThreadLocalDataCache;
  v52 = ThreadLocalDataCache;
  v53 = 0LL;
  v36 = 0;
  if ( ThreadLocalDataCache )
  {
    HIDWORD(v53) = *((_DWORD *)ThreadLocalDataCache + 4);
    LODWORD(v53) = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v53;
    v36 = HIDWORD(v53);
    v35 = v52;
  }
  GameConfigStoreClientIfNeeded = CreateGameConfigStoreClientIfNeeded((char *)this + 216);
  v38 = GameConfigStoreClientIfNeeded;
  if ( GameConfigStoreClientIfNeeded < 0 )
  {
    v39 = (unsigned int)GameConfigStoreClientIfNeeded;
    v40 = 148LL;
    goto LABEL_58;
  }
  v60[0] = off_18004ED30;
  v60[1] = this;
  v61 = v60;
  v38 = DoWorkOnGameConfigStore(*((_QWORD *)this + 27), v60);
  if ( v61 )
  {
    v41 = v60;
    LOBYTE(v41) = v61 != v60;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v61 + 32LL))(v61, v41);
    v61 = 0LL;
  }
  if ( v38 < 0 )
  {
    v39 = (unsigned int)v38;
    v40 = 156LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v40,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)v39);
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v38,
      (wil::ThreadErrorContext *)&v52,
      v42,
      (unsigned int)v54,
      *(const struct DiagnosticsInfo **)v47);
  }
  if ( v35 )
    *((_DWORD *)v35 + 4) = v36;
  v6 = 0;
LABEL_62:
  v43 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
LABEL_64:
  v44 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
LABEL_66:
  v45 = v51;
  if ( v51 )
  {
    v51 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
LABEL_68:
  if ( (unsigned __int64)hObject[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(hObject[0]);
  return v6;
}
