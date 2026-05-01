/*
 * XREFs of ?UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x18054C1E8
 * Callers:
 *     wistd::__function::__func__lambda_aad8f4d5432b56bea79cde5dffa37ffc__void___cdecl(void)_::operator() @ 0x180544AA0 (wistd--__function--__func__lambda_aad8f4d5432b56bea79cde5dffa37ffc__void___cdecl(void)_--operato.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a1f8daa8914a455a54260b3e38b00a83__&_::Run @ 0x180547DE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a1f8daa8914a455a54260b3e38b00a83__-_--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18010F5F8 (--1-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YAJ0@Z.c)
 *     ?GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18012FBF0 (-GetCurrentDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@.c)
 *     ?AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z @ 0x180544C64 (-AssignWallpaperToDesktop@CVirtualDesktopManager@@AEAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z.c)
 *     ?GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z @ 0x180545778 (-GetCurrentRenderedWallpaperPath@CVirtualDesktopManager@@AEAAJPEAPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualDesktopManager::UpdateCurrentDesktopWallpaperPath(
        CVirtualDesktopManager *this,
        HMONITOR a2,
        __int64 a3,
        __int64 a4)
{
  int CurrentDesktopInternal; // eax
  CVirtualDesktopManager *v6; // rcx
  unsigned int v7; // ebx
  int CurrentRenderedWallpaperPath; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v12; // [rsp+30h] [rbp+8h] BYREF
  struct IVirtualDesktop *v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  CurrentDesktopInternal = CVirtualDesktopManager::GetCurrentDesktopInternal(
                             (CVirtualDesktopManager *)((char *)this + 8),
                             a2,
                             &v13,
                             a4);
  v7 = CurrentDesktopInternal;
  if ( CurrentDesktopInternal >= 0 )
  {
    v12 = 0LL;
    CurrentRenderedWallpaperPath = CVirtualDesktopManager::GetCurrentRenderedWallpaperPath(v6, &v12);
    v7 = CurrentRenderedWallpaperPath;
    if ( CurrentRenderedWallpaperPath >= 0 )
    {
      CurrentRenderedWallpaperPath = CVirtualDesktopManager::AssignWallpaperToDesktop(this, v13, v12);
      v7 = CurrentRenderedWallpaperPath;
      if ( CurrentRenderedWallpaperPath >= 0 )
      {
        wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v12);
        v7 = 0;
        goto LABEL_9;
      }
      v9 = 762LL;
    }
    else
    {
      v9 = 761LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CurrentRenderedWallpaperPath);
    wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>(&v12);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F7,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)CurrentDesktopInternal);
  }
LABEL_9:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v13);
  return v7;
}
