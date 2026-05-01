/*
 * XREFs of ??$_QueueNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@$$ZV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@56@@CVirtualDesktopNotifications@@AEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@ZV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@VHString@Wrappers@23@@std@@@Z @ 0x1805F9560
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHSTRING__@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@PEAUHSTRING__@@@Z01@Z @ 0x1805F9184 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@PEAUHS.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x1800C8F50 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$QueueTask@V_lambda_2e2fc3472f23404d9698fd55902d938b_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@W4TaskOptions@12@K$$QEAV_lambda_2e2fc3472f23404d9698fd55902d938b_@@@Z @ 0x1805F8C94 (--$QueueTask@V_lambda_2e2fc3472f23404d9698fd55902d938b_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ____QueueNotification2_UIVirtualDesktopNotification__PEAUIVirtualDesktop__PEAUHSTRING______ZV__ComPtr_UIVirtualDesktop___WRL_Microsoft__VHString_Wrappers_56__CVirtualDesktopNotifications__AEAAJP8IVirtualDesktopNotification__EAAJPEAUIVirtualDesktop__PEAUHSTRING_____ZV__tuple_V__ComPtr_UIVirtualDesktop___WRL_Microsoft__VHString_Wrappers_23__std___Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int CallbackArray; // eax
  unsigned int v7; // ebx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rbx
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  struct IObjectArray *v15; // [rsp+28h] [rbp-18h] BYREF
  HSTRING string; // [rsp+30h] [rbp-10h]
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IObjectArray *v19; // [rsp+60h] [rbp+20h] BYREF
  __int64 v20; // [rsp+70h] [rbp+30h]

  v20 = a3;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 64), &v19);
  v7 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v14 = a2;
    v15 = v19;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    string = *(HSTRING *)a3;
    *(_QWORD *)a3 = 0LL;
    v11 = (__int64 *)(a3 + 8);
    v17 = 0LL;
    if ( &v17 != (__int64 *)(a3 + 8) )
    {
      v17 = *v11;
      *v11 = 0LL;
    }
    v12 = Windows::Internal::ComTaskPool::QueueTask<_lambda_2e2fc3472f23404d9698fd55902d938b_>(
            v10,
            v9,
            *(_DWORD *)(a1 + 104),
            &v14);
    v13 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x152,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a3 + 8));
    WindowsDeleteString(*(HSTRING *)a3);
    result = v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)CallbackArray);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(a3 + 8));
    WindowsDeleteString(*(HSTRING *)a3);
    result = v7;
  }
  *(_QWORD *)a3 = 0LL;
  return result;
}
