/*
 * XREFs of __std_fs_get_stats @ 0x1805E34A4
 * Callers:
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x1805824B4 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?status@directory_entry@filesystem@std@@QEBA?AVfile_status@23@XZ @ 0x180587C84 (-status@directory_entry@filesystem@std@@QEBA-AVfile_status@23@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

DWORD __fastcall _std_fs_get_stats(LPCWSTR lpFileName, __int64 a2, __int64 a3, int a4)
{
  DWORD result; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  HANDLE FileW; // rdi
  DWORD LastError; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE v19[4]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD FileInformation[3]; // [rsp+44h] [rbp-34h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+58h] [rbp-20h]
  unsigned int v23; // [rsp+60h] [rbp-18h]
  unsigned int v24; // [rsp+64h] [rbp-14h]

  if ( a4 == -1 )
  {
    if ( !GetFileAttributesExW(lpFileName, GetFileExInfoStandard, FileInformation) )
      return GetLastError();
    if ( (FileInformation[0] & 0x400) == 0 )
    {
      v7 = v23;
      *(_DWORD *)(a2 + 16) = FileInformation[0];
      v8 = v24 + (v7 << 32);
      *(_QWORD *)a2 = v22;
      *(_QWORD *)(a2 + 8) = v8;
      return 0;
    }
  }
  else if ( (a4 & 0x400) == 0 )
  {
    *(_DWORD *)(a2 + 16) = a4;
    return 0;
  }
  FileW = CreateFileW(lpFileName, 0x80u, 7u, 0LL, 3u, 0x2000000u, 0LL);
  if ( FileW != (HANDLE)-1LL || (result = GetLastError()) == 0 )
  {
    if ( GetFileInformationByHandleEx(FileW, FileBasicInfo, v19, 0x28u) )
    {
      *(_DWORD *)(a2 + 16) = v23;
      *(_QWORD *)a2 = v21;
      if ( FileW != (HANDLE)-1LL && !CloseHandle(FileW) )
      {
        _o_terminate(v16, v15, v17, v18);
        __debugbreak();
        JUMPOUT(0x1805E3627LL);
      }
      return 0;
    }
    LastError = GetLastError();
    if ( FileW != (HANDLE)-1LL && !CloseHandle(FileW) )
    {
      _o_terminate(v12, v11, v13, v14);
      __debugbreak();
    }
    return LastError;
  }
  return result;
}
