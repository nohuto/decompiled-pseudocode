/*
 * XREFs of ?GetPathProcessNameFromProcessId@GamingOverlayExperienceManager@@AEAAJKAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1803FF014
 * Callers:
 *     ?GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@K@Z @ 0x1803FEA1C (-GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV-$vector@U-$pair@KV-$ba.c)
 * Callees:
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800BD1C8 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180165FBC (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
signed int __fastcall GamingOverlayExperienceManager::GetPathProcessNameFromProcessId(__int64 a1, DWORD a2, char *a3)
{
  HANDLE v5; // rax
  wil::details *v6; // rcx
  HANDLE v7; // rbx
  signed int result; // eax
  const char *v9; // r9
  int LastError; // edi
  wchar_t *v11; // rax
  WCHAR *v12; // rax
  unsigned __int64 v13; // r8
  const char *v14; // r9
  DWORD dwSize; // [rsp+20h] [rbp-848h] BYREF
  int v16; // [rsp+24h] [rbp-844h]
  HANDLE hProcess; // [rsp+28h] [rbp-840h] BYREF
  WCHAR ExeName[1040]; // [rsp+30h] [rbp-838h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+868h] [rbp+0h]

  memset_0(ExeName, 0, sizeof(ExeName));
  dwSize = 1040;
  hProcess = 0LL;
  v5 = OpenProcess(0x1000u, 0, a2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hProcess,
    v5);
  v7 = hProcess;
  if ( !hProcess )
    return wil::details::GetLastErrorFailHr(v6);
  if ( QueryFullProcessImageNameW(hProcess, 0, ExeName, &dwSize) )
  {
    v11 = wcsrchr(ExeName, 0x5Cu);
    if ( v11 )
      v12 = v11 + 1;
    else
      v12 = ExeName;
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    try
    {
      std::wstring::assign(a3, v12, v13);
      if ( v7 != (HANDLE)-1LL )
        CloseHandle(v7);
      result = 0;
    }
    catch ( ... )
    {
      v16 = wil::details::in1diag3::Return_CaughtException(
              retaddr,
              (void *)0xB1F,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
              v14);
      if ( hProcess != (HANDLE)-1LL )
        CloseHandle(hProcess);
      return v16;
    }
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xB0C,
                  (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                  v9);
    if ( v7 != (HANDLE)-1LL )
      CloseHandle(v7);
    return LastError;
  }
  return result;
}
