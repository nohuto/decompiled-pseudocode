/*
 * XREFs of ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x1802D4B28
 * Callers:
 *     ?OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z @ 0x18018A660 (-OnMessage@CStartExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x180445F80 (-TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Inter.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18001B048 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18009ACBC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800EDA34 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x1802D05FC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CStartExperienceManager::ReactivateHelper(CStartExperienceManager *this, const unsigned __int16 *a2)
{
  int v3; // eax
  int v4; // ebx
  unsigned int v5; // r8d
  HSTRING_HEADER *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // r8
  int v8; // eax
  unsigned int v9; // r8d
  HSTRING v10; // rbx
  HSTRING_HEADER *v11; // rax
  HSTRING v13; // [rsp+40h] [rbp-40h] BYREF
  HSTRING v14; // [rsp+48h] [rbp-38h] BYREF
  const WCHAR *v15; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v15 = a2;
  v13 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v17,
         (__int64 *)&v13);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v14 = v13;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
    v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           &hstringHeader,
           (const WCHAR **)&off_1807F4448,
           v5);
    v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v14,
           (HSTRING)v6[1].Reserved.Reserved1,
           v7);
    v4 = v8;
    if ( v8 >= 0 )
    {
      v10 = v13;
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, &v15, v9);
      v4 = ExperienceManagerUtils::RaiseReactivatedEvent(
             *((ExperienceManagerUtils **)this + 43),
             (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 112),
             *((HSTRING *)this + 41),
             *((HSTRING *)this + 42),
             (HSTRING)v11[1].Reserved.Reserved1,
             v10);
      if ( v4 >= 0 )
        v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46E,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x46C,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  return (unsigned int)v4;
}
