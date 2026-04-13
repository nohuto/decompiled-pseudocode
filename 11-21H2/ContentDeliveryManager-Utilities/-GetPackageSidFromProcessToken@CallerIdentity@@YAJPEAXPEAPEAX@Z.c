/*
 * XREFs of ?GetPackageSidFromProcessToken@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x18008488C
 * Callers:
 *     ?GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z @ 0x1800847D4 (-GetPackageSidFromProcessHandle@CallerIdentity@@YAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CallerIdentity::GetPackageSidFromProcessToken(HANDLE TokenHandle, _QWORD *a2, void **a3)
{
  signed int v5; // ebx
  signed int LastError; // eax
  PSID *v7; // rdi
  signed int v8; // eax
  DWORD LengthSid; // ebx
  HLOCAL v10; // rax
  void *v11; // rsi
  signed int v12; // eax
  SIZE_T uBytes; // [rsp+50h] [rbp+18h] BYREF

  if ( GetTokenInformation(TokenHandle, TokenAppContainerSid, 0LL, 0, (PDWORD)&uBytes) )
  {
    return (unsigned int)-2147418113;
  }
  else
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError == 122 )
      goto LABEL_7;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
    {
LABEL_7:
      v7 = (PSID *)LocalAlloc(0x40u, (unsigned int)uBytes);
      if ( v7 )
      {
        if ( GetTokenInformation(TokenHandle, TokenAppContainerSid, v7, uBytes, (PDWORD)&uBytes) )
        {
          if ( *v7 )
          {
            LengthSid = GetLengthSid(*v7);
            v10 = LocalAlloc(0x40u, LengthSid);
            v11 = v10;
            if ( v10 )
            {
              if ( CopySid(LengthSid, v10, *v7) )
              {
                v5 = 0;
                *a2 = v11;
              }
              else
              {
                v12 = GetLastError();
                v5 = v12;
                if ( v12 > 0 )
                  v5 = (unsigned __int16)v12 | 0x80070000;
                if ( v5 >= 0 )
                  v5 = -2147467259;
                LocalFree(v11);
              }
            }
            else
            {
              v5 = -2147024882;
            }
          }
          else
          {
            v5 = -2147023728;
          }
          LocalFree(v7);
        }
        else
        {
          v8 = GetLastError();
          v5 = v8;
          if ( v8 > 0 )
            v5 = (unsigned __int16)v8 | 0x80070000;
          if ( v5 >= 0 )
            return (unsigned int)-2147467259;
        }
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
  }
  return (unsigned int)v5;
}
