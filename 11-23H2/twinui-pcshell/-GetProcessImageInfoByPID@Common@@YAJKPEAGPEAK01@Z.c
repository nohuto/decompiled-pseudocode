/*
 * XREFs of ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x18002F584
 * Callers:
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18002F464 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x1803DEA3C (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x1803E01B0 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18074024C (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x180042DF8 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

__int64 __fastcall Common::GetProcessImageInfoByPID(
        DWORD dwProcessId,
        wchar_t *a2,
        unsigned __int16 *a3,
        wchar_t *a4,
        unsigned __int16 *a5)
{
  signed int v8; // edi
  signed int v9; // esi
  int v10; // ebp
  HANDLE v12; // rbx
  wchar_t *v13; // rax
  const wchar_t *v14; // r8
  __int64 v15; // r9
  _WORD *v16; // rax
  int v17; // r11d
  signed int LastError; // eax
  signed int v20; // eax
  DWORD dwSize; // [rsp+20h] [rbp-888h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-880h] BYREF
  WCHAR ExeName[1040]; // [rsp+30h] [rbp-878h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = 0;
  memset_0(ExeName, 0, sizeof(ExeName));
  dwSize = 1040;
  v12 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v12 )
    goto LABEL_19;
  LastError = GetLastError();
  v8 = LastError;
  if ( LastError > 0 )
    v8 = (unsigned __int16)LastError | 0x80070000;
  if ( v8 >= 0 )
  {
LABEL_19:
    if ( QueryFullProcessImageNameW(v12, 0, ExeName, &dwSize) )
      goto LABEL_3;
    v20 = GetLastError();
    v8 = v20;
    if ( v20 > 0 )
      v8 = (unsigned __int16)v20 | 0x80070000;
    if ( v8 >= 0 )
    {
LABEL_3:
      v13 = wcsrchr(ExeName, 0x5Cu);
      if ( v13 )
      {
        v14 = v13 + 1;
        *v13 = 0;
        if ( a2 )
        {
          if ( v13 == (wchar_t *)-2LL )
          {
            v9 = -2147024809;
          }
          else
          {
            v15 = 0x7FFFFFFFLL;
            v16 = v13 + 1;
            do
            {
              if ( !*v16 )
                break;
              ++v16;
              --v15;
            }
            while ( v15 );
            v9 = v15 == 0 ? 0x80070057 : 0;
            if ( v15 )
            {
              v9 = StringCchCopyW(a2, *(unsigned int *)a3, v14);
              *(_DWORD *)a3 = v17 + 1;
            }
          }
        }
        if ( a4 )
        {
          v10 = StringCchLengthW(ExeName, 0x7FFFFFFFuLL, &v22);
          if ( v10 >= 0 )
          {
            v10 = StringCchCopyW(a4, *(unsigned int *)a5, ExeName);
            *(_DWORD *)a5 = v22 + 1;
          }
        }
      }
      else
      {
        v8 = -2147418113;
      }
    }
    if ( v12 )
      CloseHandle(v12);
    if ( v8 >= 0 )
    {
      if ( v9 < 0 )
        return (unsigned int)v9;
      return (unsigned int)v10;
    }
  }
  return (unsigned int)v8;
}
