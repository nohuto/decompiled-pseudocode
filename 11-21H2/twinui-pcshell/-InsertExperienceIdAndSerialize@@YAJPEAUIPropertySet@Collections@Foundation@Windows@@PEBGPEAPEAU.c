/*
 * XREFs of ?InsertExperienceIdAndSerialize@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEBGPEAPEAUIBuffer@Streams@Storage@4@@Z @ 0x1800A5084
 * Callers:
 *     ?GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAPEAUIBuffer@Streams@Storage@4@PEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1800A4F34 (-GetSeralizedPropertysetAndActivateOptions@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x1803525E0 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall InsertExperienceIdAndSerialize(
        struct Windows::Foundation::Collections::IPropertySet *a1,
        const unsigned __int16 *a2,
        struct Windows::Storage::Streams::IBuffer **a3)
{
  unsigned int v6; // r8d
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v11; // r8d
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v15; // [rsp+28h] [rbp-58h] BYREF
  const WCHAR *v16; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v17[32]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v18[32]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v16 = a2;
  *a3 = 0LL;
  v15 = a1;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  if ( a2
    && (Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v17, &v16, v6),
        v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)v18,
                (const WCHAR **)&off_180669C60,
                v11),
        v13 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v15,
                *(HSTRING *)(v12 + 24)),
        v8 = v13,
        v13 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v13);
  }
  else
  {
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
    v7 = RoCreatePropertySetSerializer(&v14);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v7);
    }
    else
    {
      v16 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet *, struct Windows::Storage::Streams::IBuffer **))(*(_QWORD *)v14 + 48LL))(
             v14,
             a1,
             a3);
      v8 = v9;
      if ( v9 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4F,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
          (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
  return v8;
}
