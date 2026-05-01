/*
 * XREFs of ?RegisterForViewExperience@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1800646A8
 * Callers:
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1800B5964 (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x180066360 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180096F68 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     WINRT_IMPL_HeapFree @ 0x1801892CC (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x180189398 (WINRT_IMPL_GetProcessHeap.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::RegisterForViewExperience(struct IServiceProvider **this)
{
  CScreenClippingExperienceManager *ScreenClippingAUMID; // rax
  HSTRING *v3; // rdi
  HSTRING v4; // r14
  HSTRING v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  HANDLE ProcessHeap; // rax
  int v10; // [rsp+20h] [rbp-48h]
  _BYTE v11[8]; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  HSTRING v13; // [rsp+50h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  ScreenClippingAUMID = (CScreenClippingExperienceManager *)anonymous_namespace_::GetScreenClippingAUMID((winrt::hstring *)v11);
  v3 = (HSTRING *)(this + 42);
  if ( this + 42 != (struct IServiceProvider **)ScreenClippingAUMID )
  {
    v4 = *(HSTRING *)ScreenClippingAUMID;
    *(_QWORD *)ScreenClippingAUMID = 0LL;
    v5 = *v3;
    if ( *v3 && !(unsigned int)winrt::impl::atomic_ref_count::operator--(v5 + 6) )
    {
      ProcessHeap = WINRT_IMPL_GetProcessHeap();
      WINRT_IMPL_HeapFree(ProcessHeap, 0, v5);
    }
    *v3 = v4;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(v11);
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ScreenClipping",
    0x30u,
    0x2Fu);
  v6 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CSingleViewShellExperience *)(this + 7),
         (struct IWeakReferenceSource *)((unsigned __int64)(this + 1) & -(__int64)(this != 0LL)),
         this[33],
         *v3,
         v13);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x235,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v6,
    v10);
  return v7;
}
