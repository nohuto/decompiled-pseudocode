/*
 * XREFs of ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18007620C
 * Callers:
 *     ?InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x180075E80 (-InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentati.c)
 *     ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x1805B3800 (-InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180012C88 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x180026874 (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003064C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180031094 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180031130 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x18005CE70 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x180076D54 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180076DB0 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800770B4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _lambda_15831a3e11fde15e653ed50ac8f9facd_::operator() @ 0x180212644 (_lambda_15831a3e11fde15e653ed50ac8f9facd_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1805B3CB4 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 */

__int64 __fastcall CDesktopPositioner::InitializePositionHelper(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  PositionerPropertySetHelpers *v7; // rcx
  int DetailsForActivation; // eax
  int v9; // ebx
  int v10; // eax
  int RestorePosition; // eax
  int v12; // eax
  __int64 *AddressOf; // rax
  int v14; // eax
  __int64 v16; // rdx
  CCommonApplicationViewPosition *v17; // rax
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  CCommonApplicationViewPosition *v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  int v26; // [rsp+20h] [rbp-99h]
  int v27; // [rsp+20h] [rbp-99h]
  int v28; // [rsp+20h] [rbp-99h]
  struct IApplicationViewOperation *v29; // [rsp+50h] [rbp-69h] BYREF
  struct IApplicationViewPosition *v30; // [rsp+58h] [rbp-61h] BYREF
  __int64 v31; // [rsp+60h] [rbp-59h] BYREF
  __int64 v32; // [rsp+68h] [rbp-51h] BYREF
  struct IUnknown v33; // [rsp+70h] [rbp-49h] BYREF
  __int64 v34; // [rsp+78h] [rbp-41h] BYREF
  struct tagRECT v35; // [rsp+80h] [rbp-39h] BYREF
  struct IApplicationViewPosition **v36; // [rsp+90h] [rbp-29h]
  struct IApplicationView *v37; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-11h] BYREF
  struct tagRECT v39; // [rsp+B0h] [rbp-9h] BYREF
  struct tagRECT v40; // [rsp+C0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  *(_QWORD *)&v35.left = a2;
  v37 = (struct IApplicationView *)a3;
  wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v38, &v35);
  LODWORD(v33.lpVtbl) = 0;
  *(_QWORD *)&v35.left = 0LL;
  *(_QWORD *)&v35.right = 0LL;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v7,
                           (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, ViewSizePreferenceHelpers **))v37,
                           &v33,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v35);
  v9 = DetailsForActivation;
  if ( DetailsForActivation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB56,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      v26);
    goto LABEL_18;
  }
  if ( !v38 )
  {
    v29 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
    v10 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(this, a2, &v29);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5C,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v10,
        v26);
LABEL_24:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
      goto LABEL_18;
    }
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
    RestorePosition = CDesktopPositioner::_GetRestorePosition(
                        (IUnknown *)this,
                        a2,
                        (struct PositionerPropertySetHelpers::ViewSizePreferences *)&v35,
                        &v30);
    v9 = RestorePosition;
    if ( RestorePosition < 0 )
    {
      v16 = 2912LL;
    }
    else
    {
      if ( v37 && v30 )
      {
        v32 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                    &v30,
                    &v32) >= 0 )
        {
          *(_QWORD *)&v35.left = &v32;
          *(_QWORD *)&v35.right = &v37;
          v36 = &v30;
          lambda_15831a3e11fde15e653ed50ac8f9facd_::operator()(&v35);
        }
        v39 = 0LL;
        if ( v30 )
        {
          v12 = (*(__int64 (__fastcall **)(struct IApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v30 + 24LL))(
                  v30,
                  &v39);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xB8C,
              (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v12,
              v26);
        }
        v31 = 0LL;
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v31);
        v35 = v39;
        if ( (int)CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
                    this,
                    a4,
                    &v35,
                    &v40,
                    (enum TRY_POSITION_VIEW_FLAGS *)&v33,
                    (struct IImmersiveMonitor **)AddressOf) < 0 )
        {
          v14 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition *))(*(_QWORD *)v29 + 80LL))(
                  v29,
                  v30);
          v9 = v14;
          if ( v14 < 0 )
          {
            v24 = 2980LL;
          }
          else
          {
            v14 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                    a2,
                    v29);
            v9 = v14;
            if ( v14 >= 0 )
            {
LABEL_15:
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
LABEL_16:
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
              goto LABEL_17;
            }
            v24 = 2981LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v24,
            (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v14,
            v27);
          goto LABEL_36;
        }
        v34 = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
        v34 = 0LL;
        v17 = (CCommonApplicationViewPosition *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
        *(_QWORD *)&v35.left = v17;
        if ( v17 )
        {
          v20 = CCommonApplicationViewPosition::CCommonApplicationViewPosition(v17);
          *(_QWORD *)&v35.left = 0LL;
          Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v35, (__int64)v20);
          v21 = *(_QWORD *)&v35.left;
          *(struct tagRECT *)(*(_QWORD *)&v35.left + 16LL) = v40;
          v9 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
                 v21,
                 (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
                 &v34);
          Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v35.left);
          if ( v9 >= 0 )
          {
            v35 = v40;
            v28 = (int)v29;
            v22 = CDesktopPositioner::PositionViewWithOptions(this, a2, &v35, LODWORD(v33.lpVtbl));
            if ( v22 < 0 )
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xB9A,
                (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                (const char *)(unsigned int)v22,
                v28);
              v23 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition *))(*(_QWORD *)v29 + 80LL))(
                      v29,
                      v30);
              v9 = v23;
              if ( v23 < 0 )
              {
                v18 = (unsigned int)v23;
                v19 = 2973LL;
                goto LABEL_33;
              }
              v25 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                      a2,
                      v29);
              v9 = v25;
              if ( v25 < 0 )
              {
                v18 = (unsigned int)v25;
                v19 = 2974LL;
                goto LABEL_33;
              }
            }
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
            goto LABEL_15;
          }
        }
        else
        {
          Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v35);
          v9 = -2147024882;
        }
        v18 = (unsigned int)v9;
        v19 = 2965LL;
LABEL_33:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)v18,
          v27);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v34);
LABEL_36:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v31);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
        goto LABEL_23;
      }
      RestorePosition = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                          a2,
                          v29);
      v9 = RestorePosition;
      if ( RestorePosition >= 0 )
        goto LABEL_16;
      v16 = 2986LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)RestorePosition,
      v26);
LABEL_23:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
    goto LABEL_24;
  }
LABEL_17:
  v9 = 0;
LABEL_18:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
  return (unsigned int)v9;
}
