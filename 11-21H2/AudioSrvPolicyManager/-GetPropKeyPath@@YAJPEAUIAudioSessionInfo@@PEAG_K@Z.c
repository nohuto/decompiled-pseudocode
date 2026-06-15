/*
 * XREFs of ?GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z @ 0x18003495C
 * Callers:
 *     ?OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z @ 0x180036CFC (-OpenStoreKey@@YAJPEAUIAudioSessionInfo@@PEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z @ 0x180009E10 (-GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000E27C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003766C (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GetPropKeyPath(struct IAudioSessionInfo *a1, unsigned __int16 *a2, void *a3)
{
  DWORD v5; // eax
  void *v6; // rbx
  int v7; // eax
  unsigned int v8; // edi
  PSID *v10; // rsi
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  LPWSTR v13; // rbx
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  void *TokenHandle; // [rsp+60h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+40h] BYREF
  LPWSTR StringSid; // [rsp+78h] [rbp+48h] BYREF

  pv = a3;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a1 + 128LL))(a1)
    || (v5 = (*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a1 + 136LL))(a1),
        pv = 0LL,
        CWindowsPolicyManager::GetUserSid(g_PolicyManager, v5, (struct TSSession **)&pv),
        (v6 = pv) == 0LL) )
  {
    TokenHandle = 0LL;
    v10 = 0LL;
    StringSid = 0LL;
    CurrentThread = GetCurrentThread();
    if ( OpenThreadToken(CurrentThread, 8u, 0, &TokenHandle) )
    {
      if ( !GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, (PDWORD)&pv) )
      {
        LastError = GetLastError();
        v8 = LastError;
        if ( LastError != 122 )
          goto LABEL_15;
        v10 = (PSID *)CoTaskMemAlloc((unsigned int)pv);
        if ( !v10 )
        {
          v8 = -2147024882;
          goto LABEL_18;
        }
      }
      if ( GetTokenInformation(TokenHandle, TokenUser, v10, (DWORD)pv, (PDWORD)&pv)
        && ConvertSidToStringSidW(*v10, &StringSid) )
      {
        v13 = StringSid;
        v8 = 0;
        goto LABEL_21;
      }
    }
    LastError = GetLastError();
    v8 = LastError;
LABEL_15:
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    v13 = 0LL;
    if ( (v8 & 0x80000000) == 0 )
    {
LABEL_21:
      if ( v10 )
        CoTaskMemFree(v10);
      if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      {
        CloseHandle(TokenHandle);
        TokenHandle = 0LL;
      }
      if ( (v8 & 0x80000000) == 0 )
      {
        v14 = StringCbPrintfW(a2, 0x208uLL, L"%s\\Software\\Microsoft\\Internet Explorer\\LowRegistry", v13);
        v8 = v14;
        if ( v14 >= 0 )
        {
          if ( v13 )
            LocalFree(v13);
          return 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC6,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)(unsigned int)v14);
        if ( !v13 )
          return v8;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x6D,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)v8);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC4,
          (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
          (const char *)v8);
        if ( !v13 )
          return v8;
      }
      LocalFree(v13);
      return v8;
    }
LABEL_18:
    v13 = 0LL;
    if ( StringSid )
    {
      LocalFree(StringSid);
      StringSid = 0LL;
    }
    goto LABEL_21;
  }
  v7 = StringCbPrintfW(a2, 0x208uLL, L"%s\\Software\\Microsoft\\Internet Explorer\\LowRegistry", pv);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v7);
    CoTaskMemFree(v6);
    return v8;
  }
  CoTaskMemFree(v6);
  return 0LL;
}
