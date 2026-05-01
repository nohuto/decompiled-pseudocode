/*
 * XREFs of ?OnViewWrapperViewEvent@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x1800BA9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0IViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@QEAA@$$T@Z @ 0x18008A8A4 (--0IViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@QEAA@$$T@Z.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x1800AD764 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800B879C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ @ 0x1800B9B4C (-OnViewConsolidationRequested@UndockedSearchAppExperienceManager@@QEAAJXZ.c)
 *     ??$UndockedSearchAppExperienceManager_OnViewWrapperViewEvent@AEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@SearchAppExperienceManagerTelemetry@@SAXAEAW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800BACCC (--$UndockedSearchAppExperienceManager_OnViewWrapperViewEvent@AEAW4ViewEventType@ViewManagerInter.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@UWindowId@UI@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@UWindowId@UI@5@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@UWindowId@UI@Windows@@@Z @ 0x1800E465C (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@UWindowId@UI@Windows@@@-$EventSource@U-$ITy.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180112970 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180174554 (-OnViewDestroyed@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801747C0 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801AB2A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbar@@@details@wil@@QEAAX_N.c)
 *     ?UndockedSearchAppExperienceManager_OnWindowChanged@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1801B5844 (-UndockedSearchAppExperienceManager_OnWindowChanged@SearchAppExperienceManagerTelemetry@@SAXXZ.c)
 *     ??$try_as@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1801DA0F8 (--$try_as@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@winrt@@@IUn.c)
 *     ??1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ @ 0x1801DA1D8 (--1ProtocolLauncherInfo@StateRepository@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?VisibilityRevoked@?$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOverride@UIViewVisibilityOverride@ViewManagerInterop@Desktop@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1801DB9DC (-VisibilityRevoked@-$consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOv.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UndockedSearchAppExperienceManager::OnViewWrapperViewEvent(
        ExperienceManagerUtils **this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v6; // eax
  unsigned int v7; // esi
  __int64 (__fastcall *v9)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v13; // rdx
  __int64 v14; // rax
  void *v15; // r8
  int v16[4]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v18; // [rsp+60h] [rbp+30h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v19; // [rsp+68h] [rbp+38h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v18);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70A,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6,
      v16[0]);
    return v7;
  }
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnViewWrapperViewEvent<enum Windows::Internal::Shell::ViewManagerInterop::ViewEventType &>(&v18);
  if ( v18 )
  {
    switch ( v18 )
    {
      case 2:
        v19 = 0LL;
        v9 = *(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)a3 + 56LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
        v10 = v9(a3, &v19);
        v11 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x717,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v10,
            v16[0]);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
          return v11;
        }
        UndockedSearchAppExperienceManager::OnViewRequestNavigate((UndockedSearchAppExperienceManager *)this, v19);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
        break;
      case 35:
        UndockedSearchAppExperienceManager::OnViewConsolidationRequested((volatile signed __int32 **)this);
        break;
      case 4:
        if ( this[8] == (ExperienceManagerUtils *)a2 )
          UndockedSearchAppExperienceManager::OnViewDestroyed((UndockedSearchAppExperienceManager *)this);
        break;
      case 6:
        SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnWindowChanged();
        LOBYTE(v12) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbar>::GetImpl'::`2'::impl,
          v12);
        if ( (unsigned int)SHIsSameObject((struct IUnknown *)this[8], a2) )
        {
          v14 = ExperienceManagerUtils::WindowFromViewWrapper(this[8], v13);
          Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::UI::WindowId>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,Windows::UI::WindowId>(
            this + 88,
            this,
            v14);
        }
        break;
      default:
        if ( v18 == 7 && a2 )
        {
          winrt::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper::IViewWrapper(v16);
          winrt::copy_from_abi((winrt *)v16, a2, v15);
          winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride>(
            v16,
            &v19);
          if ( (unsigned __int8)wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v19) )
            *((_BYTE *)this + 875) = winrt::impl::consume_Windows_Internal_Shell_Desktop_ViewManagerInterop_IViewVisibilityOverride<winrt::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewVisibilityOverride>::VisibilityRevoked(&v19);
          winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo::~ProtocolLauncherInfo((winrt::Windows::Internal::StateRepository::ProtocolLauncherInfo *)&v19);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v16);
        }
        break;
    }
  }
  else
  {
    UndockedSearchAppExperienceManager::OnViewCreated(
      (UndockedSearchAppExperienceManager *)this,
      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  }
  return 0LL;
}
