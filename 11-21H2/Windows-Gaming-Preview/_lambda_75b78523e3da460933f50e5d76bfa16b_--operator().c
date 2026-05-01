/*
 * XREFs of _lambda_75b78523e3da460933f50e5d76bfa16b_::operator() @ 0x18002E054
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_75b78523e3da460933f50e5d76bfa16b__Windows::Internal::CBasicResult_unsigned_char_0___::Run @ 0x180035D00 (Windows--Internal--COperationLambdaVar_0__lambda_75b78523e3da460933f50e5d76bfa16b__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800036C0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800106D4 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180018984 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002FFC0 (-get_LaunchParameters@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUH.c)
 *     ?GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEAU?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@_N@Z @ 0x18003FCA4 (-GetFirstGameConfig@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAAEA.c)
 *     memset_0 @ 0x18004B744 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall lambda_75b78523e3da460933f50e5d76bfa16b_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // eax
  DWORD v7; // edx
  int v8; // r8d
  unsigned int LastError; // ebx
  HSTRING v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, HSTRING *); // rcx
  int v12; // eax
  unsigned int v13; // edi
  HSTRING v14; // rbx
  __int64 (__fastcall *v15)(HSTRING, HSTRING *); // rdi
  int v16; // eax
  __int64 v17; // rbx
  int v18; // eax
  HSTRING v19; // rbx
  const char *v20; // r9
  HSTRING v21; // rcx
  HSTRING v23; // rcx
  struct _RTL_CRITICAL_SECTION *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 v27; // xmm6
  __int64 v28; // rax
  int StringPropertyFromGameConfigStore; // eax
  __int64 v30; // r9
  __int64 v31; // rbx
  int LaunchParameters; // eax
  HSTRING v33; // rcx
  __int64 v34; // rax
  const char *v35; // r9
  __int128 v36; // [rsp+28h] [rbp-59h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+38h] [rbp-49h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  HSTRING string; // [rsp+E8h] [rbp+67h] BYREF
  HSTRING v40; // [rsp+F8h] [rbp+77h] BYREF
  HSTRING v41; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 256);
  if ( v5 )
  {
    string = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 112LL))(v5, &string);
    LastError = v6;
    if ( v6 >= 0
      && (v6 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(string, v7, v8),
          LastError = v6,
          v6 >= 0) )
    {
      *(_BYTE *)(a2 + 16) = 1;
      LastError = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v6);
    }
    v10 = string;
    if ( string )
    {
      string = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return LastError;
  }
  v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, HSTRING *))(v4 + 296);
  if ( !v11 )
  {
    v24 = (struct _RTL_CRITICAL_SECTION *)(v4 + 168);
    EnterCriticalSection(v24);
    v41 = (HSTRING)v24;
    v26 = *(_QWORD *)(*a1 + 272);
    if ( !v26 || !*(_QWORD *)(*a1 + 280) )
    {
      LastError = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)0x80070005LL);
LABEL_50:
      if ( v24 )
        LeaveCriticalSection(v24);
      return LastError;
    }
    LOBYTE(v25) = 1;
    v27 = *(_OWORD *)Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetFirstGameConfig(
                       v26,
                       v25);
    v40 = 0LL;
    WindowsDeleteString(0LL);
    v40 = 0LL;
    v28 = *a1;
    v36 = v27;
    StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(*(__int64 **)(v28 + 280), &v36, 23LL, &v40);
    LastError = StringPropertyFromGameConfigStore;
    if ( StringPropertyFromGameConfigStore < 0 )
    {
      v30 = (unsigned int)StringPropertyFromGameConfigStore;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)v30);
LABEL_45:
      WindowsDeleteString(v40);
      v40 = 0LL;
      goto LABEL_50;
    }
    if ( !v40 )
    {
      LastError = -2147024894;
      v30 = 2147942402LL;
      goto LABEL_32;
    }
    string = 0LL;
    v31 = *a1;
    WindowsDeleteString(0LL);
    string = 0LL;
    LaunchParameters = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
                         (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(v31 + 16),
                         &string);
    LastError = LaunchParameters;
    if ( LaunchParameters < 0 )
      goto LABEL_38;
    v33 = string;
    if ( string )
    {
      if ( !WindowsIsStringEmpty(string) )
        goto LABEL_39;
      v33 = string;
    }
    WindowsDeleteString(v33);
    string = 0LL;
    v34 = *a1;
    v36 = v27;
    LaunchParameters = GetStringPropertyFromGameConfigStore(*(__int64 **)(v34 + 280), &v36, 4LL, &string);
    LastError = LaunchParameters;
    if ( LaunchParameters < 0 )
    {
LABEL_38:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)LaunchParameters);
LABEL_44:
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_45;
    }
LABEL_39:
    pExecInfo.cbSize = 112;
    memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
    pExecInfo.nShow = 1;
    pExecInfo.lpFile = WindowsGetStringRawBuffer(v40, 0LL);
    if ( string && !WindowsIsStringEmpty(string) )
      pExecInfo.lpParameters = WindowsGetStringRawBuffer(string, 0LL);
    if ( ShellExecuteExW(&pExecInfo) )
    {
      WindowsDeleteString(string);
      string = 0LL;
      WindowsDeleteString(v40);
      v40 = 0LL;
      if ( v24 )
        LeaveCriticalSection(v24);
      return 0LL;
    }
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x40E,
                  (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
                  v35);
    goto LABEL_44;
  }
  v40 = 0LL;
  v12 = (**v11)(v11, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v40);
  v13 = v12;
  if ( v12 >= 0 )
  {
    string = 0LL;
    v14 = v40;
    v15 = *(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v40 + 96LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v16 = v15(v14, &string);
    v13 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v16);
LABEL_19:
      WindowsDeleteString(string);
      string = 0LL;
      goto LABEL_20;
    }
    v17 = *a1;
    WindowsDeleteString(0LL);
    v41 = 0LL;
    v18 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_LaunchParameters(
            (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(v17 + 16),
            &v41);
    v13 = v18;
    v19 = v41;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v18);
LABEL_18:
      WindowsDeleteString(v19);
      goto LABEL_19;
    }
    pExecInfo.cbSize = 112;
    memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
    pExecInfo.nShow = 1;
    pExecInfo.lpFile = WindowsGetStringRawBuffer(string, 0LL);
    pExecInfo.lpParameters = WindowsGetStringRawBuffer(v19, 0LL);
    if ( !ShellExecuteExW(&pExecInfo) )
    {
      v13 = wil::details::in1diag3::Return_GetLastError(
              retaddr,
              (void *)0x40E,
              (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
              v20);
      goto LABEL_18;
    }
    WindowsDeleteString(v19);
    WindowsDeleteString(string);
    string = 0LL;
    v23 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v23 + 16LL))(v23);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x40E,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v12);
LABEL_20:
  v21 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return v13;
}
