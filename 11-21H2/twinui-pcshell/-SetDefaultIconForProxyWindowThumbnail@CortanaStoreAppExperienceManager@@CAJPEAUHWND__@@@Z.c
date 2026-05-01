/*
 * XREFs of ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1803882E4
 * Callers:
 *     ?CortanaAltTabProxyWndProc@CortanaStoreAppExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180386C40 (-CortanaAltTabProxyWndProc@CortanaStoreAppExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800F2B64 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18022CC64 (--1-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integr.c)
 *     ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x180387584 (-GetStoreCortanaAumId@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x180387724 (-HICONFromBitmap@SearchAppDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x1805EDE30 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00KI_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail(HWND hWnd)
{
  HMONITOR v2; // rax
  __int64 result; // rax
  int DpiForMonitor; // eax
  unsigned int v5; // ebx
  struct tagSIZE v6; // r9
  int ImmersiveIcon; // eax
  unsigned int v8; // ebx
  const char *v9; // r9
  HICON v10; // rax
  unsigned int v11; // [rsp+28h] [rbp-30h]
  unsigned __int8 v12; // [rsp+30h] [rbp-28h]
  ImmersiveIcons *v13; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  POINT pt; // [rsp+68h] [rbp+10h] BYREF
  char v16; // [rsp+70h] [rbp+18h] BYREF
  HBITMAP v17; // [rsp+78h] [rbp+20h] BYREF

  pt = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( v2 )
  {
    DpiForMonitor = GetDpiForMonitor(v2, 0LL, &pt, &v16);
    v5 = DpiForMonitor;
    if ( DpiForMonitor >= 0 )
    {
      try
      {
        if ( dword_1807B7504 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                           + (unsigned int)tls_index)
                                         + 16LL) )
        {
          Init_thread_header(&dword_1807B7504);
          if ( dword_1807B7504 == -1 )
          {
            CortanaExperienceHelpers::GetStoreCortanaAumId((volatile signed __int32 *)&qword_1807B4FA0);
            atexit((void (__cdecl *)())CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail_::_3_::_dynamic_atexit_destructor_for__cortanaAppAumid__);
            Init_thread_footer(&dword_1807B7504);
          }
        }
        LODWORD(v13) = GetSystemMetrics(11);
        HIDWORD(v13) = GetSystemMetrics(12);
        v17 = 0LL;
        v12 = (unsigned __int8)winrt::hstring::c_str((winrt::hstring *)&qword_1807B4FA0);
        LOBYTE(v11) = 0;
        ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                          v13,
                          (struct tagSIZE)v13,
                          (struct tagSIZE)v13,
                          v6,
                          pt.x,
                          v11,
                          v12,
                          (const unsigned __int16 *)&v17,
                          (HBITMAP *)v13);
        v8 = ImmersiveIcon;
        if ( ImmersiveIcon >= 0 )
        {
          v10 = SearchAppDesktopExperienceView::HICONFromBitmap(v17);
          if ( v10 )
            SendMessageW(hWnd, 0x80u, 0LL, (LPARAM)v10);
          wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>((void **)&v17);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x552,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
            (const char *)(unsigned int)ImmersiveIcon);
          wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>((void **)&v17);
          result = v8;
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x55C,
                               (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
                               v9);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x54D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)DpiForMonitor);
      return v5;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
