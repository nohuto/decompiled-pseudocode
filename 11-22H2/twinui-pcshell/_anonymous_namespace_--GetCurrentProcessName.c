/*
 * XREFs of _anonymous_namespace_::GetCurrentProcessName @ 0x1801ED398
 * Callers:
 *     _anonymous_namespace_::IsCurrentProcessExplorer @ 0x1801ED7F8 (_anonymous_namespace_--IsCurrentProcessExplorer.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1800AC774 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall anonymous_namespace_::GetCurrentProcessName(_QWORD *a1)
{
  DWORD CurrentProcessId; // eax
  HANDLE v3; // rax
  unsigned __int64 v4; // rbx
  void *v6[3]; // [rsp+28h] [rbp-230h] BYREF
  WCHAR BaseName[256]; // [rsp+40h] [rbp-218h] BYREF

  v6[1] = a1;
  std::wstring::wstring(a1, &LocaleName);
  CurrentProcessId = GetCurrentProcessId();
  v3 = OpenProcess(0x410u, 0, CurrentProcessId);
  v6[0] = v3;
  v4 = -1LL;
  if ( v3 != (HANDLE)-1LL && K32GetModuleBaseNameW(v3, 0LL, BaseName, 0x100u) )
  {
    do
      ++v4;
    while ( BaseName[v4] );
    std::wstring::assign((char *)a1, BaseName, v4);
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v6);
  return a1;
}
