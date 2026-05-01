/*
 * XREFs of ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x18015B970
 * Callers:
 *     ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x18015B940 (-TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x18008964C (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x18017B358 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CustomShellManager::IsCurrentProcessCustomShellHost(CustomShellManager *this)
{
  DWORD v1; // eax
  __int64 v2; // rbx
  size_t size_of; // rax
  char *v4; // rsi
  DWORD v5; // eax
  __int64 v6; // rbx
  size_t v7; // rax
  char *v8; // rdi
  HANDLE CurrentProcess; // rax
  BOOL FullProcessImageNameW; // ebx
  const char *v11; // r9
  bool v12; // bl
  BOOL bIgnoreCase; // [rsp+20h] [rbp-40h]
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  char *v16; // [rsp+40h] [rbp-20h]
  _QWORD v17[2]; // [rsp+48h] [rbp-18h] BYREF
  char *v18; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  CustomShellManager *nSize; // [rsp+70h] [rbp+10h] BYREF

  nSize = this;
  v1 = ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\customshellhost.exe", 0LL, 0);
  LODWORD(nSize) = v1;
  if ( !v1 )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x58,
      (unsigned int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      (const char *)retaddr);
  v2 = v1;
  size_of = std::_Get_size_of_n<2>(v1);
  v4 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v17[0] = v4;
  v18 = &v4[2 * v2];
  memset_0(v4, 0, 2 * v2);
  v17[1] = v18;
  v5 = ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\customshellhost.exe", (LPWSTR)v4, (DWORD)nSize);
  if ( v5 > (unsigned int)nSize )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5D,
      (int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      (const char *)0x8007007ALL,
      bIgnoreCase);
  v6 = (unsigned int)nSize;
  v15 = 0LL;
  v16 = 0LL;
  if ( (_DWORD)nSize )
  {
    v7 = std::_Get_size_of_n<2>((unsigned int)nSize);
    v8 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    *(_QWORD *)&v15 = v8;
    v16 = &v8[2 * v6];
    memset_0(v8, 0, 2 * v6);
    *((_QWORD *)&v15 + 1) = v16;
  }
  else
  {
    v8 = (char *)v15;
  }
  CurrentProcess = GetCurrentProcess();
  FullProcessImageNameW = QueryFullProcessImageNameW(CurrentProcess, 0, (LPWSTR)v8, (PDWORD)&nSize);
  if ( FullProcessImageNameW || GetLastError() != 122 )
  {
    if ( !FullProcessImageNameW )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x66,
        (unsigned int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
        v11);
    v12 = CompareStringOrdinal((LPCWCH)v8, -1, (LPCWCH)v4, -1, 1) == 2;
    std::vector<unsigned short>::_Tidy(&v15);
    std::vector<unsigned short>::_Tidy(v17);
    return v12;
  }
  else
  {
    std::vector<unsigned short>::_Tidy(&v15);
    std::vector<unsigned short>::_Tidy(v17);
    return 0;
  }
}
