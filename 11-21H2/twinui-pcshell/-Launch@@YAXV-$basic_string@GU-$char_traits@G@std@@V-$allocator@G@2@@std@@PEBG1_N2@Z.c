/*
 * XREFs of ?Launch@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG1_N2@Z @ 0x180575FE8
 * Callers:
 *     ?ModifyUnpackagedMsiApp@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x1805769B0 (-ModifyUnpackagedMsiApp@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1.c)
 *     ?ModifyUnpackagedNonMsiApp@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N11@Z @ 0x180576ACC (-ModifyUnpackagedNonMsiApp@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18009EA78 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180316A94 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetActivationComponent@ApplicationContainerActivation@@SA?AV?$com_ptr_t@UIApplicationContainerActivationComponent@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180572B94 (-GetActivationComponent@ApplicationContainerActivation@@SA-AV-$com_ptr_t@UIApplicationContainerA.c)
 *     ?InternalRelease@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180572FD0 (-InternalRelease@-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActivationComponent@@AEA_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@$$QEAPEAUIApplicationContainerActivationComponent@@AEA_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180575C4C (--$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplication_ea_180575C4C.c)
 *     ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x180576D84 (-parent_path@path@filesystem@std@@QEBA-AV123@XZ.c)
 */

// Hidden C++ exception states: #wind=11
__int64 Launch(WCHAR *a1, const WCHAR *a2, const WCHAR *a3, char a4, ...)
{
  _QWORD *v8; // r9
  int v9; // ebx
  WCHAR *v10; // rcx
  WCHAR *v11; // rdx
  __int64 v12; // rax
  const WCHAR *v13; // rax
  const WCHAR *v14; // rax
  const char *v15; // r9
  signed int LastError; // eax
  int v18; // [rsp+20h] [rbp-E0h]
  HANDLE hProcess; // [rsp+28h] [rbp-D8h] BYREF
  HINSTANCE v20; // [rsp+30h] [rbp-D0h] BYREF
  void *v21; // [rsp+38h] [rbp-C8h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR *v23; // [rsp+B0h] [rbp-50h]
  char v24[16]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-38h]
  __int64 v26; // [rsp+D0h] [rbp-30h]
  _WORD v27[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-18h]
  __int64 v29; // [rsp+F0h] [rbp-10h]
  _QWORD v30[4]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v31[32]; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]
  va_list va; // [rsp+190h] [rbp+90h] BYREF

  va_start(va, a4);
  v23 = a1;
  ApplicationContainerActivation::GetActivationComponent(&v21);
  if ( a4 )
  {
    v8 = (_QWORD *)std::wstring::wstring((__int64)v31, (__int64)a1);
    v9 = 1;
  }
  else
  {
    v28 = 0LL;
    v29 = 7LL;
    v27[0] = 0;
    v8 = v27;
    v9 = 2;
  }
  v18 = v9;
  hProcess = v21;
  wil::MakeAndInitializeOrThrow<ApplicationContainerActivationPolicy,IApplicationContainerActivationComponent *,bool &,std::wstring>(
    (__int64 *)&v20,
    (__int64 *)&hProcess,
    va,
    v8);
  if ( (v9 & 2) != 0 )
  {
    LOBYTE(v9) = v9 & 0xFD;
    std::wstring::_Tidy_deallocate((__int64)v27);
  }
  if ( (v9 & 1) != 0 )
    std::wstring::_Tidy_deallocate((__int64)v31);
  if ( !*((_QWORD *)a1 + 2) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2B,
      (int)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)0x80070057LL,
      v18);
  v10 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v10 = *(WCHAR **)a1;
  PathUnquoteSpacesW(v10);
  v11 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v11 = *(WCHAR **)a1;
  v25 = 0LL;
  v26 = 7LL;
  *(_WORD *)v24 = 0;
  std::wstring::assign(v24, v11, *((_QWORD *)a1 + 2));
  v12 = std::filesystem::path::parent_path(v24, v31);
  std::wstring::wstring((__int64)v30, v12);
  std::wstring::_Tidy_deallocate((__int64)v31);
  pExecInfo.cbSize = 112;
  memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
  pExecInfo.fMask = 134218048;
  pExecInfo.nShow = 1;
  pExecInfo.lpParameters = a2;
  v13 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v13 = *(const WCHAR **)a1;
  pExecInfo.lpFile = v13;
  v14 = (const WCHAR *)v30;
  if ( v30[3] >= 8uLL )
    v14 = (const WCHAR *)v30[0];
  pExecInfo.lpDirectory = v14;
  pExecInfo.lpVerb = a3;
  pExecInfo.hInstApp = v20;
  if ( !ShellExecuteExW(&pExecInfo) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x38,
      (__int64)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      v15);
  hProcess = pExecInfo.hProcess;
  if ( WaitForSingleObject(pExecInfo.hProcess, 0xFFFFFFFF) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x3D,
      (__int64)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      (const char *)(unsigned int)LastError);
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&hProcess);
  std::wstring::_Tidy_deallocate((__int64)v30);
  std::wstring::_Tidy_deallocate((__int64)v24);
  Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::InternalRelease((__int64 *)&v20);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v21);
  return std::wstring::_Tidy_deallocate((__int64)a1);
}
