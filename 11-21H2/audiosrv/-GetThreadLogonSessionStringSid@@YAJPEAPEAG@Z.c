/*
 * XREFs of ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x180024680
 * Callers:
 *     AudioServerCreateStream @ 0x180024380 (AudioServerCreateStream.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800463D0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall GetThreadLogonSessionStringSid(unsigned __int16 **a1)
{
  unsigned int *v2; // rdi
  HANDLE CurrentThread; // rax
  signed int LastError; // eax
  signed int v5; // ebx
  unsigned int v6; // r8d
  unsigned int v7; // eax
  _DWORD *v8; // rdx
  DWORD TokenInformationLength; // [rsp+58h] [rbp+10h] BYREF
  void *TokenHandle; // [rsp+60h] [rbp+18h] BYREF
  LPWSTR StringSid; // [rsp+68h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  v2 = 0LL;
  StringSid = 0LL;
  CurrentThread = GetCurrentThread();
  if ( !OpenThreadToken(CurrentThread, 8u, 0, &TokenHandle) )
  {
LABEL_20:
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError <= 0 )
      goto LABEL_28;
    goto LABEL_27;
  }
  if ( GetTokenInformation(TokenHandle, TokenGroups, 0LL, 0, &TokenInformationLength) )
    goto LABEL_33;
  LastError = GetLastError();
  v5 = LastError;
  if ( LastError != 122 )
  {
    if ( LastError <= 0 )
      goto LABEL_28;
LABEL_27:
    v5 = (unsigned __int16)LastError | 0x80070000;
    goto LABEL_28;
  }
  v2 = (unsigned int *)CoTaskMemAlloc(TokenInformationLength);
  if ( v2 )
  {
LABEL_33:
    if ( GetTokenInformation(TokenHandle, TokenGroups, v2, TokenInformationLength, &TokenInformationLength) )
    {
      v6 = *v2;
      v7 = 0;
      if ( *v2 )
      {
        v8 = v2 + 4;
        while ( (*v8 & 0xC0000000) != 0xC0000000 )
        {
          ++v7;
          v8 += 4;
          if ( v7 >= v6 )
            goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        if ( v7 >= v6 )
        {
          v5 = 1365;
          goto LABEL_13;
        }
      }
      if ( ConvertSidToStringSidW(*(PSID *)&v2[4 * v7 + 2], &StringSid) )
      {
        v5 = 0;
        *a1 = StringSid;
        goto LABEL_13;
      }
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        goto LABEL_27;
LABEL_28:
      if ( v5 >= 0 )
        goto LABEL_13;
      goto LABEL_29;
    }
    goto LABEL_20;
  }
  v5 = -2147024882;
LABEL_29:
  if ( StringSid )
  {
    LocalFree(StringSid);
    StringSid = 0LL;
  }
LABEL_13:
  if ( v2 )
    CoTaskMemFree(v2);
  if ( (char *)TokenHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
  {
    CloseHandle(TokenHandle);
    TokenHandle = 0LL;
  }
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("GetThreadLogonSessionStringSid", 0x184u, v5);
  return (unsigned int)v5;
}
