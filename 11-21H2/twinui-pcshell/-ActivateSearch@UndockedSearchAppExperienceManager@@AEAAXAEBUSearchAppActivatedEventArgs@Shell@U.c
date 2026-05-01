/*
 * XREFs of ?ActivateSearch@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18019E468
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActivationMode@Shell@UI@WindowsUdk@3@PEBG@Z @ 0x18019D9F4 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NAEBUhstring@winrt@@W4SearchAppActiv.c)
 * Callees:
 *     ??1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180020128 (--1IElementCompositionPreviewStatics2@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienceManager@@PEAVWeakRef@01@@Z @ 0x18006C088 (--$AsWeak@VUndockedSearchAppExperienceManager@@@WRL@Microsoft@@YAJPEAVUndockedSearchAppExperienc.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800F9C28 (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?PrelaunchActivated@?$consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs@UIPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800FA474 (-PrelaunchActivated@-$consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs@U.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z @ 0x180143304 (--0ShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@QEAA@AEBU01234@@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1801492F0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_cad582326f08631f2948fcf147cbafec___ @ 0x180199DF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_cad582326f08631f2948fcf147cbafec___.c)
 *     _lambda_cad582326f08631f2948fcf147cbafec_::__lambda_cad582326f08631f2948fcf147cbafec_ @ 0x18019B930 (_lambda_cad582326f08631f2948fcf147cbafec_--__lambda_cad582326f08631f2948fcf147cbafec_.c)
 *     ?Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@WindowsUdk@winrt@@_N@Z @ 0x18019D74C (-Activate@UndockedSearchAppExperienceManager@@AEAAXAEBUSearchAppActivatedEventArgs@Shell@UI@Wind.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAA_NXZ @ 0x1801A2354 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@_ea_1801A2354.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UndockedSearchAppExperienceManager::ActivateSearch(
        UndockedSearchAppExperienceManager *this,
        const struct winrt::WindowsUdk::UI::Shell::SearchAppActivatedEventArgs *a2,
        char a3)
{
  __int64 (__fastcall ***v6)(_QWORD, void *, __int64 ***); // rcx
  unsigned int v7; // eax
  char v8; // bl
  __int64 *v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 **v14; // [rsp+20h] [rbp-30h] BYREF
  char v15[8]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v16[8]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 *v19; // [rsp+88h] [rbp+38h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl)
    && ((v6 = *(__int64 (__fastcall ****)(_QWORD, void *, __int64 ***))a2) != 0LL
      ? (v14 = 0LL,
         v7 = (**v6)(
                v6,
                &winrt::impl::guid_v<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>,
                &v14),
         winrt::check_hresult(v7),
         v19 = (__int64 *)v14)
      : (v19 = 0LL),
        (v8 = winrt::impl::consume_Windows_ApplicationModel_Activation_IPrelaunchActivatedEventArgs<winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs>::PrelaunchActivated((__int64 *)&v19),
         winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2::~IElementCompositionPreviewStatics2((winrt::Windows::UI::Xaml::Hosting::IElementCompositionPreviewStatics2 *)&v19),
         !v8)
     && a3) )
  {
    v19 = 0LL;
    v14 = &v19;
    v9 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v14);
    v10 = Microsoft::WRL::AsWeak<UndockedSearchAppExperienceManager>((__int64)this, v9);
    winrt::check_hresult(v10);
    v15[0] = a3;
    winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs::ShowShellViewRequestedEventArgs(
      (winrt::WindowsUdk::UI::Shell::ShowShellViewRequestedEventArgs *)v16,
      a2);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
      v17,
      (__int64 *)&v19);
    v17[1] = (__int64)this;
    v13 = Windows::Internal::ComTaskPool::QueueTask__lambda_cad582326f08631f2948fcf147cbafec___(
            v12,
            v11,
            *((_DWORD *)this + 38),
            (__int64)v15);
    lambda_cad582326f08631f2948fcf147cbafec_::__lambda_cad582326f08631f2948fcf147cbafec_((__int64)v15);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x850,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
        (const char *)(unsigned int)v13,
        (int)v14);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
  }
  else
  {
    UndockedSearchAppExperienceManager::Activate(this, a2, a3);
  }
}
