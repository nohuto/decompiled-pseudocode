/*
 * XREFs of ?RuntimeClassInitialize@CPeopleBarJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18010661C
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180134874 (--$MakeAndInitialize@VCPeopleBarJumpViewExperienceManager@@UIInspectable@@AEAPEAUIServiceProvide.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18009720C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x1800E1C0C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800EA0E8 (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801070F0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarJumpViewExperienceManager::RuntimeClassInitialize(
        CPeopleBarJumpViewExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING v4; // rbx
  int v5; // ebx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-78h]
  HSTRING_HEADER v10; // [rsp+30h] [rbp-68h] BYREF
  HSTRING v11; // [rsp+48h] [rbp-50h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-48h] BYREF
  HSTRING v13; // [rsp+68h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 33, (__int64)this);
  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((__int64 *)this + 35, (__int64)a2);
  *((_DWORD *)this + 29) = 13;
  v13 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.PeopleBarJumpView",
    0x33u,
    0x32u);
  v4 = v13;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v10,
    L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
    0x39u,
    0x38u);
  v5 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CPeopleBarJumpViewExperienceManager *)((char *)this + 56),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v11,
         v4);
  if ( v5 < 0 )
  {
    v8 = 97LL;
  }
  else
  {
    v11 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &v10,
      L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App",
      0x29u,
      0x28u);
    v5 = CSingleViewShellExperience::AddTestAumid((CPeopleBarJumpViewExperienceManager *)((char *)this + 56), v11);
    if ( v5 < 0 )
    {
      v8 = 98LL;
    }
    else
    {
      QueryService = a2->lpVtbl->QueryService;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 34);
      v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
             a2,
             &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
             &GUID_b424c6f2_89a8_4bf1_8946_41454468d78c,
             (char *)this + 272);
      if ( v5 >= 0 )
        return 0LL;
      v8 = 100LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v5,
    v9);
  return (unsigned int)v5;
}
