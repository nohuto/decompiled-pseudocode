/*
 * XREFs of ?IsCurrentProcessCustomShellHost@CustomShellManager@@AEAA_NXZ @ 0x18008ED28
 * Callers:
 *     ?TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z @ 0x1801BCF40 (-TryLaunchCustomShell@CustomShellManager@@UEAAJPEAH@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180093044 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1801B84E8 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CustomShellManager::IsCurrentProcessCustomShellHost(CustomShellManager *this)
{
  DWORD v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 size_of; // rax
  char *v6; // rsi
  DWORD v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  char *v13; // rdi
  HANDLE CurrentProcess; // rax
  BOOL FullProcessImageNameW; // ebx
  const char *v16; // r9
  bool v17; // bl
  BOOL bIgnoreCase; // [rsp+20h] [rbp-40h]
  __int128 v20; // [rsp+30h] [rbp-30h] BYREF
  char *v21; // [rsp+40h] [rbp-20h]
  _QWORD v22[2]; // [rsp+48h] [rbp-18h] BYREF
  char *v23; // [rsp+58h] [rbp-8h]
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
  v4 = v1;
  size_of = std::_Get_size_of_n<2>(v1, v2, v3, retaddr);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v22[0] = v6;
  v23 = &v6[2 * v4];
  memset_0(v6, 0, 2 * v4);
  v22[1] = v23;
  v7 = ExpandEnvironmentStringsW(L"%SystemRoot%\\System32\\customshellhost.exe", (LPWSTR)v6, (DWORD)nSize);
  if ( v7 > (unsigned int)nSize )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x5D,
      (unsigned int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
      (const char *)0x8007007ALL,
      bIgnoreCase);
  v11 = (unsigned int)nSize;
  v20 = 0LL;
  v21 = 0LL;
  if ( (_DWORD)nSize )
  {
    v12 = std::_Get_size_of_n<2>((unsigned int)nSize, v8, v9, v10);
    v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
    *(_QWORD *)&v20 = v13;
    v21 = &v13[2 * v11];
    memset_0(v13, 0, 2 * v11);
    *((_QWORD *)&v20 + 1) = v21;
  }
  else
  {
    v13 = (char *)v20;
  }
  CurrentProcess = GetCurrentProcess();
  FullProcessImageNameW = QueryFullProcessImageNameW(CurrentProcess, 0, (LPWSTR)v13, (PDWORD)&nSize);
  if ( FullProcessImageNameW || GetLastError() != 122 )
  {
    if ( !FullProcessImageNameW )
      wil::details::in1diag3::_Throw_GetLastError(
        retaddr,
        (void *)0x66,
        (unsigned int)"pcshell\\twinui\\customshellmanager\\lib\\customshellmanager.cpp",
        v16);
    v17 = CompareStringOrdinal((LPCWCH)v13, -1, (LPCWCH)v6, -1, 1) == 2;
    std::vector<unsigned short>::_Tidy(&v20);
    std::vector<unsigned short>::_Tidy(v22);
    return v17;
  }
  else
  {
    std::vector<unsigned short>::_Tidy(&v20);
    std::vector<unsigned short>::_Tidy(v22);
    return 0;
  }
}
