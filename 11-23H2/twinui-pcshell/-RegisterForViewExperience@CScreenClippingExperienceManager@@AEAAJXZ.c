/*
 * XREFs of ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x180133A38
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x180133940 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18009720C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180133B1C (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::RegisterForViewExperience(CScreenClippingExperienceManager *this)
{
  CScreenClippingExperienceManager *ScreenClippingAUMID; // rax
  HSTRING *v3; // rdi
  HSTRING v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  volatile signed __int32 *v8; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  HSTRING v10; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  ScreenClippingAUMID = (CScreenClippingExperienceManager *)anonymous_namespace_::GetScreenClippingAUMID((winrt::hstring *)&v8);
  v3 = (HSTRING *)((char *)this + 336);
  if ( (CScreenClippingExperienceManager *)((char *)this + 336) != ScreenClippingAUMID )
  {
    v4 = *(HSTRING *)ScreenClippingAUMID;
    *(_QWORD *)ScreenClippingAUMID = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 42);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)this + 42);
    *v3 = v4;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
  v10 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ScreenClipping",
    0x30u,
    0x2Fu);
  v5 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CScreenClippingExperienceManager *)((char *)this + 56),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
         *((struct IServiceProvider **)this + 33),
         *v3,
         v10);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x299,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
