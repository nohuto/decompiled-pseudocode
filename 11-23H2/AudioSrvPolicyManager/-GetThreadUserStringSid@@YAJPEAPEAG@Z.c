/*
 * XREFs of ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x18003CD6C
 * Callers:
 *     ?GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z @ 0x18003CBFC (-GetPropKeyPath@@YAJPEAUIAudioSessionInfo@@PEAG_K@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800233A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall GetThreadUserStringSid(unsigned __int16 **a1)
{
  PSID *v1; // rdi
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  DWORD TokenInformationLength; // [rsp+58h] [rbp+28h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp+30h] BYREF
  LPWSTR StringSid; // [rsp+68h] [rbp+38h] BYREF

  TokenHandle = 0LL;
  v1 = 0LL;
  StringSid = 0LL;
  CurrentThread = GetCurrentThread();
  if ( OpenThreadToken(CurrentThread, 8u, 0, &TokenHandle) )
  {
    if ( !GetTokenInformation(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength) )
    {
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError != 122 )
        goto LABEL_9;
      v1 = (PSID *)CoTaskMemAlloc(TokenInformationLength);
      if ( !v1 )
      {
        v5 = -2147024882;
LABEL_12:
        if ( StringSid )
        {
          LocalFree(StringSid);
          StringSid = 0LL;
        }
        goto LABEL_15;
      }
    }
    if ( GetTokenInformation(TokenHandle, TokenUser, v1, TokenInformationLength, &TokenInformationLength)
      && ConvertSidToStringSidW(*v1, &StringSid) )
    {
      v5 = 0;
      *a1 = StringSid;
      goto LABEL_15;
    }
  }
  LastError = GetLastError();
  v5 = LastError;
LABEL_9:
  if ( LastError > 0 )
    v5 = (unsigned __int16)LastError | 0x80070000;
  if ( v5 < 0 )
    goto LABEL_12;
LABEL_15:
  if ( v1 )
    CoTaskMemFree(v1);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      109LL,
      (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
