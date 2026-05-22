/*
 * XREFs of GetWin32AppId @ 0x18001E1BC
 * Callers:
 *     ?GetCurrentAppInformation@TelemetryHelper@@YAJPEAPEAGPEAW4__MIDL___MIDL_itf_touchtelemetry_0000_0000_0005@@@Z @ 0x18001DF00 (-GetCurrentAppInformation@TelemetryHelper@@YAJPEAPEAGPEAW4__MIDL___MIDL_itf_touchtelemetry_0000_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18001E424 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     GetFileName @ 0x18001F148 (GetFileName.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _o_wcsncpy_s_0 @ 0x180096968 (_o_wcsncpy_s_0.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18009D9B8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     wil::details::lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___::_lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___ @ 0x1801B3618 (wil--details--lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___--_lambda_call__lambda_d8d4.c)
 */

__int64 __fastcall GetWin32AppId(unsigned __int16 **a1)
{
  WCHAR *v2; // rbx
  HANDLE CurrentProcess; // rax
  const char *v4; // r9
  DWORD FileVersionInfoSizeW; // eax
  DWORD v6; // ebx
  void *v7; // rax
  const char *v8; // r9
  int v9; // eax
  unsigned int LastError; // ebx
  const char *v11; // r9
  unsigned __int16 *v12; // r14
  unsigned __int16 *v13; // rdi
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // rbx
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // edi
  void *v19; // rcx
  unsigned __int16 *v21; // [rsp+48h] [rbp-59h] BYREF
  LPCWSTR lptstrFilename; // [rsp+50h] [rbp-51h] BYREF
  LPCVOID pBlock; // [rsp+58h] [rbp-49h] BYREF
  DWORD dwSize; // [rsp+60h] [rbp-41h] BYREF
  unsigned int puLen; // [rsp+64h] [rbp-3Dh] BYREF
  LPCVOID *p_pBlock; // [rsp+68h] [rbp-39h] BYREF
  char v27; // [rsp+70h] [rbp-31h]
  LPVOID lpBuffer; // [rsp+78h] [rbp-29h] BYREF
  LPCWSTR *p_lptstrFilename; // [rsp+80h] [rbp-21h] BYREF
  char v30; // [rsp+88h] [rbp-19h]
  __int64 v31; // [rsp+90h] [rbp-11h] BYREF
  int v32; // [rsp+98h] [rbp-9h]
  int v33; // [rsp+9Ch] [rbp-5h]
  unsigned __int16 v34[8]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v35; // [rsp+B0h] [rbp+Fh]
  __int128 v36; // [rsp+C0h] [rbp+1Fh]
  __int16 v37; // [rsp+D0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  dwSize = 0x7FFF;
  *a1 = 0LL;
  lptstrFilename = (LPCWSTR)malloc(0xFFFEuLL);
  v2 = (WCHAR *)lptstrFilename;
  if ( !lptstrFilename )
    return 2147942414LL;
  v30 = 1;
  p_lptstrFilename = &lptstrFilename;
  CurrentProcess = GetCurrentProcess();
  if ( QueryFullProcessImageNameW(CurrentProcess, 0, v2, &dwSize) )
  {
    p_pBlock = &pBlock;
    pBlock = 0LL;
    v27 = 1;
    lpBuffer = 0LL;
    FileVersionInfoSizeW = GetFileVersionInfoSizeW(lptstrFilename, 0LL);
    v6 = FileVersionInfoSizeW;
    if ( FileVersionInfoSizeW )
    {
      v7 = malloc(FileVersionInfoSizeW);
      pBlock = v7;
      if ( !v7 )
      {
LABEL_23:
        wil::details::lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___::_lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___(&p_pBlock);
        LastError = -2147024882;
        goto LABEL_24;
      }
      if ( !GetFileVersionInfoW(lptstrFilename, 0, v6, v7) )
      {
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0xC0,
                      (unsigned int)"onecoreuap\\windows\\dwm\\common\\telemetryhelper\\processinformation\\processinformation.cpp",
                      v8);
LABEL_17:
        wil::details::lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___::_lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___(&p_pBlock);
        goto LABEL_24;
      }
      puLen = 0;
      if ( !VerQueryValueW(pBlock, L"\\", &lpBuffer, &puLen) )
      {
        wil::details::lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___::_lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___(&p_pBlock);
        LastError = -2147467259;
        goto LABEL_24;
      }
    }
    v37 = 0;
    *(_OWORD *)v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    if ( !lpBuffer )
    {
      v31 = 0x2E0030002E0030LL;
      v32 = 3014704;
      v33 = 48;
      o_wcsncpy_s_0(v34, 25LL, &v31);
      goto LABEL_9;
    }
    v9 = StringCchPrintfW(
           v34,
           0x19uLL,
           L"%hu.%hu.%hu.%hu",
           *((unsigned __int16 *)lpBuffer + 5),
           *((unsigned __int16 *)lpBuffer + 4),
           *((unsigned __int16 *)lpBuffer + 7),
           *((unsigned __int16 *)lpBuffer + 6));
    LastError = v9;
    if ( v9 >= 0 )
    {
LABEL_9:
      v21 = 0LL;
      v31 = (__int64)&unk_1801E5750;
      GetFileName(&lptstrFilename, &v31, &v21);
      v12 = v21;
      v13 = v21 + 13;
      if ( v21 == (unsigned __int16 *)-27LL )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xCCD,
          (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v11);
      v14 = (unsigned __int16 *)CoTaskMemAlloc(2LL * (_QWORD)v13 + 2);
      v21 = v14;
      v15 = v14;
      if ( v14 )
      {
        v16 = v31;
        *v14 = 0;
        v14[(_QWORD)v13] = 0;
        v17 = StringCchPrintfW(v14, (unsigned __int64)v12 + 27, aS_0, v16, v34);
        v18 = v17;
        if ( v17 >= 0 )
        {
          v19 = (void *)pBlock;
          *a1 = v15;
          free(v19);
          free((void *)lptstrFilename);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x106,
          (int)"onecoreuap\\windows\\dwm\\common\\telemetryhelper\\processinformation\\processinformation.cpp",
          (const char *)(unsigned int)v17);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v21);
        wil::details::lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___::_lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___(&p_pBlock);
        LastError = v18;
        goto LABEL_24;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFB,
        (int)"onecoreuap\\windows\\dwm\\common\\telemetryhelper\\processinformation\\processinformation.cpp",
        (const char *)0x8007000ELL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v21);
      goto LABEL_23;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE0,
      (int)"onecoreuap\\windows\\dwm\\common\\telemetryhelper\\processinformation\\processinformation.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_17;
  }
  LastError = wil::details::in1diag3::Return_GetLastError(
                retaddr,
                (void *)0xA7,
                (unsigned int)"onecoreuap\\windows\\dwm\\common\\telemetryhelper\\processinformation\\processinformation.cpp",
                v4);
LABEL_24:
  wil::details::lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___::_lambda_call__lambda_d8d4f49b287b664e4f7884780b85341a___(&p_lptstrFilename);
  return LastError;
}
