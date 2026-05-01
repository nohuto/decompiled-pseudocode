/*
 * XREFs of ReleaseExclusiveCpuSets @ 0x180005E40
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001008 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z @ 0x18000682C (-IsProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180006CAC (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180007300 (__security_check_cookie.c)
 */

HRESULT __stdcall ReleaseExclusiveCpuSets()
{
  HANDLE CurrentProcess; // rax
  bool *v1; // r8
  int IsProcessStronglyNamed; // eax
  CallerIdentity *v3; // rcx
  bool *v4; // r8
  HRESULT v5; // ebx
  DWORD CurrentProcessId; // eax
  HANDLE v7; // rdi
  signed int LastError; // eax
  int v9; // ebx
  int v10; // eax
  char v12; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int16 v13; // [rsp+49h] [rbp-28h] BYREF
  int pvData; // [rsp+4Ch] [rbp-25h] BYREF
  int v15; // [rsp+50h] [rbp-21h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-1Dh] BYREF
  HRESULT v17; // [rsp+58h] [rbp-19h] BYREF
  __int128 v18; // [rsp+60h] [rbp-11h] BYREF
  __int128 v19; // [rsp+70h] [rbp-1h]
  __int64 v20; // [rsp+80h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+88h] [rbp+17h] BYREF
  HRESULT *v22; // [rsp+A8h] [rbp+37h]
  __int64 v23; // [rsp+B0h] [rbp+3Fh]

  v18 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  CurrentProcess = GetCurrentProcess();
  IsProcessStronglyNamed = ARI::ProcessToken::SysAppId::IsProcessStronglyNamed(CurrentProcess, &v12, v1);
  v5 = (unsigned __int16)IsProcessStronglyNamed | 0x80070000;
  if ( IsProcessStronglyNamed <= 0 )
    v5 = IsProcessStronglyNamed;
  if ( v5 >= 0 )
  {
    v5 = CallerIdentity::CheckCallerCapability(v3, &v13, v4);
    if ( v5 < 0 || v12 && (_BYTE)v13 )
    {
      if ( v5 >= 0 )
      {
        RtlGetDeviceFamilyInfoEnum(0LL, &v15, 0LL);
        if ( v15 == 5 )
        {
          v5 = -2147467263;
        }
        else
        {
          pvData = 0;
          pcbData = 4;
          if ( RegGetValueW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Policies\\Microsoft\\Windows\\GameDVR",
                 L"AllowAutoGameMode",
                 0x18u,
                 0LL,
                 &pvData,
                 &pcbData)
            || pvData )
          {
            CurrentProcessId = GetCurrentProcessId();
            v7 = OpenProcess(0x1000u, 0, CurrentProcessId);
            if ( v7 )
            {
              RmGameModeInitializeResourceRequest(&v18);
              v18 = 6uLL;
              HIDWORD(v19) = HIDWORD(v19) & 0xFFFFFFE0 | 0x10;
              *(_QWORD *)&v19 = 0x3200000002LL;
              DWORD2(v19) = 30;
              v9 = RmGameModeRegisterProcess(v7, &v18, 0LL);
              if ( v9 == -1073740008 )
              {
                RmGameModeUnregisterProcess(v7);
                v9 = RmGameModeRegisterProcess(v7, &v18, 0LL);
              }
              CloseHandle(v7);
              v10 = v9;
              v5 = v9 | 0x10000000;
              if ( v10 >= 0 )
                v5 = 0;
            }
            else
            {
              LastError = GetLastError();
              v5 = (unsigned __int16)LastError | 0x80070000;
              if ( LastError <= 0 )
                v5 = LastError;
            }
          }
          else
          {
            v5 = -2147019873;
          }
        }
      }
    }
    else
    {
      v5 = -2147024891;
    }
  }
  if ( (unsigned int)dword_18000D000 > 4 )
  {
    v17 = v5;
    v22 = &v17;
    v23 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_18000D000,
      (unsigned __int8 *)dword_18000A070,
      0LL,
      0LL,
      3u,
      &v21);
  }
  return v5;
}
