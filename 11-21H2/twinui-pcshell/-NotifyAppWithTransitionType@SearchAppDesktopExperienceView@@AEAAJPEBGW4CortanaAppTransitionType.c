/*
 * XREFs of ?NotifyAppWithTransitionType@SearchAppDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x18039B600
 * Callers:
 *     ?PrepareForAppTransition@SearchAppDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18039D680 (-PrepareForAppTransition@SearchAppDesktopExperienceView@@UEAAJW4CortanaAppTransitionType@Experie.c)
 *     ?Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18039D824 (-Relaunch@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18039E000 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800A47E0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJ0PEAPEAUIInspectable@@@Z0@Z @ 0x1803525E0 (--$SetValue@PEAUHSTRING__@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18036C15C (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?NotifyView@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18039BC10 (-NotifyView@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Fou.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SearchAppDesktopExperienceView::NotifyAppWithTransitionType(
        SearchAppDesktopExperienceView *a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // r8d
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // r8d
  struct Windows::Foundation::Collections::IPropertySet *v14; // rbx
  __int64 v15; // rax
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v18; // [rsp+28h] [rbp-38h] BYREF
  const WCHAR *v19; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v19 = a2;
  v18 = 0LL;
  v21 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.Collections.ValueSet",
    0x28u,
    0x27u);
  v6 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v21,
         (__int64 *)&v18);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v17 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
    if ( a4
      && (v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                 (__int64)&hstringHeader,
                 (const WCHAR **)&off_180669668,
                 v8),
          v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<HSTRING__ *>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
                  *(HSTRING *)(v9 + 24)),
          v7 = v10,
          v10 < 0) )
    {
      v11 = 2086LL;
    }
    else
    {
      v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              (__int64)&hstringHeader,
              (const WCHAR **)&off_180669650,
              v8);
      v10 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v17,
              *(HSTRING *)(v12 + 24));
      v7 = v10;
      if ( v10 >= 0 )
      {
        v14 = v18;
        v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, &v19, v13);
        v10 = SearchAppDesktopExperienceView::NotifyView(a1, *(HSTRING *)(v15 + 24), v14);
        v7 = v10;
        if ( v10 >= 0 )
        {
          v7 = 0;
          goto LABEL_12;
        }
        v11 = 2093LL;
      }
      else
      {
        v11 = 2091LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v10);
LABEL_12:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x81F,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
    (const char *)(unsigned int)v6);
LABEL_13:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
  return v7;
}
