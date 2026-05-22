/*
 * XREFs of ?GetWindowForViewId@ViewHelper@@SA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@AEAVViewHierarchyWithWindowManager@@K@Z @ 0x180002564
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180023410 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x1800241B0 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?Window@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800025FC (-Window@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowMa.c)
 *     ?GetView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@I@Z @ 0x180002650 (-GetView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@Intern.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall ViewHelper::GetWindowForViewId(_QWORD *a1, __int64 a2)
{
  __int64 *v3; // rax
  char v4; // di
  __int64 v5; // rcx
  _QWORD v7[2]; // [rsp+28h] [rbp-10h] BYREF
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = a1;
  ViewHierarchyWithWindowManager::GetView(a2, &v8);
  if ( v8 )
  {
    v3 = (__int64 *)winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Window(
                      &v8,
                      v7);
    v4 = 5;
    v5 = *v3;
  }
  else
  {
    v3 = &v9;
    v4 = 6;
    v5 = 0LL;
  }
  *v3 = 0LL;
  *a1 = v5;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    if ( v9 )
      winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v9);
  }
  if ( (v4 & 1) != 0 && v7[0] )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(v7);
  if ( v8 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v8);
  return a1;
}
