/*
 * XREFs of ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A91C
 * Callers:
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x18000A4F8 (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800041A0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000AFB4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shi.c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x18000C740 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInterna.c)
 *     ??$GetRangeNoThrow@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@wil@@YA?AV?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@0@PEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x18000D854 (--$GetRangeNoThrow@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@wil@@YA-AV-$vector_range_nothro.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1800103D0 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListE.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180010804 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1800127D8 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180013090 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAE@Z @ 0x180013EB8 (-IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@Shim@UnifiedTile@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180013F80 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800188B8 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180018B2C (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1800454B4 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x180045758 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=26
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
  unsigned __int8 *v25; // r8
  int v26; // ebx
  int v27; // esi
  int IsUserPinnedTile; // eax
  wil::details::in1diag3 *v29; // rcx
  __int64 v30; // rdx
  Windows::Gaming::Preview::GamesEnumeration *v31; // rcx
  unsigned int v32; // r8d
  wil::details_abi *v33; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v35; // rbx
  int GameConfigStoreClientIfNeeded; // eax
  int v37; // esi
  unsigned __int64 v38; // r9
  __int64 v39; // rdx
  _QWORD *v40; // rdx
  struct wil::ThreadErrorContext *v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v46; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v47; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h] BYREF
  struct DiagnosticsInfo v50; // [rsp+58h] [rbp-A8h] BYREF
  char v51; // [rsp+60h] [rbp-A0h]
  __int64 v52; // [rsp+68h] [rbp-98h] BYREF
  struct wil::details_abi::ThreadLocalData *v53; // [rsp+70h] [rbp-90h] BYREF
  __int64 v54; // [rsp+78h] [rbp-88h]
  unsigned int v55[2]; // [rsp+80h] [rbp-80h] BYREF
  const char *v56; // [rsp+88h] [rbp-78h]
  int *v57; // [rsp+90h] [rbp-70h]
  __int16 v58; // [rsp+98h] [rbp-68h]
  Windows::Gaming::Preview::GamesEnumeration *v59; // [rsp+A0h] [rbp-60h]
  HANDLE hObject; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-50h]
  _BYTE v62[8]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v63[7]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v64; // [rsp+F8h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
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
    goto LABEL_70;
  }
  v9 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)hObject, v4, &v47, v5);
  v6 = v9;
  if ( v9 < 0 )
  {
    v7 = (unsigned int)v9;
    v8 = 97LL;
    goto LABEL_7;
  }
  if ( !(_BYTE)v47 )
  {
    v6 = -2147024891;
    v7 = 2147942405LL;
    v8 = 98LL;
    goto LABEL_7;
  }
  v52 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 14) + 48LL))(*((_QWORD *)this + 14), &v52);
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
    goto LABEL_68;
  }
  v10 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v52);
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
    goto LABEL_66;
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
    goto LABEL_64;
  }
  wil::GetRangeNoThrow<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>(v55, v48, &v50);
  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::get_at_current(
    v55,
    0LL);
  v15 = 0;
  v16 = (int)v56;
  while ( *v57 >= 0 && v15 != v16 )
  {
    v17 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v59);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7D,
        (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v17,
        v46);
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::get_at_current(
      v55,
      (unsigned int)++v15);
  }
  v18 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( v50.cost < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7F,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v50.cost,
      v46);
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
  wil::GetRangeNoThrow<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>(v55, v48, &v50);
  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::get_at_current(
    v55,
    0LL);
  v26 = 0;
  v27 = (int)v56;
  while ( *v57 >= 0 && v26 != v27 )
  {
    v61 = 0LL;
    LOBYTE(v47) = 0;
    IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::IsUserPinnedTile(
                         v59,
                         (struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *)&v47,
                         v25);
    v29 = retaddr;
    if ( IsUserPinnedTile < 0 )
    {
      v30 = 137LL;
LABEL_44:
      wil::details::in1diag3::_Log_Hr(
        v29,
        (void *)v30,
        (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)IsUserPinnedTile,
        v46);
      goto LABEL_45;
    }
    if ( (_BYTE)v47 )
    {
      IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(this, v59);
      v29 = retaddr;
      if ( IsUserPinnedTile < 0 )
      {
        v30 = 140LL;
        goto LABEL_44;
      }
    }
LABEL_45:
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::get_at_current(
      v55,
      (unsigned int)++v26);
  }
  v31 = v59;
  if ( v59 )
  {
    v59 = 0LL;
    (*(void (__fastcall **)(Windows::Gaming::Preview::GamesEnumeration *))(*(_QWORD *)v31 + 16LL))(v31);
  }
  if ( v50.cost < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8F,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v50.cost,
      v46);
  *(_QWORD *)v55 = retaddr;
  v56 = "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp";
  v57 = 0LL;
  v58 = 146;
  v32 = `wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetImpl'::`2'::impl & 4) == 0 )
  {
    v61 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetImpl'::`2'::impl,
                       v62);
    v32 = v61;
  }
  v50.flags = 0;
  v51 = 3;
  wil::details::ReportUsageToService(&unk_180064EB8, 11973136LL, (v32 >> 10) & 1, (v32 >> 11) & 1);
  LOBYTE(v33) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v33);
  v35 = ThreadLocalDataCache;
  v53 = ThreadLocalDataCache;
  v54 = 0LL;
  if ( ThreadLocalDataCache )
  {
    HIDWORD(v54) = *((_DWORD *)ThreadLocalDataCache + 4);
    LODWORD(v54) = **((_DWORD **)ThreadLocalDataCache + 1);
    v35 = v53;
    *((_DWORD *)v53 + 4) = v54;
  }
  GameConfigStoreClientIfNeeded = CreateGameConfigStoreClientIfNeeded((char *)this + 216);
  v37 = GameConfigStoreClientIfNeeded;
  if ( GameConfigStoreClientIfNeeded < 0 )
  {
    v38 = (unsigned int)GameConfigStoreClientIfNeeded;
    v39 = 148LL;
    goto LABEL_60;
  }
  v63[0] = off_18004FD30;
  v63[1] = this;
  v64 = v63;
  v37 = DoWorkOnGameConfigStore(*((_QWORD *)this + 27), v63);
  if ( v64 )
  {
    v40 = v63;
    LOBYTE(v40) = v64 != v63;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v64 + 32LL))(v64, v40);
    v64 = 0LL;
  }
  if ( v37 < 0 )
  {
    v38 = (unsigned int)v37;
    v39 = 156LL;
LABEL_60:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)v38);
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v37,
      (wil::ThreadErrorContext *)&v53,
      v41,
      (unsigned int)v55,
      (const struct DiagnosticsInfo *)&v50.flags);
    v35 = v53;
  }
  if ( v35 )
    *((_DWORD *)v35 + 4) = HIDWORD(v54);
  v6 = 0;
LABEL_64:
  v42 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
LABEL_66:
  v43 = v49;
  if ( v49 )
  {
    v49 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
  }
LABEL_68:
  v44 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  }
LABEL_70:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return v6;
}
