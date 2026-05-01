/*
 * XREFs of ?Launch@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG1_N2@Z @ 0x180633DFC
 * Callers:
 *     ?ModifyUnpackagedMsiApp@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x1806347E8 (-ModifyUnpackagedMsiApp@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1.c)
 *     ?ModifyUnpackagedNonMsiApp@@YAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N11@Z @ 0x180634904 (-ModifyUnpackagedNonMsiApp@@YAXAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x18008E210 (-parent_path@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9368 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetActivationComponent@ApplicationContainerActivation@@SA?AV?$com_ptr_t@UIApplicationContainerActivationComponent@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1806309E0 (-GetActivationComponent@ApplicationContainerActivation@@SA-AV-$com_ptr_t@UIApplicationContainerA.c)
 *     ?InternalRelease@?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x180630DA0 (-InternalRelease@-$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplicationContainerActivationComponent@@AEA_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$ComPtr@VApplicationContainerActivationPolicy@@@WRL@Microsoft@@$$QEAPEAUIApplicationContainerActivationComponent@@AEA_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806339F8 (--$MakeAndInitializeOrThrow@VApplicationContainerActivationPolicy@@PEAUIApplication_ea_1806339F8.c)
 */

// Hidden C++ exception states: #wind=11
__int64 Launch(WCHAR *a1, const WCHAR *a2, const WCHAR *a3, char a4, ...)
{
  _QWORD *v8; // r9
  int v9; // ebx
  WCHAR *v10; // rcx
  void *v11; // rcx
  WCHAR *v12; // rax
  const unsigned __int16 *v13; // r8
  __int64 v14; // rax
  const WCHAR *v15; // rax
  const WCHAR *v16; // rax
  const char *v17; // r9
  char *hProcess; // rbx
  signed int LastError; // eax
  int v21; // [rsp+20h] [rbp-E0h]
  HINSTANCE v22; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  void *v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  SHELLEXECUTEINFOW pExecInfo; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR *v26; // [rsp+C0h] [rbp-40h]
  _QWORD v27[2]; // [rsp+C8h] [rbp-38h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-28h]
  _QWORD v29[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v30[4]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v31[4]; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]
  va_list va; // [rsp+1A0h] [rbp+A0h] BYREF

  va_start(va, a4);
  v26 = a1;
  ApplicationContainerActivation::GetActivationComponent(v23);
  if ( a4 )
  {
    v8 = std::wstring::wstring(v31, (__int64)a1);
    v9 = 1;
  }
  else
  {
    v27[0] = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v8 = v27;
    v9 = 2;
  }
  v21 = v9;
  v24[0] = (void *)v23[0];
  wil::MakeAndInitializeOrThrow<ApplicationContainerActivationPolicy,IApplicationContainerActivationComponent *,bool &,std::wstring>(
    (__int64 *)&v22,
    (__int64 *)v24,
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
      v21);
  v10 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v10 = *(WCHAR **)a1;
  PathUnquoteSpacesW(v10);
  v11 = (void *)*((_QWORD *)a1 + 2);
  v12 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v12 = *(WCHAR **)a1;
  v24[0] = v12;
  v24[1] = v11;
  std::wstring::wstring(v30, v24);
  v14 = std::filesystem::path::parent_path((std::filesystem *)v30, (__int64)v31, v13);
  std::wstring::wstring(v29, v14);
  std::wstring::_Tidy_deallocate((__int64)v31);
  pExecInfo.cbSize = 112;
  memset_0(&pExecInfo.fMask, 0, 0x6CuLL);
  pExecInfo.fMask = 134218048;
  pExecInfo.nShow = 1;
  pExecInfo.lpParameters = a2;
  v15 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v15 = *(const WCHAR **)a1;
  pExecInfo.lpFile = v15;
  v16 = (const WCHAR *)v29;
  if ( v29[3] >= 8uLL )
    v16 = (const WCHAR *)v29[0];
  pExecInfo.lpDirectory = v16;
  pExecInfo.lpVerb = a3;
  pExecInfo.hInstApp = v22;
  if ( !ShellExecuteExW(&pExecInfo) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x38,
      (int)"pcshell\\twinui\\vailactivation\\lib\\modifyhelper.cpp",
      v17);
  hProcess = (char *)pExecInfo.hProcess;
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
  if ( (unsigned __int64)(hProcess - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(hProcess);
  std::wstring::_Tidy_deallocate((__int64)v29);
  std::wstring::_Tidy_deallocate((__int64)v30);
  Microsoft::WRL::ComPtr<ApplicationContainerActivationPolicy>::InternalRelease((__int64 *)&v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v23);
  return std::wstring::_Tidy_deallocate((__int64)a1);
}
