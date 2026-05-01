/*
 * XREFs of ?UpdateGameFullPathInGameConfigStore@IsGameManager@@AEAAJKU_GUID@@@Z @ 0x1803E1670
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800398E0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?GetProcessFullPathFromProcessId@IsGameManager@@AEAAJKPEAVString@Internal@Windows@@@Z @ 0x18003F1C4 (-GetProcessFullPathFromProcessId@IsGameManager@@AEAAJKPEAVString@Internal@Windows@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsGameManager::UpdateGameFullPathInGameConfigStore(IsGameManager *this, DWORD a2, struct _GUID *a3)
{
  int ProcessFullPathFromProcessId; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 (__fastcall *v9)(__int64, __int128 *, __int64, PCWSTR, UINT32); // rsi
  UINT32 v10; // edi
  PCWSTR StringRawBuffer; // rax
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HSTRING string; // [rsp+68h] [rbp+20h] BYREF

  string = 0LL;
  ProcessFullPathFromProcessId = IsGameManager::GetProcessFullPathFromProcessId(
                                   this,
                                   a2,
                                   (struct Windows::Internal::String *)&string);
  v6 = ProcessFullPathFromProcessId;
  if ( ProcessFullPathFromProcessId < 0 )
  {
    v7 = 2575LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)ProcessFullPathFromProcessId);
    goto LABEL_7;
  }
  v8 = *((_QWORD *)this + 2);
  v9 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64, PCWSTR, UINT32))(*(_QWORD *)v8 + 72LL);
  v10 = 2 * WindowsGetStringLen(string);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v13 = (__int128)*a3;
  ProcessFullPathFromProcessId = v9(v8, &v13, 23LL, StringRawBuffer, v10);
  v6 = ProcessFullPathFromProcessId;
  if ( ProcessFullPathFromProcessId < 0 )
  {
    v7 = 2577LL;
    goto LABEL_5;
  }
  v6 = 0;
LABEL_7:
  if ( string )
    WindowsDeleteString(string);
  return v6;
}
