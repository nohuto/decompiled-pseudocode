/*
 * XREFs of ?GetActiveViewInstanceId@ViewHierarchyWithWindowManager@@QEAAIXZ @ 0x1801740D0
 * Callers:
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z @ 0x1801B98FC (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     ?ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ @ 0x1801B9A70 (-ProcessInputAttemptForFocusedView@DWMInputRouter@@UEAAJXZ.c)
 * Callees:
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180002D04 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView@UIAppView@WindowManage.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18001B4FC (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ?GetActiveView@ViewHierarchyWithWindowManager@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@XZ @ 0x180173FB4 (-GetActiveView@ViewHierarchyWithWindowManager@@QEAA-AUAppView@WindowManagement@ApplicationModel@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewHierarchyWithWindowManager::GetActiveViewInstanceId(ViewHierarchyWithWindowManager *this)
{
  unsigned int v1; // edi
  int v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  ViewHierarchyWithWindowManager::GetActiveView((__int64)this, &v4);
  if ( v4 )
    v1 = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IAppView<winrt::Windows::Internal::ApplicationModel::WindowManagement::IAppView>::Id(
            &v4,
            &v3);
  else
    v1 = 0;
  if ( v4 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v4);
  return v1;
}
