/*
 * XREFs of ?GetPathProcessNameFromProcessId@GamingOverlayExperienceManager@@AEAAJKAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180331A54
 * Callers:
 *     ?GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@K@Z @ 0x18033146C (-GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV-$vector@U-$pair@KV-$ba.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800C8D08 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801661D4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::GetPathProcessNameFromProcessId(__int64 a1, DWORD a2, char *a3)
{
  HANDLE v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  const char *v8; // r9
  unsigned int LastErrorFailHr; // eax
  const char *v10; // r9
  unsigned int v11; // ebx
  __int64 result; // rax
  wchar_t *v13; // rax
  WCHAR *v14; // rax
  unsigned __int64 v15; // r8
  const char *v16; // r9
  HANDLE hProcess; // [rsp+20h] [rbp-858h] BYREF
  DWORD dwSize; // [rsp+28h] [rbp-850h] BYREF
  void *v19; // [rsp+30h] [rbp-848h] BYREF
  WCHAR ExeName[1040]; // [rsp+40h] [rbp-838h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+878h] [rbp+0h]

  memset_0(ExeName, 0, sizeof(ExeName));
  dwSize = 1040;
  hProcess = 0LL;
  v5 = OpenProcess(0x1000u, 0, a2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hProcess,
    v5);
  v19 = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v19);
  if ( !hProcess )
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(0LL, v6, v7, v8);
LABEL_5:
    v11 = LastErrorFailHr;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hProcess);
    return v11;
  }
  if ( !QueryFullProcessImageNameW(hProcess, 0, ExeName, &dwSize) )
  {
    LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0xAB4,
                        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                        v10);
    goto LABEL_5;
  }
  v13 = wcsrchr(ExeName, 0x5Cu);
  if ( v13 )
    v14 = v13 + 1;
  else
    v14 = ExeName;
  v15 = -1LL;
  do
    ++v15;
  while ( v14[v15] );
  try
  {
    std::wstring::assign(a3, v14, v15);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hProcess);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v19) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xAC7,
                     (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
                     v16);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hProcess);
    return (unsigned int)v19;
  }
  return result;
}
