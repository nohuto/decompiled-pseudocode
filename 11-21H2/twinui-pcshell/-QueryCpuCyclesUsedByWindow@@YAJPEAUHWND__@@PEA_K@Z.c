/*
 * XREFs of ?QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z @ 0x1800459EC
 * Callers:
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180045924 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x180045988 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall QueryCpuCyclesUsedByWindow(HWND a1, unsigned __int64 *a2)
{
  wil::details *v3; // rcx
  void *v4; // rbx
  const char *v5; // r9
  int LastError; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DWORD dwProcessId; // [rsp+30h] [rbp+8h] BYREF
  HANDLE v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  if ( a1 )
  {
    dwProcessId = 0;
    GetWindowThreadProcessId(a1, &dwProcessId);
    v10 = OpenProcess(0x1000u, 0, dwProcessId);
    v4 = v10;
    if ( v10 || (LastError = wil::details::GetLastErrorFailHr(v3), LastError >= 0) )
    {
      if ( QueryProcessCycleTime(v4, a2) )
        LastError = 0;
      else
        LastError = wil::details::in1diag3::Return_GetLastError(
                      retaddr,
                      (void *)0xC62,
                      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
                      v5);
    }
  }
  else
  {
    LastError = -2147024809;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v10);
  return (unsigned int)LastError;
}
