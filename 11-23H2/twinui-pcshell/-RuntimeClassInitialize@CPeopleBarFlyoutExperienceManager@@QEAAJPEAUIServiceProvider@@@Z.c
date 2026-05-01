/*
 * XREFs of ?RuntimeClassInitialize@CPeopleBarFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800E5D18
 * Callers:
 *     ??$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801347CC (--$MakeAndInitialize@VCPeopleBarFlyoutExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x18009720C (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??4?$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z @ 0x1800EA0E8 (--4-$ComPtr@UIServiceProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIServiceProvider@@@Z.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801070F0 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPeopleBarFlyoutExperienceManager::RuntimeClassInitialize(
        CPeopleBarFlyoutExperienceManager *this,
        struct IServiceProvider *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  _QWORD *v8; // rsi
  HRESULT (__stdcall *v9)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-A8h]
  HSTRING_HEADER v13; // [rsp+30h] [rbp-98h] BYREF
  HSTRING v14; // [rsp+48h] [rbp-80h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-78h] BYREF
  HSTRING v16; // [rsp+68h] [rbp-60h]
  HSTRING_HEADER v17; // [rsp+70h] [rbp-58h] BYREF
  HSTRING v18; // [rsp+88h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  Microsoft::WRL::ComPtr<IServiceProvider>::operator=((char *)this + 328, a2);
  v16 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App",
    0x39u,
    0x38u);
  v14 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v13,
    L"Windows.Internal.ShellExperience.PeopleBarFlyout",
    0x31u,
    0x30u);
  v4 = CSingleViewShellExperience::RuntimeClassInitialize(
         (CPeopleBarFlyoutExperienceManager *)((char *)this + 112),
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v16,
         v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v4,
      v12);
    return v5;
  }
  v18 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v17,
    L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App",
    0x29u,
    0x28u);
  v6 = CSingleViewShellExperience::AddTestAumid((CPeopleBarFlyoutExperienceManager *)((char *)this + 112), v18);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 84LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v12);
    return v5;
  }
  *((_DWORD *)this + 43) = 4;
  QueryService = a2->lpVtbl->QueryService;
  v8 = (_QWORD *)((char *)this + 88);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 11);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
         (char *)this + 88);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 92LL;
    goto LABEL_19;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v8 + 24LL))(
         *v8,
         1027LL,
         ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
         (char *)this + 84);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 93LL;
    goto LABEL_19;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64, char *))(*(_QWORD *)*v8 + 24LL))(
         *v8,
         1025LL,
         ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
         (char *)this + 76);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 94LL;
    goto LABEL_19;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, char *))(*(_QWORD *)*v8 + 24LL))(
         *v8,
         1026LL,
         (char *)this + 32,
         (char *)this + 80);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 95LL;
    goto LABEL_19;
  }
  v9 = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 13);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))v9)(
         a2,
         &IID_IImmersiveSessionIdleDetector,
         &GUID_a340ae45_86bf_4c9c_b6c8_6109ca1e2f29,
         (char *)this + 104);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 97LL;
    goto LABEL_19;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 13) + 32LL))(
         *((_QWORD *)this + 13),
         (char *)this + 40,
         (char *)this + 96);
  v5 = v6;
  if ( v6 < 0 )
  {
    v11 = 98LL;
    goto LABEL_19;
  }
  return 0;
}
