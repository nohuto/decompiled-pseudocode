/*
 * XREFs of ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801506F0
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x18008ADC4 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1800944EC (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18010988C (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180127840 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801EAD20 (_guard_dispatch_icall_nop.c)
 *     ?FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1803B7B60 (-FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(RTL_SRWLOCK *this)
{
  HANDLE FileW; // rax
  void *v3; // rbx
  DWORD FileSize; // eax
  __int64 v5; // rsi
  SIZE_T v6; // r15
  void *v7; // rcx
  int v8; // eax
  unsigned int JsonDataFromDisk; // r14d
  CHAR *v10; // rdi
  const char *v11; // r9
  WCHAR *v12; // rsi
  __int64 v13; // rbx
  int ActivationFactory; // eax
  unsigned int v15; // r8d
  PVOID Reserved1; // r15
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, PVOID, struct Windows::Data::Json::IJsonObject **, __int64 *); // r14
  int v19; // eax
  __int64 v21; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v22; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID lpBuffer; // [rsp+60h] [rbp-A8h] BYREF
  DWORD NumberOfBytesRead[2]; // [rsp+68h] [rbp-A0h] BYREF
  WCHAR *v26; // [rsp+70h] [rbp-98h] BYREF
  void *v27; // [rsp+78h] [rbp-90h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-88h] BYREF
  __int64 v29; // [rsp+98h] [rbp-70h]
  WCHAR Dst[264]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  if ( ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat", Dst, 0x104u) )
  {
    FileW = CreateFileW(Dst, 0x80000000, 1u, 0LL, 3u, 0x8000080u, 0LL);
    v3 = FileW;
    v27 = FileW;
    if ( FileW == (HANDLE)-1LL )
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
          (void *)0x21D,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v8);
      }
      else if ( ReadFile(v3, lpBuffer, v5, NumberOfBytesRead, 0LL) )
      {
        v10[v5] = 0;
        v12 = (WCHAR *)CoTaskMemAlloc(2 * v6);
        v26 = v12;
        if ( MultiByteToWideChar(0xFDE9u, 0, v10, -1, v12, v6) )
        {
          v23 = 0LL;
          v29 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(
            &hstringHeader,
            L"Windows.Data.Json.JsonObject",
            0x1Du,
            0x1Cu);
          v13 = v29;
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v23);
          ActivationFactory = RoGetActivationFactory(v13, &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v23);
          JsonDataFromDisk = ActivationFactory;
          if ( ActivationFactory < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x228,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)ActivationFactory);
          }
          else
          {
            v22 = 0LL;
            Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                          &hstringHeader,
                          (const WCHAR **)&v26,
                          v15)[1].Reserved.Reserved1;
            v29 = 0LL;
            v17 = v23;
            v18 = *(__int64 (__fastcall **)(__int64, PVOID, struct Windows::Data::Json::IJsonObject **, __int64 *))(*(_QWORD *)v23 + 56LL);
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v22);
            v19 = v18(v17, Reserved1, &v22, &v21);
            JsonDataFromDisk = v19;
            if ( v19 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x22D,
                (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                (const char *)(unsigned int)v19);
            }
            else if ( (_BYTE)v21 || (PenWorkspaceBrokerTelemetry::FailedToParseJsonString(), (_BYTE)v21) )
            {
              JsonDataFromDisk = PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(this, v22);
            }
            else
            {
              JsonDataFromDisk = -2147467259;
            }
            Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v22);
          }
          Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v23);
        }
        else
        {
          JsonDataFromDisk = -2147467259;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x225,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
            (const char *)0x80004005LL);
        }
        CoTaskMemFree(v12);
      }
      else
      {
        JsonDataFromDisk = wil::details::in1diag3::Return_GetLastError(
                             retaddr,
                             (void *)0x220,
                             (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                             v11);
      }
      CoTaskMemFree(v10);
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v27);
  }
  else
  {
    JsonDataFromDisk = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80004005LL);
  }
  return JsonDataFromDisk;
}
