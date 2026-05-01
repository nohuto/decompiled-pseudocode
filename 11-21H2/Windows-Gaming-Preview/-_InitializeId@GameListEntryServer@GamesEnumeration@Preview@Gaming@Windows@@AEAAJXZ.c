/*
 * XREFs of ?_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18002C3A0
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002B07C (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002B278 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x18002D540 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x18003FCA4 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeId(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  LPOLESTR v7; // rbx
  __int64 (__fastcall *v8)(LPOLESTR, char *); // rdi
  LPOLESTR v9; // rcx
  LPOLESTR v10; // rcx
  __int64 v11; // rcx
  HSTRING *v12; // rsi
  LPOLESTR v13; // rdi
  unsigned __int64 v14; // rbx
  UINT32 v15; // edx
  const WCHAR *v16; // rcx
  LPOLESTR lpsz; // [rsp+20h] [rbp-20h] BYREF
  IID rclsid; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    lpsz = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, LPOLESTR *))(*(_QWORD *)v3 + 48LL))(v3, &lpsz);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 464LL;
      goto LABEL_6;
    }
    v7 = lpsz;
    v8 = *(__int64 (__fastcall **)(LPOLESTR, char *))(*(_QWORD *)lpsz + 56LL);
    WindowsDeleteString(*((HSTRING *)this + 30));
    *((_QWORD *)this + 30) = 0LL;
    v4 = v8(v7, (char *)this + 240);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 466LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v4);
      v9 = lpsz;
      if ( lpsz )
      {
        lpsz = 0LL;
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v9 + 16LL))(v9);
      }
      return v5;
    }
    WindowsDeleteString(*((HSTRING *)this + 29));
    *((_QWORD *)this + 29) = 0LL;
    WindowsDuplicateString(*((HSTRING *)this + 30), (HSTRING *)this + 29);
    v10 = lpsz;
    if ( lpsz )
    {
      lpsz = 0LL;
      (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return 0LL;
  }
  v11 = *((_QWORD *)this + 34);
  if ( v11 && *((_QWORD *)this + 35) )
  {
    LOBYTE(a2) = 1;
    rclsid = *(IID *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                       v11,
                       a2);
    StringFromCLSID(&rclsid, &lpsz);
    v12 = (HSTRING *)((char *)this + 232);
    v13 = lpsz;
    if ( lpsz )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( lpsz[v14] );
      if ( v14 > 0xFFFFFFFF )
        goto LABEL_21;
      WindowsDeleteString(*v12);
      v15 = v14;
      v16 = v13;
    }
    else
    {
      WindowsDeleteString(*v12);
      v15 = 0;
      v16 = &word_180057440;
    }
    *v12 = 0LL;
    WindowsCreateString(v16, v15, v12);
LABEL_21:
    CoTaskMemFree(lpsz);
    return 0LL;
  }
  v5 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D8,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)0x8000FFFFLL);
  return v5;
}
