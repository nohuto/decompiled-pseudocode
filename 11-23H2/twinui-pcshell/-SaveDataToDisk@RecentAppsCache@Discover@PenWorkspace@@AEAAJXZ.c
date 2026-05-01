/*
 * XREFs of ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180186688
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800C4424 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18009A358 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$As@UIJsonValue@Json@Data@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIJsonValue@Json@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180186C14 (--$As@UIJsonValue@Json@Data@Windows@@@-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QE.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  int v2; // eax
  unsigned int LastError; // esi
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rdi
  int v7; // eax
  HANDLE FileW; // rbx
  __int64 v9; // rsi
  PCWSTR StringRawBuffer; // rax
  void *v11; // rdi
  const WCHAR *v12; // rax
  const char *v13; // r9
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  const char *v17; // r9
  HSTRING string; // [rsp+40h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20[2]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR Dst[264]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR FileName[264]; // [rsp+270h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4A8h] [rbp+3A8h]

  v19 = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v19);
  v2 = PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(this, &v19);
  LastError = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E7,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_17;
  }
  v20[0] = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(&v19, v20);
  LastError = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2EA,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_16;
  }
  string = 0LL;
  v5 = v20[0];
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v20[0] + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = v6(v5, &string);
  LastError = v7;
  if ( v7 < 0 )
  {
    v15 = (unsigned int)v7;
    v16 = 749LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)v15);
    goto LABEL_15;
  }
  if ( !ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace", Dst, 0x104u) )
  {
    LastError = -2147467259;
    v16 = 752LL;
LABEL_26:
    v15 = LastError;
    goto LABEL_27;
  }
  if ( !ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat", FileName, 0x104u) )
  {
    LastError = -2147467259;
    v16 = 755LL;
    goto LABEL_26;
  }
  if ( GetFileAttributesW(Dst) != -1 || CreateDirectoryW(Dst, 0LL) )
  {
    FileW = CreateFileW(FileName, 0x40000000u, 2u, 0LL, 2u, 0x8000080u, 0LL);
    v9 = -1LL;
    if ( FileW != (HANDLE)-1LL )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      do
        ++v9;
      while ( StringRawBuffer[v9] );
      v11 = CoTaskMemAlloc((unsigned int)v9);
      v12 = WindowsGetStringRawBuffer(string, 0LL);
      if ( WideCharToMultiByte(0xFDE9u, 0, v12, v9, (LPSTR)v11, v9, 0LL, 0LL) )
      {
        if ( WriteFile(FileW, v11, v9, 0LL, 0LL) )
          LastError = 0;
        else
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x303,
                        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                        v13);
      }
      else
      {
        LastError = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x301,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)0x80004005LL);
      }
      CoTaskMemFree(v11);
      if ( FileW )
        CloseHandle(FileW);
      goto LABEL_15;
    }
    LastError = -2147023728;
    v16 = 765LL;
    goto LABEL_26;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0x2F9,
                (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                v17);
LABEL_15:
  WindowsDeleteString(string);
  string = 0LL;
LABEL_16:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v20);
LABEL_17:
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v19);
  return LastError;
}
