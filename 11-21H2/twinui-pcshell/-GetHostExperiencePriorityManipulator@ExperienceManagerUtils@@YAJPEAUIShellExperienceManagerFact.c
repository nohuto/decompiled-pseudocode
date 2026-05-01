/*
 * XREFs of ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@PEAPEAUIExperienceManagerPriorityManipulator@3456@@Z @ 0x180118AA8
 * Callers:
 *     ?RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180118538 (-RuntimeClassInitialize@CJumpViewExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@Z @ 0x180118960 (-GetHostExperiencePriorityManipulator@ExperienceManagerUtils@@YAJPEAUIServiceProvider@@PEAPEAUIE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ @ 0x18015C524 (-ReleaseAndGetAddressOf@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAAPEAPEAUIInspectable@@XZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ExperienceManagerUtils::GetHostExperiencePriorityManipulator(
        ExperienceManagerUtils *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *a2,
        struct Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator **a3)
{
  __int64 (__fastcall *v5)(ExperienceManagerUtils *, HSTRING, __int64); // rsi
  __int64 AddressOf; // rdi
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  int v10; // eax
  unsigned int v11; // ebx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v13)(_QWORD, GUID *, _QWORD); // rdi
  int v14; // eax
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct Windows::Internal::Shell::Experience::IShellExperienceManagerFactory *); // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD); // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  HSTRING string; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v18 = 0LL;
  v5 = *(__int64 (__fastcall **)(ExperienceManagerUtils *, HSTRING, __int64))(*(_QWORD *)this + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IInspectable>::ReleaseAndGetAddressOf(&v18);
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.Host", 0x25u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
    __debugbreak();
  }
  v10 = v5(this, string, AddressOf);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10E,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_7;
  }
  v17 = 0LL;
  v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v18;
  v13 = **v18;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
  v14 = v13(v12, &GUID_2410129c_64a0_4b85_9e61_12caec38d6ef, &v17);
  v11 = v14;
  if ( v14 < 0 )
  {
    v16 = 272LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanagerutils.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_6;
  }
  v14 = (**v17)(v17, &GUID_fdae1e57_9570_4461_bab5_532c0f899149, a2);
  v11 = v14;
  if ( v14 < 0 )
  {
    v16 = 273LL;
    goto LABEL_12;
  }
  v11 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
  return v11;
}
