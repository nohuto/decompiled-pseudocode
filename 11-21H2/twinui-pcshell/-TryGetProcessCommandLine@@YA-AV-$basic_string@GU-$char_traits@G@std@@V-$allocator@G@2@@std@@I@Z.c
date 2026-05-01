/*
 * XREFs of ?TryGetProcessCommandLine@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x18056AB98
 * Callers:
 *     ?TryGetMainClassNameFromJavaEngineProcess@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@Z @ 0x18056AB1C (-TryGetMainClassNameFromJavaEngineProcess@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG_K@Z @ 0x1803AF930 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TryGetProcessCommandLine(__int64 a1, DWORD a2)
{
  char *v3; // rdi
  const void **v4; // rax
  const void **v5; // rbx
  ULONG ProcessInformationLength; // [rsp+30h] [rbp-40h] BYREF
  void *v8[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v9; // [rsp+48h] [rbp-28h] BYREF
  __int128 v10; // [rsp+58h] [rbp-18h]

  v3 = (char *)OpenProcess(0x1000u, 0, a2);
  v8[0] = v3;
  if ( (unsigned __int64)(v3 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (ProcessInformationLength = 0,
        NtQueryInformationProcess(v3, ProcessImageFileMapping|ProcessUserModeIOPL, 0LL, 0, &ProcessInformationLength) != -1073741820) )
  {
LABEL_8:
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
    goto LABEL_9;
  }
  v4 = (const void **)LocalAlloc(0x40u, ProcessInformationLength);
  v5 = v4;
  v8[1] = v4;
  if ( !v4
    || NtQueryInformationProcess(v3, ProcessImageFileMapping|ProcessUserModeIOPL, v4, ProcessInformationLength, 0LL) )
  {
    if ( v5 )
      LocalFree(v5);
    goto LABEL_8;
  }
  std::wstring::wstring((__int64)&v9, v5[1], (unsigned __int64)*(unsigned __int16 *)v5 >> 1);
  *(_OWORD *)a1 = v9;
  *(_OWORD *)(a1 + 16) = v10;
  *(_QWORD *)&v10 = 0LL;
  *((_QWORD *)&v10 + 1) = 7LL;
  LOWORD(v9) = 0;
  std::wstring::_Tidy_deallocate((__int64)&v9);
  LocalFree(v5);
LABEL_9:
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v8);
  return a1;
}
