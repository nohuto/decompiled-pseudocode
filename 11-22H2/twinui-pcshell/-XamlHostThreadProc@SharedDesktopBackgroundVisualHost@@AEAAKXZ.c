/*
 * XREFs of ?XamlHostThreadProc@SharedDesktopBackgroundVisualHost@@AEAAKXZ @ 0x1806EC214
 * Callers:
 *     _lambda_b826e61a9471a58a2220c80ea84bd06a_::_lambda_invoker_cdecl_ @ 0x1806E52E0 (_lambda_b826e61a9471a58a2220c80ea84bd06a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x18004418C (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801B5348 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$?RUSharedDesktopBackgroundVisualHost@@_K@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisual@Themes@UI@Internal@Windows@winrt@@_K@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEB_K@Z @ 0x1806E5740 (--$-RUSharedDesktopBackgroundVisualHost@@_K@-$event@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 *     ??$?RUSharedDesktopBackgroundVisualHost@@_N@?$event@U?$TypedEventHandler@UISharedDesktopBackgroundVisualWindowProvider@Themes@UI@Internal@Windows@winrt@@_N@Foundation@Windows@winrt@@@winrt@@QEAAXAEBUSharedDesktopBackgroundVisualHost@@AEB_N@Z @ 0x1806E5814 (--$-RUSharedDesktopBackgroundVisualHost@@_N@-$event@U-$TypedEventHandler@UISharedDesktopBackgrou.c)
 *     ??0?$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1806E6648 (--0-$ActivityBase@VSharedVisualHostProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??1StartXamlHostThreadProc@SharedVisualHostProvider@@QEAA@XZ @ 0x1806E6D5C (--1StartXamlHostThreadProc@SharedVisualHostProvider@@QEAA@XZ.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1806E6F40 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 *     ?CreateXamlHostWindow@SharedDesktopBackgroundVisualHost@@AEAAPEAUHWND__@@XZ @ 0x1806E7674 (-CreateXamlHostWindow@SharedDesktopBackgroundVisualHost@@AEAAPEAUHWND__@@XZ.c)
 *     ?StartActivity@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAXXZ @ 0x1806E94B0 (-StartActivity@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAXXZ.c)
 *     ?Stop@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAX_N@Z @ 0x1806E9CF0 (-Stop@StartXamlHostThreadProc@SharedVisualHostProvider@@QEAAX_N@Z.c)
 *     ?SyncInitialSize@SharedDesktopBackgroundVisualHost@@AEAAXXZ @ 0x1806EBEDC (-SyncInitialSize@SharedDesktopBackgroundVisualHost@@AEAAXXZ.c)
 *     ?SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation@Themes@UI@Internal@Windows@winrt@@W4DesktopVisualStartHint@Shell@5WindowsUdk@8@@Z @ 0x1806EBF5C (-SyncState@SharedDesktopBackgroundVisualHost@@AEAAXW4BackgroundVisualStateRequest@implementation.c)
 *     ?XamlContent@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostChildWindow@UIXamlExplorerHostChildWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@@Z @ 0x1806EC1D8 (-XamlContent@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostChildWindow@UIXa.c)
 *     ?XamlHostThreadShutdownRequested@SharedVisualHostProvider@@SAXXZ @ 0x1806EC50C (-XamlHostThreadShutdownRequested@SharedVisualHostProvider@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SharedDesktopBackgroundVisualHost::XamlHostThreadProc(SharedDesktopBackgroundVisualHost *this)
{
  HWND XamlHostWindow; // r14
  void *v3; // r12
  int XamlHost; // eax
  int v5; // ebx
  int v6; // r12d
  LPARAM v7; // rbx
  void *v8; // rdx
  DWORD v9; // ebx
  _BYTE v11[8]; // [rsp+30h] [rbp-D0h] BYREF
  LPARAM lParam; // [rsp+38h] [rbp-C8h] BYREF
  DWORD dwindex; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE pHandles; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v16[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SharedVisualHostProvider,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"StartXamlHostThreadProc");
  v16[0] = &SharedVisualHostProvider::StartXamlHostThreadProc::`vftable';
  SharedVisualHostProvider::StartXamlHostThreadProc::StartActivity((SharedVisualHostProvider::StartXamlHostThreadProc *)v16);
  dwindex = 0;
  lParam = 0LL;
  EnumWindows((WNDENUMPROC)EnumWindowsProc_DesktopWindow, (LPARAM)&lParam);
  XamlHostWindow = SharedDesktopBackgroundVisualHost::CreateXamlHostWindow(this);
  AcquireSRWLockExclusive((PSRWLOCK)this + 22);
  if ( !*((_QWORD *)this + 30) )
    *((_QWORD *)this + 30) = lParam;
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 31,
    XamlHostWindow);
  pHandles = (HANDLE)*((_QWORD *)this + 27);
  v3 = (void *)*((_QWORD *)this + 28);
  if ( this != (SharedDesktopBackgroundVisualHost *)-176LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 22);
  XamlHost = SharedDesktopBackgroundVisualHost::CreateXamlHost(
               this,
               (struct winrt::impl::hstring_header *)XamlHostWindow);
  v5 = XamlHost;
  if ( XamlHost >= 0 )
  {
    SharedDesktopBackgroundVisualHost::SyncInitialSize((RTL_SRWLOCK *)this);
    SetEvent(v3);
    lParam = (LPARAM)XamlHostWindow;
    winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisual,unsigned __int64>>::operator()<SharedDesktopBackgroundVisualHost,unsigned __int64>(
      (__int64)this + 152,
      (__int64)this,
      (__int64)&lParam);
    AcquireSRWLockShared((PSRWLOCK)this + 24);
    v6 = *((_DWORD *)this + 51);
    if ( this != (SharedDesktopBackgroundVisualHost *)-192LL )
      ReleaseSRWLockShared((PSRWLOCK)this + 24);
    SharedDesktopBackgroundVisualHost::SyncState((__int64)this, v6);
    SharedVisualHostProvider::StartXamlHostThreadProc::Stop((SharedVisualHostProvider::StartXamlHostThreadProc *)v16, 1);
    CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
    SharedVisualHostProvider::XamlHostThreadShutdownRequested();
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18E,
      (int)"pcshell\\twinui\\themecoordinator\\lib\\shareddesktopbackgroundvisualhost.cpp",
      (const char *)(unsigned int)XamlHost);
    SharedVisualHostProvider::StartXamlHostThreadProc::Stop((SharedVisualHostProvider::StartXamlHostThreadProc *)v16, 0);
  }
  lParam = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)this + 22);
  v15[1] = (char *)this + 176;
  *((_DWORD *)this + 53) = v5;
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)&lParam,
    (SharedDesktopBackgroundVisualHost *)((char *)this + 256));
  v7 = lParam;
  if ( lParam )
  {
    v15[0] = 0LL;
    winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostChildWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::XamlContent(
      &lParam,
      v15);
  }
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::reset(
    (HWND *)this + 31,
    0LL);
  wil::details::ResetEvent(*((wil::details **)this + 27), v8);
  *((_BYTE *)this + 209) = 0;
  *((_DWORD *)this + 46) = 0;
  if ( this != (SharedDesktopBackgroundVisualHost *)-176LL )
    ReleaseSRWLockExclusive((PSRWLOCK)this + 22);
  v11[0] = 0;
  winrt::event<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::UI::Themes::ISharedDesktopBackgroundVisualWindowProvider,bool>>::operator()<SharedDesktopBackgroundVisualHost,bool>(
    (RTL_SRWLOCK *)this + 16,
    (__int64)this,
    (__int64)v11);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&lParam);
  v9 = dwindex;
  SharedVisualHostProvider::StartXamlHostThreadProc::~StartXamlHostThreadProc((SharedVisualHostProvider::StartXamlHostThreadProc *)v16);
  return v9;
}
