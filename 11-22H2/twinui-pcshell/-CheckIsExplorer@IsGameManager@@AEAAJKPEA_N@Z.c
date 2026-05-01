/*
 * XREFs of ?CheckIsExplorer@IsGameManager@@AEAAJKPEA_N@Z @ 0x180039A10
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800398E0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsGameManager::CheckIsExplorer(IsGameManager *this, __int64 a2, bool *a3)
{
  int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // ebx
  __int64 v7; // rdi
  const unsigned __int16 * near *v8; // rbx
  PCWSTR StringRawBuffer; // rax
  bool v10; // al
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  *a3 = 0;
  v4 = (*(__int64 (__fastcall **)(IsGameManager *, __int64, HSTRING *))(*(_QWORD *)this + 104LL))(this, a2, &string);
  v5 = v4;
  v6 = -2147024891;
  if ( v4 != -2147024891 )
  {
    v6 = -2147024809;
    if ( v4 != -2147024809 )
    {
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x811,
          (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)(unsigned int)v4,
          v12);
        v6 = v5;
      }
      else
      {
        v7 = 0LL;
        if ( !*a3 )
        {
          do
          {
            if ( (_DWORD)v7 )
              break;
            v8 = (&g_rgExplorerApps)[v7];
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            v10 = (unsigned int)_o__wcsicmp(StringRawBuffer, v8) == 0;
            *a3 = v10;
            v7 = 1LL;
          }
          while ( !v10 );
        }
        v6 = 0;
      }
    }
  }
  if ( string )
    WindowsDeleteString(string);
  return v6;
}
