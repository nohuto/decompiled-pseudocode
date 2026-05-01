/*
 * XREFs of ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18045C7D4
 * Callers:
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18045C14C (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180464CD0 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x1804650F0 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18011A250 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTFrame@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x1801569AC (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801569F4 (--1-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral_.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164788 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop@@@detai.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SetVisibleViewRect@AEAURect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAURect@Foundation@Windows@@@Z @ 0x1804582CC (--$SetVisibleViewRect@AEAURect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXA.c)
 *     ?BoostPriority@KBViewInfo@@QEAAXXZ @ 0x18045CBC0 (-BoostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x18046497C (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ViewEffectKind@@@Z @ 0x180469B84 (-UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@W4ViewEffectKind@@@Z.c)
 *     ?GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA?AUtagRECT@@U3@URect@Foundation@Windows@@@Z @ 0x18046AF18 (-GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA-AUtagRECT@@U3@URect@Foun.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::ApplyRequestedRect(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        const struct tagRECT *a3)
{
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, struct IApplicationFrame **); // rbx
  int v7; // eax
  TouchKeyboardExperienceManager *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  HRGN RectRgn; // rax
  const __m128i *v14; // rdi
  const __m128i *v15; // r14
  HRGN v16; // rbx
  float v17; // xmm1_4
  HRGN v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  int updated; // eax
  struct IApplicationFrame *v30; // [rsp+20h] [rbp-50h] BYREF
  HWND hWnd; // [rsp+28h] [rbp-48h] BYREF
  HRGN hrgnDst[2]; // [rsp+30h] [rbp-40h] BYREF
  HRGN hrgnSrc2[2]; // [rsp+40h] [rbp-30h] BYREF
  __m128 v34; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v30 = 0LL;
  v5 = *((_QWORD *)a2 + 1);
  v6 = *(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v5 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
  v7 = v6(v5, &v30);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = 4544LL;
    goto LABEL_31;
  }
  v7 = TouchKeyboardExperienceManager::SetHostedPos(v8, *((struct IApplicationFrameWrapper **)a2 + 1), v30, a3);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = 4546LL;
    goto LABEL_31;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 32LL))(*((_QWORD *)a2 + 2), 0LL);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = 4547LL;
    goto LABEL_31;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 80LL))(*((_QWORD *)a2 + 2));
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = 4548LL;
    goto LABEL_31;
  }
  v7 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v30 + 24LL))(v30, &hWnd);
  v9 = v7;
  if ( v7 < 0 )
  {
    v10 = 4550LL;
    goto LABEL_31;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_SupportTransparentRegionOnDesktop>::GetImpl'::`2'::impl,
    1u,
    v11,
    v12);
  hrgnDst[0] = 0LL;
  if ( (__int64)(*((_QWORD *)a2 + 24) - *((_QWORD *)a2 + 23)) >> 4 )
  {
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)hrgnDst,
      RectRgn);
    v14 = (const __m128i *)*((_QWORD *)a2 + 23);
    v15 = (const __m128i *)*((_QWORD *)a2 + 24);
    v16 = hrgnDst[0];
    while ( v14 != v15 )
    {
      v34 = (__m128)_mm_loadu_si128(v14);
      hrgnSrc2[0] = 0LL;
      v17 = _mm_shuffle_ps(v34, v34, 85).m128_f32[0];
      v18 = CreateRectRgn(
              (int)v34.m128_f32[0],
              (int)v17,
              (int)(float)(_mm_shuffle_ps(v34, v34, 170).m128_f32[0] + v34.m128_f32[0]),
              (int)(float)(_mm_shuffle_ps(v34, v34, 255).m128_f32[0] + v17));
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
        (void **)hrgnSrc2,
        v18);
      if ( !hrgnSrc2[0] )
      {
        v9 = -2147024890;
        v23 = 4570LL;
        goto LABEL_21;
      }
      if ( !CombineRgn(v16, v16, hrgnSrc2[0], 2) )
      {
        v9 = -2147418113;
        v23 = 4571LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)v9);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)hrgnSrc2);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)hrgnDst);
        goto LABEL_33;
      }
      TouchKeyboardExperienceTelemetryLogger::SetVisibleViewRect<Windows::Foundation::Rect &>(
        (struct Windows::Foundation::Rect *)&v34,
        v19);
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)hrgnSrc2);
      ++v14;
    }
    v20 = SetWindowRgn(hWnd, v16, 1);
    v21 = retaddr;
    if ( v20 )
      goto LABEL_25;
    v22 = 4575LL;
  }
  else
  {
    v24 = SetWindowRgn(hWnd, 0LL, 1);
    v21 = retaddr;
    if ( v24 )
      goto LABEL_25;
    v22 = 4580LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v21,
    (void *)v22,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)0x8000FFFFLL);
LABEL_25:
  wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>((void **)hrgnDst);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTFrame>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VTFrame>::GetImpl'::`2'::impl,
    1u,
    v25,
    v26);
  updated = TouchKeyboardExperienceManager::UpdateBorderStyle(v27, hWnd, *((unsigned int *)a2 + 40));
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11EA,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
  *(struct tagRECT *)((char *)a2 + 120) = *a3;
  v34 = *(__m128 *)((char *)a2 + 168);
  *(struct tagRECT *)hrgnDst = *a3;
  *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)KeyboardHosting::ViewRectHelper::GetOccludingRectInGlobalCoordinates(
                                               hrgnSrc2,
                                               hrgnDst,
                                               &v34);
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 344LL))(*(_QWORD *)a2, 4LL);
  v9 = v7;
  if ( v7 >= 0 )
  {
    KBViewInfo::BoostPriority(a2);
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
    v9 = v7;
    if ( v7 >= 0 )
    {
      v9 = 0;
      goto LABEL_33;
    }
    v10 = 4604LL;
  }
  else
  {
    v10 = 4597LL;
  }
LABEL_31:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_33:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
  return v9;
}
