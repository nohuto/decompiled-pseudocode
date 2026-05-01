/*
 * XREFs of ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x180386E74
 * Callers:
 *     ?SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z @ 0x1803880B8 (-SetAltTabWindowVisibility@CortanaStoreAppExperienceManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18001FAC4 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x180387584 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?GetNormalDisplayNameFromAppId@ImmersiveAppHelpers@@YAJPEBGPEAPEAG@Z @ 0x1805E9F80 (-GetNormalDisplayNameFromAppId@ImmersiveAppHelpers@@YAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaStoreAppExperienceManager::CreateCortanaAltTabProxyWindow(
        CortanaStoreAppExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  void *lpParam; // rdi
  const WCHAR *v5; // rax
  unsigned __int16 **v6; // r8
  int NormalDisplayNameFromAppId; // eax
  HWND Window; // rax
  HWND v9; // rax
  const char *v10; // r9
  __int64 result; // rax
  WNDCLASSEXW v12; // [rsp+60h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  LPCWSTR lpWindowName; // [rsp+D0h] [rbp+8h] BYREF

  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 29);
  try
  {
    lpParam = (void *)ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
    v12.cbSize = 80;
    memset_0(&v12.style, 0, 0x4CuLL);
    v12.style = 512;
    v12.lpfnWndProc = (WNDPROC)CortanaStoreAppExperienceManager::CortanaAltTabProxyWndProc;
    v12.hInstance = &_ImageBase;
    v12.lpszClassName = L"Shell_CortanaStoreAppProxy";
    v12.cbWndExtra = 8;
    RegisterClassExW(&v12);
    if ( dword_1807B7500 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                     + 16LL) )
    {
      Init_thread_header(&dword_1807B7500);
      if ( dword_1807B7500 == -1 )
      {
        CortanaExperienceHelpers::GetStoreCortanaAumId(&qword_1807B4F98);
        atexit((void (__cdecl *)())CortanaStoreAppExperienceManager::CreateCortanaAltTabProxyWindow_::_3_::_dynamic_atexit_destructor_for__cortanaAppAumid__);
        Init_thread_footer(&dword_1807B7500);
      }
    }
    lpWindowName = 0LL;
    v5 = winrt::hstring::c_str((winrt::hstring *)&qword_1807B4F98);
    NormalDisplayNameFromAppId = ImmersiveAppHelpers::GetNormalDisplayNameFromAppId(
                                   v5,
                                   (const unsigned __int16 *)&lpWindowName,
                                   v6);
    if ( NormalDisplayNameFromAppId < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x516,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)NormalDisplayNameFromAppId);
    Window = CreateWindowExW(
               0,
               v12.lpszClassName,
               lpWindowName,
               0x8000000u,
               0x80000000,
               0x80000000,
               0x80000000,
               0x80000000,
               0LL,
               0LL,
               &_ImageBase,
               lpParam);
    wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
      (HWND *)this + 49,
      Window);
    v9 = CreateWindowExW(
           0x200000u,
           v12.lpszClassName,
           lpWindowName,
           0x80000000,
           0x80000000,
           0x80000000,
           0x80000000,
           0x80000000,
           *((HWND *)this + 49),
           0LL,
           &_ImageBase,
           lpParam);
    wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
      (HWND *)this + 48,
      v9);
    wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&lpWindowName);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x522,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                           v10);
  }
  return result;
}
