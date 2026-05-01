/*
 * XREFs of ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x1800A9200
 * Callers:
 *     ?ReloadKnownGameList@IsGameManager@@UEAAXXZ @ 0x1800A87D0 (-ReloadKnownGameList@IsGameManager@@UEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___::Run @ 0x1803DFD30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c15b6c4b0f25e6c8fa76989c1b5edcd___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z @ 0x1800A94E0 (-GetKnownFolderSubFolder@@YAJAEBU_GUID@@PEBG1PEAVString@Internal@Windows@@@Z.c)
 *     ?EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ @ 0x1800A9610 (-EnsureGameDVRFolderAccess@IsGameManager@@AEAAJXZ.c)
 *     ?CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z @ 0x1800BFCC4 (-CreateQueryKnownGameListInstance@KnownGameList@@YAJPEAPEAUIQueryKnownGameList@1@PEBG@Z.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@P6AXXZ@Z @ 0x180112474 (-get@-$static_lazy@VBroadcastDVRTraceProvider@@@details@wil@@QEAAPEAVBroadcastDVRTraceProvider@@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x1801AAC38 (-_RegSetKeyValueWithSDDL@@YAKPEAUHKEY__@@PEBG1KPEBXKPEAU_SECURITY_ATTRIBUTES@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ScanKGLForFSECompat@IsGameManager@@AEAAJXZ @ 0x1803DFDE0 (-ScanKGLForFSECompat@IsGameManager@@AEAAJXZ.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1803E1058 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall IsGameManager::LoadKGLFromGameDVRFolder(RTL_SRWLOCK *this, char a2)
{
  HSTRING v3; // rbx
  int KnownFolderSubFolder; // eax
  unsigned int v5; // r14d
  const WCHAR *StringRawBuffer; // rax
  IsGameManager *v7; // rcx
  int v8; // eax
  int v9; // eax
  struct KnownGameList::IQueryKnownGameList **v10; // r14
  RTL_SRWLOCK *v11; // r12
  const unsigned __int16 *v12; // r8
  int QueryKnownGameListInstance; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  _DWORD *v16; // rcx
  int v17; // ecx
  int v18; // r9d
  int updated; // eax
  int v21; // eax
  signed int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // eax
  int v26; // [rsp+20h] [rbp-E0h]
  int v27; // [rsp+20h] [rbp-E0h]
  struct _SECURITY_ATTRIBUTES *v28; // [rsp+30h] [rbp-D0h]
  int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31[2]; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v32; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v34; // [rsp+60h] [rbp-A0h]
  __int128 v35; // [rsp+70h] [rbp-90h]
  char v36; // [rsp+80h] [rbp-80h]
  char v37[4]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v38; // [rsp+8Ch] [rbp-74h]
  char v39[28]; // [rsp+A0h] [rbp-60h] BYREF
  char v40[4]; // [rsp+BCh] [rbp-44h] BYREF
  _BYTE v41[32]; // [rsp+C0h] [rbp-40h] BYREF
  char v42[40]; // [rsp+E0h] [rbp-20h] BYREF
  char v43[624]; // [rsp+108h] [rbp+8h] BYREF
  char v44[4]; // [rsp+378h] [rbp+278h] BYREF
  char v45[4]; // [rsp+37Ch] [rbp+27Ch] BYREF
  char v46[16]; // [rsp+380h] [rbp+280h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3C8h] [rbp+2C8h]

  v30 = 0;
  v3 = 0LL;
  v32 = 0LL;
  string = 0LL;
  *(_QWORD *)&v34 = this;
  *((_QWORD *)&v34 + 1) = &v30;
  v35 = v34;
  v36 = 1;
  KnownFolderSubFolder = GetKnownFolderSubFolder(
                           (KNOWNFOLDERID *)&FOLDERID_LocalAppData,
                           L"Microsoft\\GameDVR",
                           0LL,
                           (struct Windows::Internal::String *)&string);
  v5 = KnownFolderSubFolder;
  if ( KnownFolderSubFolder < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A2,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)KnownFolderSubFolder,
      v26);
    goto LABEL_17;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  CreateDirectoryW(StringRawBuffer, 0LL);
  v8 = IsGameManager::EnsureGameDVRFolderAccess(v7);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A6,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v8,
      v26);
  v9 = GetKnownFolderSubFolder(
         (KNOWNFOLDERID *)&FOLDERID_LocalAppData,
         L"Microsoft\\GameDVR\\KnownGameList.bin",
         0LL,
         (struct Windows::Internal::String *)&v32);
  v5 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AB,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9,
      v26);
    v3 = v32;
    goto LABEL_17;
  }
  *(_QWORD *)v31 = this + 4;
  AcquireSRWLockExclusive(this + 4);
  v3 = v32;
  v10 = (struct KnownGameList::IQueryKnownGameList **)WindowsGetStringRawBuffer(v32, 0LL);
  v11 = this + 3;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&this[3]);
  QueryKnownGameListInstance = KnownGameList::CreateQueryKnownGameListInstance((KnownGameList *)&this[3], v10, v12);
  v30 = QueryKnownGameListInstance;
  if ( (unsigned int)(QueryKnownGameListInstance + 2147024894) > 1
    && QueryKnownGameListInstance != -2147024809
    && QueryKnownGameListInstance < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B4,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)QueryKnownGameListInstance,
      v26);
  }
  ReleaseSRWLockExclusive(this + 4);
  if ( v30 >= 0 )
  {
    *(_QWORD *)&v34 = this + 4;
    AcquireSRWLockShared(this + 4);
    (*(void (__fastcall **)(PVOID, char *))(*(_QWORD *)v11->Ptr + 80LL))(v11->Ptr, (char *)&this[5].Ptr + 4);
    if ( !a2 )
    {
LABEL_11:
      v31[0] = HIDWORD(this[5].Ptr);
      v15 = _RegSetKeyValueWithSDDL(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
              L"KGLRevision",
              4u,
              v31,
              4u,
              v28);
      if ( v15 > 0 )
        v15 = (unsigned __int16)v15 | 0x80070000;
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2FF,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v15,
          v27);
      ReleaseSRWLockShared(this + 4);
      goto LABEL_16;
    }
    this[13].Ptr = (PVOID)(GetTickCount64() + 30000);
    updated = IsGameManager::UpdateGameConfigStoreFromKGL((IsGameManager *)this);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2CC,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)updated,
        v26);
    v21 = IsGameManager::ScanKGLForFSECompat((IsGameManager *)this);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2CE,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v21,
        v26);
    if ( WaitForSingleObject(this[12].Ptr, 0) )
    {
      v31[0] = HIDWORD(this[5].Ptr);
      v22 = _RegSetKeyValueWithSDDL(
              HKEY_CURRENT_USER,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
              L"KGLToGCSUpdatedRevision",
              4u,
              v31,
              4u,
              v28);
      if ( v22 > 0 )
        v22 = (unsigned __int16)v22 | 0x80070000;
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2D5,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v22,
          v26);
    }
    v23 = (*(__int64 (__fastcall **)(PVOID, char *))(*(_QWORD *)v11->Ptr + 72LL))(v11->Ptr, v37);
    v5 = v23;
    if ( v23 >= 0 )
    {
      v25 = v38;
      if ( v38 >= 2 )
      {
        v23 = (*(__int64 (__fastcall **)(PVOID, char *))(*(_QWORD *)v11->Ptr + 104LL))(v11->Ptr, v39);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 734LL;
          goto LABEL_65;
        }
        v23 = (*(__int64 (__fastcall **)(PVOID, __int64, char *))(*(_QWORD *)this[2].Ptr + 88LL))(this[2].Ptr, 2LL, v40);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 736LL;
          goto LABEL_65;
        }
        v25 = v38;
      }
      if ( v25 >= 3 )
      {
        v23 = (*(__int64 (__fastcall **)(PVOID, _BYTE *))(*(_QWORD *)v11->Ptr + 112LL))(v11->Ptr, v41);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 743LL;
          goto LABEL_65;
        }
        v23 = (*(__int64 (__fastcall **)(PVOID, __int64, char *))(*(_QWORD *)this[2].Ptr + 88LL))(this[2].Ptr, 3LL, v42);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 745LL;
          goto LABEL_65;
        }
        v23 = (*(__int64 (__fastcall **)(PVOID, __int64, char *, __int64))(*(_QWORD *)this[2].Ptr + 88LL))(
                this[2].Ptr,
                4LL,
                v43,
                624LL);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 746LL;
          goto LABEL_65;
        }
        v25 = v38;
      }
      if ( v25 >= 4 )
      {
        v23 = (*(__int64 (__fastcall **)(PVOID, _BYTE *))(*(_QWORD *)v11->Ptr + 120LL))(v11->Ptr, v41);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 752LL;
          goto LABEL_65;
        }
        v23 = (*(__int64 (__fastcall **)(PVOID, __int64, char *))(*(_QWORD *)this[2].Ptr + 88LL))(this[2].Ptr, 6LL, v44);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 754LL;
          goto LABEL_65;
        }
        v23 = (*(__int64 (__fastcall **)(PVOID, __int64, char *))(*(_QWORD *)this[2].Ptr + 88LL))(this[2].Ptr, 7LL, v45);
        v5 = v23;
        if ( v23 < 0 )
        {
          v24 = 755LL;
          goto LABEL_65;
        }
        v25 = v38;
      }
      if ( v25 < 5 )
        goto LABEL_11;
      v23 = (*(__int64 (__fastcall **)(PVOID, _BYTE *))(*(_QWORD *)v11->Ptr + 128LL))(v11->Ptr, v41);
      v5 = v23;
      if ( v23 >= 0 )
      {
        v23 = (*(__int64 (__fastcall **)(PVOID, __int64, char *))(*(_QWORD *)this[2].Ptr + 88LL))(this[2].Ptr, 8LL, v46);
        v5 = v23;
        if ( v23 >= 0 )
          goto LABEL_11;
        v24 = 763LL;
      }
      else
      {
        v24 = 761LL;
      }
    }
    else
    {
      v24 = 728LL;
    }
LABEL_65:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v23,
      v26);
    ReleaseSRWLockShared(this + 4);
    goto LABEL_17;
  }
LABEL_16:
  v5 = 0;
LABEL_17:
  v16 = *(_DWORD **)(wil::details::static_lazy<BroadcastDVRTraceProvider>::get(
                       v14,
                       _lambda_834c0077cad59c9dc0a3a987d1005045_::_lambda_invoker_cdecl_)
                   + 8);
  if ( *v16 > 5u && (unsigned __int8)tlgKeywordOn(v16, 0x400000000000LL) )
  {
    v31[0] = v30;
    LODWORD(v32) = HIDWORD(this[5].Ptr);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v17,
      (unsigned int)&unk_180847CED,
      0,
      v18,
      (__int64)&v32,
      (__int64)v31);
  }
  if ( string )
    WindowsDeleteString(string);
  if ( v3 )
    WindowsDeleteString(v3);
  return v5;
}
