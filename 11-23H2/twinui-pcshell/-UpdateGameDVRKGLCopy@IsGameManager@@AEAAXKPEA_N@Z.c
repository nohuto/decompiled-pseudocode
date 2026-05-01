/*
 * XREFs of ?UpdateGameDVRKGLCopy@IsGameManager@@AEAAXKPEA_N@Z @ 0x1800C0358
 * Callers:
 *     ?ReloadKnownGameList@IsGameManager@@UEAAXXZ @ 0x1800A87D0 (-ReloadKnownGameList@IsGameManager@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x1800A94E0 (-GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z.c)
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x1800BFCC4 (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 *     ?GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z @ 0x1800C0768 (-GetKGLLocationForApp@IsGameManager@@AEAAJPEBG0PEAVString@Internal@Windows@@@Z.c)
 *     ?RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z @ 0x1800EBC44 (-RegisterKGLLocationForNotifications@IsGameManager@@AEAAJPEAUKGLUpdateLocationInfo@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z @ 0x1803DF5A0 (-IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall IsGameManager::UpdateGameDVRKGLCopy(IsGameManager *this, unsigned int a2, bool *a3)
{
  HSTRING v3; // rdi
  unsigned int v4; // r15d
  __int64 v5; // r12
  wchar_t **v6; // rsi
  __int64 v7; // rbx
  int v8; // r13d
  int KnownFolderSubFolder; // r14d
  int v10; // eax
  BOOL IsStringEmpty; // eax
  PCWSTR StringRawBuffer; // r15
  PCWSTR v13; // rax
  signed __int64 v14; // r15
  int v15; // ecx
  int v16; // edx
  struct KnownGameList::IQueryKnownGameList **v17; // rax
  const unsigned __int16 *v18; // r8
  int QueryKnownGameListInstance; // eax
  int v20; // r14d
  const WCHAR *v21; // rax
  KNOWNFOLDERID *v22; // rcx
  int v23; // eax
  const WCHAR *v24; // rax
  const WCHAR *v25; // rax
  int v26; // eax
  HSTRING v27; // rbx
  const WCHAR *v28; // rsi
  const WCHAR *v29; // rax
  BOOL v30; // eax
  const WCHAR *v31; // rsi
  const WCHAR *v32; // rax
  int v33; // esi
  DWORD LastError; // eax
  int v35; // [rsp+20h] [rbp-28h]
  unsigned int v36; // [rsp+24h] [rbp-24h]
  unsigned int v37; // [rsp+28h] [rbp-20h]
  unsigned int v38; // [rsp+2Ch] [rbp-1Ch] BYREF
  HSTRING string; // [rsp+30h] [rbp-18h] BYREF
  __int64 v40[2]; // [rsp+38h] [rbp-10h] BYREF
  HSTRING v44; // [rsp+A8h] [rbp+60h] BYREF

  v36 = 0;
  v4 = -1;
  v37 = -1;
  *a3 = 0;
  v5 = 0LL;
  v6 = off_180985328;
  do
  {
    v7 = 0LL;
    v40[0] = 0LL;
    v38 = 0;
    LOBYTE(v44) = 0;
    LOBYTE(v3) = 0;
    v35 = (int)v3;
    v8 = 0;
    KnownFolderSubFolder = 0;
    v10 = *((_DWORD *)v6 - 2);
    switch ( v10 )
    {
      case 0:
        v8 = 5;
        v3 = (HSTRING)(72 * v5);
        if ( WindowsIsStringEmpty((HSTRING)v6[6]) )
        {
          KnownFolderSubFolder = GetKnownFolderSubFolder(
                                   (KNOWNFOLDERID *)&FOLDERID_LocalAppData,
                                   *v6,
                                   0LL,
                                   (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations + (_QWORD)v3 + 56));
          if ( KnownFolderSubFolder < 0 )
            goto LABEL_26;
        }
        if ( WindowsIsStringEmpty((HSTRING)v6[5]) )
        {
          v22 = (KNOWNFOLDERID *)&FOLDERID_LocalAppData;
LABEL_38:
          KnownFolderSubFolder = GetKnownFolderSubFolder(
                                   v22,
                                   *v6,
                                   v6[1],
                                   (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations + (_QWORD)v3 + 48));
          goto LABEL_14;
        }
LABEL_15:
        LODWORD(v3) = v35;
        break;
      case 1:
        string = 0LL;
        KnownFolderSubFolder = IsGameManager::GetKGLLocationForApp(
                                 (IsGameManager *)1,
                                 *v6,
                                 v6[1],
                                 (struct Windows::Internal::String *)&string);
        if ( KnownFolderSubFolder < 0 )
        {
          v3 = string;
        }
        else
        {
          IsStringEmpty = WindowsIsStringEmpty((HSTRING)v6[5]);
          v3 = string;
          if ( IsStringEmpty )
            goto LABEL_52;
          StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)v6[5], 0LL);
          v13 = WindowsGetStringRawBuffer(v3, 0LL);
          v14 = (char *)StringRawBuffer - (char *)v13;
          do
          {
            v15 = *(PCWSTR)((char *)v13 + v14);
            v16 = *v13 - v15;
            if ( v16 )
              break;
            ++v13;
          }
          while ( v15 );
          if ( v16 )
          {
LABEL_52:
            WindowsDeleteString((HSTRING)v6[5]);
            v6[5] = (wchar_t *)v3;
            v3 = 0LL;
            string = 0LL;
            KnownFolderSubFolder = IsGameManager::GetKGLLocationForApp(
                                     (IsGameManager *)(v5 + 8 * v5 + 7),
                                     *v6,
                                     0LL,
                                     (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations
                                                                        + 64 * v5
                                                                        + 8 * v5
                                                                        + 56));
            v23 = (unsigned __int8)v35;
            if ( KnownFolderSubFolder >= 0 )
              v23 = 1;
            v35 = v23;
          }
          else
          {
            LOBYTE(v44) = 1;
          }
        }
        if ( v3 )
          WindowsDeleteString(v3);
        v4 = v37;
LABEL_14:
        if ( KnownFolderSubFolder < 0 )
          goto LABEL_20;
        goto LABEL_15;
      case 2:
        if ( WindowsIsStringEmpty((HSTRING)v6[6]) )
        {
          v3 = (HSTRING)(72 * v5);
          KnownFolderSubFolder = GetKnownFolderSubFolder(
                                   (KNOWNFOLDERID *)&FOLDERID_Windows,
                                   *v6,
                                   0LL,
                                   (struct Windows::Internal::String *)((char *)&g_rgKGLUpdateLocations + 72 * v5 + 56));
          if ( KnownFolderSubFolder < 0 )
            goto LABEL_26;
        }
        else
        {
          v3 = (HSTRING)(72 * v5);
        }
        if ( WindowsIsStringEmpty((HSTRING)v6[5]) )
        {
          v22 = (KNOWNFOLDERID *)&FOLDERID_Windows;
          goto LABEL_38;
        }
        goto LABEL_15;
    }
    if ( !WindowsIsStringEmpty((HSTRING)v6[6]) )
    {
      if ( v6[3] == (wchar_t *)-1LL || (_BYTE)v3 )
        IsGameManager::RegisterKGLLocationForNotifications(
          (IsGameManager *)(9 * v5),
          (struct KGLUpdateLocationInfo *)((char *)&g_rgKGLUpdateLocations + 72 * v5));
      v7 = v40[0];
    }
LABEL_20:
    if ( (_BYTE)v44 )
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v40);
      goto LABEL_30;
    }
    if ( KnownFolderSubFolder >= 0 )
    {
      do
      {
        v17 = (struct KnownGameList::IQueryKnownGameList **)WindowsGetStringRawBuffer((HSTRING)v6[5], 0LL);
        QueryKnownGameListInstance = KnownGameList::CreateQueryKnownGameListInstance((KnownGameList *)v40, v17, v18);
        v20 = QueryKnownGameListInstance;
        if ( !v8 )
          break;
        if ( QueryKnownGameListInstance != -2147024864 )
          break;
        Sleep(0x64u);
        --v8;
      }
      while ( v8 );
      v7 = v40[0];
      if ( v20 >= 0 )
      {
        if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v40[0] + 80LL))(v40[0], &v38) >= 0 )
        {
          if ( v38 > a2 && v38 > v36 || *((_BYTE *)v6 + 17) && v38 >= a2 && v38 >= v36 )
          {
            v36 = v38;
            if ( v4 != -1 && *((_BYTE *)&g_rgKGLUpdateLocations + 72 * v4 + 24) )
            {
              v24 = WindowsGetStringRawBuffer(*((HSTRING *)&g_rgKGLUpdateLocations + 9 * v4 + 6), 0LL);
              DeleteFileW(v24);
            }
            v4 = v5;
            v37 = v5;
          }
          else if ( *((_BYTE *)v6 + 16) )
          {
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v40);
            v25 = WindowsGetStringRawBuffer((HSTRING)v6[5], 0LL);
            DeleteFileW(v25);
            v7 = v40[0];
          }
        }
        goto LABEL_28;
      }
    }
LABEL_26:
    if ( *((_BYTE *)v6 + 16) )
    {
      v21 = WindowsGetStringRawBuffer((HSTRING)v6[5], 0LL);
      DeleteFileW(v21);
    }
LABEL_28:
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_30:
    v5 = (unsigned int)(v5 + 1);
    v6 += 9;
  }
  while ( (unsigned int)v5 < 7 );
  if ( v4 != -1 )
  {
    v44 = 0LL;
    v26 = GetKnownFolderSubFolder(
            (KNOWNFOLDERID *)&FOLDERID_LocalAppData,
            L"Microsoft\\GameDVR\\KnownGameList.bin",
            0LL,
            (struct Windows::Internal::String *)&v44);
    v27 = v44;
    if ( v26 >= 0 )
    {
      AcquireSRWLockExclusive((PSRWLOCK)this + 4);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 3);
      if ( *((_BYTE *)&g_rgKGLUpdateLocations + 72 * v4 + 24) )
      {
        v28 = WindowsGetStringRawBuffer(v27, 0LL);
        v29 = WindowsGetStringRawBuffer(*((HSTRING *)&g_rgKGLUpdateLocations + 9 * v4 + 6), 0LL);
        v30 = MoveFileExW(v29, v28, 3u);
      }
      else
      {
        v31 = WindowsGetStringRawBuffer(v27, 0LL);
        v32 = WindowsGetStringRawBuffer(*((HSTRING *)&g_rgKGLUpdateLocations + 9 * v4 + 6), 0LL);
        v30 = CopyFileW(v32, v31, 0);
      }
      v33 = v30;
      if ( v30 )
        LastError = 0;
      else
        LastError = GetLastError();
      GameDVRTraceProvider::IsGameManager_KGLUpdated(v4, v33, LastError);
      *a3 = 1;
      ReleaseSRWLockExclusive((PSRWLOCK)this + 4);
    }
    if ( v27 )
      WindowsDeleteString(v27);
  }
}
