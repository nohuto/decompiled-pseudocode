/*
 * XREFs of ?GetProcessImageInfoByPID@Common@@YAJKPEAGPEAK01@Z @ 0x180044C58
 * Callers:
 *     ?GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z @ 0x180044F38 (-GetProcessWorkingDirectoryByPID@Common@@YAJK_NPEAGPEAK@Z.c)
 *     ?GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180046F74 (-GetProcessNameByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800476E4 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004B744 (memset_0.c)
 */

__int64 __fastcall Common::GetProcessImageInfoByPID(
        DWORD dwProcessId,
        char *a2,
        unsigned __int16 *a3,
        unsigned int *a4,
        unsigned __int16 *a5)
{
  signed int v8; // esi
  signed int v9; // ebp
  unsigned int v10; // edi
  HANDLE v12; // rbx
  signed int LastError; // eax
  signed int v14; // eax
  wchar_t *v15; // rax
  wchar_t *v16; // rdx
  __int64 v17; // r8
  _WORD *v18; // rax
  __int64 v19; // r9
  __int64 v20; // rcx
  signed __int64 v21; // rdx
  __int64 v22; // r8
  __int16 v23; // ax
  char *v24; // rax
  __int64 v25; // rcx
  WCHAR *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r11
  signed __int64 v30; // r8
  __int16 v31; // ax
  unsigned int *v32; // rax
  DWORD dwSize[4]; // [rsp+20h] [rbp-888h] BYREF
  WCHAR ExeName[1040]; // [rsp+30h] [rbp-878h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = 0;
  memset_0(ExeName, 0, sizeof(ExeName));
  dwSize[0] = 1040;
  v12 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v12 )
    goto LABEL_8;
  LastError = GetLastError();
  v8 = (unsigned __int16)LastError | 0x80070000;
  if ( LastError <= 0 )
    v8 = LastError;
  if ( v8 >= 0 )
  {
LABEL_8:
    if ( QueryFullProcessImageNameW(v12, 0, ExeName, dwSize) )
      goto LABEL_9;
    v14 = GetLastError();
    v8 = (unsigned __int16)v14 | 0x80070000;
    if ( v14 <= 0 )
      v8 = v14;
    if ( v8 >= 0 )
    {
LABEL_9:
      v15 = wcsrchr(ExeName, 0x5Cu);
      if ( v15 )
      {
        *v15 = 0;
        v16 = v15 + 1;
        if ( a2 )
        {
          if ( v15 == (wchar_t *)-2LL )
          {
            v9 = -2147024809;
          }
          else
          {
            v17 = 0x7FFFFFFFLL;
            v18 = v15 + 1;
            do
            {
              if ( !*v18 )
                break;
              ++v18;
              --v17;
            }
            while ( v17 );
            v9 = v17 == 0 ? 0x80070057 : 0;
            v19 = (0x7FFFFFFF - v17) & -(__int64)(v17 != 0);
            if ( v17 )
            {
              v20 = *(unsigned int *)a3;
              if ( (unsigned __int64)(v20 - 1) > 0x7FFFFFFE )
              {
                v9 = -2147024809;
                if ( *(_DWORD *)a3 )
                  *(_WORD *)a2 = 0;
              }
              else
              {
                v21 = (char *)v16 - a2;
                v22 = 2147483646 - v20;
                do
                {
                  if ( !(v22 + v20) )
                    break;
                  v23 = *(_WORD *)&a2[v21];
                  if ( !v23 )
                    break;
                  *(_WORD *)a2 = v23;
                  a2 += 2;
                  --v20;
                }
                while ( v20 );
                v24 = a2 - 2;
                if ( v20 )
                  v24 = a2;
                *(_WORD *)v24 = 0;
                v9 = v20 == 0 ? 0x8007007A : 0;
              }
              *(_DWORD *)a3 = v19 + 1;
            }
          }
        }
        if ( a4 )
        {
          v25 = 0x7FFFFFFFLL;
          v26 = ExeName;
          do
          {
            if ( !*v26 )
              break;
            ++v26;
            --v25;
          }
          while ( v25 );
          v10 = v25 == 0 ? 0x80070057 : 0;
          v27 = (0x7FFFFFFF - v25) & ((unsigned __int128)-(__int128)(unsigned __int64)v25 >> 64);
          if ( v25 )
          {
            v28 = *(unsigned int *)a5;
            if ( (unsigned __int64)(v28 - 1) > 0x7FFFFFFE )
            {
              v10 = -2147024809;
              if ( *(_DWORD *)a5 )
                *(_WORD *)a4 = 0;
            }
            else
            {
              v29 = 2147483646 - v28;
              v30 = (char *)ExeName - (char *)a4;
              do
              {
                if ( !(v29 + v28) )
                  break;
                v31 = *(_WORD *)((char *)a4 + v30);
                if ( !v31 )
                  break;
                *(_WORD *)a4 = v31;
                a4 = (unsigned int *)((char *)a4 + 2);
                --v28;
              }
              while ( v28 );
              v32 = (unsigned int *)((char *)a4 - 2);
              if ( v28 )
                v32 = a4;
              v10 = v28 == 0 ? 0x8007007A : 0;
              *(_WORD *)v32 = 0;
            }
            *(_DWORD *)a5 = v27 + 1;
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
  }
  if ( v9 < 0 )
    v10 = v9;
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v10;
}
