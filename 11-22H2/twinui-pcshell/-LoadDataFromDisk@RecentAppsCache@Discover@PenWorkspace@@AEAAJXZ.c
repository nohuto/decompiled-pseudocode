/*
 * XREFs of ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180186908
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800C4424 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18009A8C0 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800ECE64 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180186BAC (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18028E190 (_guard_dispatch_icall_nop.c)
 *     ?FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x180490CD4 (-FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  char *FileW; // rax
  char *v3; // rdi
  DWORD FileSize; // eax
  __int64 v5; // r14
  SIZE_T v6; // r15
  void *v7; // rcx
  int v8; // eax
  unsigned int JsonDataFromDisk; // ebx
  CHAR *v10; // rsi
  const char *v11; // r9
  WCHAR *v12; // r14
  __int64 v13; // rbx
  int ActivationFactory; // eax
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64, struct Windows::Data::Json::IJsonObject **, __int64 *); // r15
  int v18; // eax
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID lpBuffer; // [rsp+60h] [rbp-A8h] BYREF
  DWORD NumberOfBytesRead[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v25[2]; // [rsp+70h] [rbp-98h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  __int64 v27; // [rsp+98h] [rbp-70h]
  WCHAR Dst[264]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  if ( ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat", Dst, 0x104u) )
  {
    FileW = (char *)CreateFileW(Dst, 0x80000000, 1u, 0LL, 3u, 0x8000080u, 0LL);
    v3 = FileW;
    v25[1] = FileW;
    if ( FileW == (char *)-1LL )
    {
      JsonDataFromDisk = -2147023728;
    }
    else
    {
      FileSize = GetFileSize(FileW, 0LL);
      v5 = FileSize;
      v6 = FileSize + 1;
      lpBuffer = 0LL;
      v8 = CTCoAllocPolicy::Alloc(v7, 1, v6, &lpBuffer);
      JsonDataFromDisk = v8;
      v10 = (CHAR *)lpBuffer;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x21F,
          (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v8);
      }
      else if ( ReadFile(v3, lpBuffer, v5, NumberOfBytesRead, 0LL) )
      {
        v10[v5] = 0;
        v12 = (WCHAR *)CoTaskMemAlloc(2 * v6);
        v25[0] = v12;
        if ( MultiByteToWideChar(0xFDE9u, 0, v10, -1, v12, v6) )
        {
          v22 = 0LL;
          v27 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"Windows.Data.Json.JsonObject",
            0x1Du,
            0x1Cu);
          v13 = v27;
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v22);
          ActivationFactory = RoGetActivationFactory(v13, &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v22);
          JsonDataFromDisk = ActivationFactory;
          if ( ActivationFactory < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x22A,
              (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)ActivationFactory);
          }
          else
          {
            v21 = 0LL;
            v15 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, v25) + 24);
            v27 = 0LL;
            v16 = v22;
            v17 = *(__int64 (__fastcall **)(__int64, __int64, struct Windows::Data::Json::IJsonObject **, __int64 *))(*(_QWORD *)v22 + 56LL);
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v21);
            v18 = v17(v16, v15, &v21, &v20);
            JsonDataFromDisk = v18;
            if ( v18 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x22F,
                (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                (const char *)(unsigned int)v18);
            }
            else if ( (_BYTE)v20 || (PenWorkspaceBrokerTelemetry::FailedToParseJsonString(), (_BYTE)v20) )
            {
              JsonDataFromDisk = PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(this, v21);
            }
            else
            {
              JsonDataFromDisk = -2147467259;
            }
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v21);
          }
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v22);
        }
        else
        {
          JsonDataFromDisk = -2147467259;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x227,
            (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
            (const char *)0x80004005LL);
        }
        CoTaskMemFree(v12);
      }
      else
      {
        JsonDataFromDisk = wil::details::in1diag3::Return_GetLastError(
                             retaddr,
                             (void *)0x222,
                             (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                             v11);
      }
      CoTaskMemFree(v10);
    }
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v3);
  }
  else
  {
    JsonDataFromDisk = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x215,
      (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80004005LL);
  }
  return JsonDataFromDisk;
}
