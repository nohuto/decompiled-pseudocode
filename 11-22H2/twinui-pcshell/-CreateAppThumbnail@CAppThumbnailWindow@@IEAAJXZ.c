/*
 * XREFs of ?CreateAppThumbnail@CAppThumbnailWindow@@IEAAJXZ @ 0x18055597C
 * Callers:
 *     ?Open@CAppThumbnailWindow@@QEAAJXZ @ 0x18055992C (-Open@CAppThumbnailWindow@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18019A7C8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputDrivenGTGAnimations@@@details@wil@@Q.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802D5004 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     ??$as@UCompositor@Composition@UI@Windows@winrt@@UICompositor@234@$0A@@impl@winrt@@YA?AUCompositor@Composition@UI@Windows@1@PEAUICompositor@345@@Z @ 0x18054BAB0 (--$as@UCompositor@Composition@UI@Windows@winrt@@UICompositor@234@$0A@@impl@winrt@@YA-AUComposito.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18054FD14 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_3FingerAnimationSwitchApps@@@details@wil@.c)
 *     EnumWindowsHelpers::ForEachWindowHr__lambda_cab7c03a2b5ac7190be81e45414ea272___ @ 0x18055488C (EnumWindowsHelpers--ForEachWindowHr__lambda_cab7c03a2b5ac7190be81e45414ea272___.c)
 *     ??$as@UVisual@Composition@UI@Windows@winrt@@UIDCompositionVisual2@@$0A@@impl@winrt@@YA?AUVisual@Composition@UI@Windows@1@PEAUIDCompositionVisual2@@@Z @ 0x180554E00 (--$as@UVisual@Composition@UI@Windows@winrt@@UIDCompositionVisual2@@$0A@@impl@winrt@@YA-AUVisual@.c)
 *     ?CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x180556914 (-CreateBackgroundThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUH.c)
 *     ?CreatePropertySet@?$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180556DE8 (-CreatePropertySet@-$consume_Windows_UI_Composition_ICompositor@UICompositor@Composition@UI@Wind.c)
 *     ?CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x180557AF4 (-CreateTrayThumbnail@CAppThumbnailWindow@@IEAAJAEAV-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@.c)
 *     ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x18055CAFC (-TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV-$vector@PEAU.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
__int64 __fastcall CAppThumbnailWindow::CreateAppThumbnail(CAppThumbnailWindow *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, _QWORD, GUID *, _QWORD *); // rbx
  _QWORD *v4; // r15
  int v5; // edx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int128 *, char *); // rbx
  _QWORD *v11; // r14
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  HMONITOR v17; // rdx
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // r9
  unsigned int v21; // ebx
  __int64 (__fastcall ***v22)(_QWORD, void *, __int64 *); // rbx
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // edi
  __int64 v26; // r8
  __int64 v27; // r9
  int ThumbnailsForTopTwoAppsAndAddToExcludeList; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  winrt::Windows::Foundation::IUnknown *v33; // rax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  __int128 v37; // [rsp+30h] [rbp-128h] BYREF
  __int64 v38; // [rsp+40h] [rbp-118h]
  __int64 (__fastcall ***v39)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp-110h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, void *, __int64 *); // [rsp+50h] [rbp-108h] BYREF
  __int128 v41; // [rsp+58h] [rbp-100h] BYREF
  __int64 v42; // [rsp+68h] [rbp-F0h]
  __int128 v43; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+80h] [rbp-D8h]
  __int64 v45; // [rsp+88h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v46)(_QWORD, void *, __int64 *); // [rsp+90h] [rbp-C8h] BYREF
  int v47; // [rsp+98h] [rbp-C0h] BYREF
  __int128 v48; // [rsp+A0h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v49)(_QWORD, void *, __int64 *); // [rsp+B0h] [rbp-A8h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-A0h] BYREF
  HWND TrayWindowForMonitor; // [rsp+C0h] [rbp-98h] BYREF
  int v52; // [rsp+C8h] [rbp-90h] BYREF
  int *v53; // [rsp+D0h] [rbp-88h]
  int v54; // [rsp+D8h] [rbp-80h]
  _QWORD v55[8]; // [rsp+E0h] [rbp-78h] BYREF
  __int64 v56; // [rsp+120h] [rbp-38h] BYREF
  int v57; // [rsp+128h] [rbp-30h]
  int v58; // [rsp+12Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  v56 = 0LL;
  v57 = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  v58 = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  v2 = *((_QWORD *)this + 2);
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, _QWORD *))(*(_QWORD *)v2 + 120LL);
  v4 = (_QWORD *)((char *)this + 40);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 5);
  v5 = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
  LODWORD(v48) = *((_DWORD *)this + 36) - *((_DWORD *)this + 34);
  DWORD1(v48) = v5;
  v6 = v3(v2, 0LL, v48, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DD,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v9 = *((_QWORD *)this + 2);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *, char *))(*(_QWORD *)v9 + 96LL);
  v11 = (_QWORD *)((char *)this + 64);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 8);
  v48 = *(_OWORD *)((char *)this + 136);
  v12 = v10(v9, *v4, 0LL, &v48, (char *)this + 64);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E3,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(*(_QWORD *)*v11 + 24LL))(*v11, &v56, 0LL, 0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E4,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v14);
    return v15;
  }
  v45 = 0LL;
  v16 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v11)(
          *v11,
          &GUID_7814dccf_97c7_4f4f_8fc2_a3c6c8107597,
          &v45);
  v18 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
    return v18;
  }
  v37 = 0LL;
  v38 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 19), v17);
  v52 = 18;
  v53 = &v47;
  v54 = 4;
  v55[0] = this;
  v55[1] = &TrayWindowForMonitor;
  v55[2] = &v37;
  v55[3] = &v43;
  v55[4] = &v52;
  v55[5] = &v47;
  v55[6] = &v41;
  v19 = EnumWindowsHelpers::ForEachWindowHr__lambda_cab7c03a2b5ac7190be81e45414ea272___((__int64)v55);
  v21 = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x214,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v19);
    if ( (_QWORD)v41 )
    {
      std::_Deallocate<16,0>((void *)v41, (v42 - v41) & 0xFFFFFFFFFFFFFFF8uLL);
      v41 = 0LL;
      v42 = 0LL;
    }
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16,0>((void *)v43, (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL);
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( (_QWORD)v37 )
    {
      std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
      v37 = 0LL;
      v38 = 0LL;
    }
LABEL_139:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
    return v21;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputDrivenGTGAnimations>::GetImpl'::`2'::impl,
    1u,
    3u,
    v20);
  v22 = 0LL;
  v50 = 0LL;
  v23 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 96LL))(*((_QWORD *)this + 3));
  if ( v23 )
  {
    v22 = (__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v23;
    v50 = v23;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
  }
  winrt::impl::as<winrt::Windows::UI::Composition::Compositor,Windows::UI::Composition::ICompositor,0>(&v40, v22);
  winrt::Windows::Foundation::IUnknown::operator=(
    (CAppThumbnailWindow *)((char *)this + 384),
    (winrt::Windows::Foundation::IUnknown *)&v40);
  if ( v40 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v40);
  v39 = 0LL;
  v24 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)*v11 + 104LL))(
          *v11,
          &v39);
  v25 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21D,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v24);
    if ( v39 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
    if ( v22 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v50);
    if ( (_QWORD)v41 )
    {
      std::_Deallocate<16,0>((void *)v41, (v42 - v41) & 0xFFFFFFFFFFFFFFF8uLL);
      v41 = 0LL;
      v42 = 0LL;
    }
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16,0>((void *)v43, (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL);
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( (_QWORD)v37 )
    {
      std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
      v37 = 0LL;
      v38 = 0LL;
    }
LABEL_101:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
    return v25;
  }
  winrt::impl::as<winrt::Windows::UI::Composition::Visual,IDCompositionVisual2,0>(&v40, v39);
  winrt::Windows::Foundation::IUnknown::operator=(
    (CAppThumbnailWindow *)((char *)this + 408),
    (winrt::Windows::Foundation::IUnknown *)&v40);
  if ( v40 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v40);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_3FingerAnimationSwitchApps>::GetImpl'::`2'::impl,
    1u,
    v26,
    v27);
  ThumbnailsForTopTwoAppsAndAddToExcludeList = CAppThumbnailWindow::TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList(this);
  v25 = ThumbnailsForTopTwoAppsAndAddToExcludeList;
  if ( ThumbnailsForTopTwoAppsAndAddToExcludeList < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x226,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)ThumbnailsForTopTwoAppsAndAddToExcludeList);
    if ( v39 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
    if ( v22 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v50);
    if ( (_QWORD)v41 )
    {
      std::_Deallocate<16,0>((void *)v41, (v42 - v41) & 0xFFFFFFFFFFFFFFF8uLL);
      v41 = 0LL;
      v42 = 0LL;
    }
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16,0>((void *)v43, (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL);
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( (_QWORD)v37 )
    {
      std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
      v37 = 0LL;
      v38 = 0LL;
    }
    goto LABEL_101;
  }
  v29 = *((_QWORD *)this + 52);
  if ( v29 && *((_QWORD *)this + 54) && *((_QWORD *)this + 56) )
  {
    v46 = 0LL;
    v30 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(*(_QWORD *)v29 + 104LL))(
            v29,
            &v46);
    v25 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22D,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v30);
      if ( v46 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v46);
      if ( v39 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
      if ( v22 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v50);
      if ( (_QWORD)v41 )
      {
        std::_Deallocate<16,0>((void *)v41, (v42 - v41) & 0xFFFFFFFFFFFFFFF8uLL);
        v41 = 0LL;
        v42 = 0LL;
      }
      if ( (_QWORD)v43 )
      {
        std::_Deallocate<16,0>((void *)v43, (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL);
        v43 = 0LL;
        v44 = 0LL;
      }
      if ( (_QWORD)v37 )
      {
        std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
        v37 = 0LL;
        v38 = 0LL;
      }
      goto LABEL_101;
    }
    winrt::impl::as<winrt::Windows::UI::Composition::Visual,IDCompositionVisual2,0>(&v48, v46);
    winrt::Windows::Foundation::IUnknown::operator=(
      (CAppThumbnailWindow *)((char *)this + 424),
      (winrt::Windows::Foundation::IUnknown *)&v48);
    if ( (_QWORD)v48 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v48);
    v49 = 0LL;
    v31 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(**((_QWORD **)this + 54)
                                                                                                  + 104LL))(
            *((_QWORD *)this + 54),
            &v49);
    v25 = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x231,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v31);
      if ( v49 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v49);
      if ( v46 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v46);
      if ( v39 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
      if ( v22 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v50);
      if ( (_QWORD)v41 )
      {
        std::_Deallocate<16,0>((void *)v41, (v42 - v41) & 0xFFFFFFFFFFFFFFF8uLL);
        v41 = 0LL;
        v42 = 0LL;
      }
      if ( (_QWORD)v43 )
      {
        std::_Deallocate<16,0>((void *)v43, (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL);
        v43 = 0LL;
        v44 = 0LL;
      }
      if ( (_QWORD)v37 )
      {
        std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
        v37 = 0LL;
        v38 = 0LL;
      }
      goto LABEL_101;
    }
    winrt::impl::as<winrt::Windows::UI::Composition::Visual,IDCompositionVisual2,0>(&v48, v49);
    winrt::Windows::Foundation::IUnknown::operator=(
      (CAppThumbnailWindow *)((char *)this + 440),
      (winrt::Windows::Foundation::IUnknown *)&v48);
    if ( (_QWORD)v48 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v48);
    v40 = 0LL;
    v32 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, void *, __int64 *)))(**((_QWORD **)this + 56)
                                                                                                  + 104LL))(
            *((_QWORD *)this + 56),
            &v40);
    v25 = v32;
    if ( v32 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x235,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
        (const char *)(unsigned int)v32);
      if ( v40 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v40);
      if ( v49 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v49);
      if ( v46 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v46);
      if ( v39 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
      if ( v22 )
        winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v50);
      if ( (_QWORD)v41 )
      {
        std::_Deallocate<16,0>((void *)v41, (v42 - v41) & 0xFFFFFFFFFFFFFFF8uLL);
        v41 = 0LL;
        v42 = 0LL;
      }
      if ( (_QWORD)v43 )
      {
        std::_Deallocate<16,0>((void *)v43, (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL);
        v43 = 0LL;
        v44 = 0LL;
      }
      if ( (_QWORD)v37 )
      {
        std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
        v37 = 0LL;
        v38 = 0LL;
      }
      goto LABEL_101;
    }
    winrt::impl::as<winrt::Windows::UI::Composition::Visual,IDCompositionVisual2,0>(&v48, v40);
    winrt::Windows::Foundation::IUnknown::operator=(
      (CAppThumbnailWindow *)((char *)this + 456),
      (winrt::Windows::Foundation::IUnknown *)&v48);
    if ( (_QWORD)v48 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v48);
    if ( v40 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v40);
    if ( v49 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v49);
    if ( v46 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v46);
  }
  v33 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_UI_Composition_ICompositor<winrt::Windows::UI::Composition::ICompositor>::CreatePropertySet(
                                                  (char *)this + 384,
                                                  &v48);
  winrt::Windows::Foundation::IUnknown::operator=((CAppThumbnailWindow *)((char *)this + 392), v33);
  if ( (_QWORD)v48 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v48);
  if ( v39 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v39);
  if ( v22 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v50);
  v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v45 + 24LL))(v45, 0LL, 0LL);
  v21 = v34;
  if ( v34 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x241,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v34);
    if ( (_QWORD)v41 )
    {
      std::_Deallocate<16,0>((void *)v41, (v42 - v41) & 0xFFFFFFFFFFFFFFF8uLL);
      v41 = 0LL;
      v42 = 0LL;
    }
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16,0>((void *)v43, (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL);
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( (_QWORD)v37 )
    {
      std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
      v37 = 0LL;
      v38 = 0LL;
    }
    goto LABEL_139;
  }
  v35 = CAppThumbnailWindow::CreateTrayThumbnail(this, &v43);
  v21 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x243,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v35);
    if ( (_QWORD)v41 )
    {
      std::_Deallocate<16,0>((void *)v41, (v42 - v41) & 0xFFFFFFFFFFFFFFF8uLL);
      v41 = 0LL;
      v42 = 0LL;
    }
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16,0>((void *)v43, (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL);
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( (_QWORD)v37 )
    {
      std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
      v37 = 0LL;
      v38 = 0LL;
    }
    goto LABEL_139;
  }
  v36 = CAppThumbnailWindow::CreateBackgroundThumbnail(this, &v41);
  v21 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x244,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\appthumbnailwindow.cpp",
      (const char *)(unsigned int)v36);
    if ( (_QWORD)v41 )
    {
      std::_Deallocate<16,0>((void *)v41, (v42 - v41) & 0xFFFFFFFFFFFFFFF8uLL);
      v41 = 0LL;
      v42 = 0LL;
    }
    if ( (_QWORD)v43 )
    {
      std::_Deallocate<16,0>((void *)v43, (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL);
      v43 = 0LL;
      v44 = 0LL;
    }
    if ( (_QWORD)v37 )
    {
      std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
      v37 = 0LL;
      v38 = 0LL;
    }
    goto LABEL_139;
  }
  if ( (_QWORD)v41 )
  {
    std::_Deallocate<16,0>((void *)v41, (v42 - v41) & 0xFFFFFFFFFFFFFFF8uLL);
    v41 = 0LL;
    v42 = 0LL;
  }
  if ( (_QWORD)v43 )
  {
    std::_Deallocate<16,0>((void *)v43, (v44 - v43) & 0xFFFFFFFFFFFFFFF8uLL);
    v43 = 0LL;
    v44 = 0LL;
  }
  if ( (_QWORD)v37 )
  {
    std::_Deallocate<16,0>((void *)v37, (v38 - v37) & 0xFFFFFFFFFFFFFFF8uLL);
    v37 = 0LL;
    v38 = 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
  return 0LL;
}
