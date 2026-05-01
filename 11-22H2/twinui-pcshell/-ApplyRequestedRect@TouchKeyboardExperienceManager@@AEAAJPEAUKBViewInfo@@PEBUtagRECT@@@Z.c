/*
 * XREFs of ?ApplyRequestedRect@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@@Z @ 0x18050E368
 * Callers:
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18050DCC8 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180516958 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180516DE0 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x180197958 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA?AUtagRECT@@U3@URect@Foundation@Windows@@@Z @ 0x1802DE180 (-GetOccludingRectInGlobalCoordinates@ViewRectHelper@KeyboardHosting@@SA-AUtagRECT@@U3@URect@Foun.c)
 *     ??$SetVisibleViewRect@AEAURect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAURect@Foundation@Windows@@@Z @ 0x180508E90 (--$SetVisibleViewRect@AEAURect@Foundation@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXA.c)
 *     ?BoostPriority@KBViewInfo@@QEAAXXZ @ 0x18050E7B8 (-BoostPriority@KBViewInfo@@QEAAXXZ.c)
 *     ?SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicationFrame@@PEBUtagRECT@@@Z @ 0x180515F74 (-SetHostedPos@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUIApplicatio.c)
 *     ?UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z @ 0x18051B8D0 (-UpdateBorderStyle@TouchKeyboardExperienceManager@@AEAAJPEAUHWND__@@AEBUKBViewInfo@@@Z.c)
 *     ?swap@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAXAEAV12@@Z @ 0x18051D7DC (-swap@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::ApplyRequestedRect(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        const struct tagRECT *a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, struct IApplicationFrame **); // rbx
  int v8; // eax
  TouchKeyboardExperienceManager *v9; // rcx
  unsigned int v10; // esi
  __int64 v11; // rdx
  HRGN v12; // rbx
  HRGN RectRgn; // rax
  const __m128i *v14; // rsi
  const __m128i *v15; // r15
  float v16; // xmm1_4
  HRGN v17; // rax
  HRGN v18; // rdi
  __int64 v19; // r9
  __int64 v20; // rdx
  int updated; // eax
  int v22; // eax
  struct IApplicationFrame *v24; // [rsp+20h] [rbp-60h] BYREF
  HRGN hrgnDst; // [rsp+28h] [rbp-58h] BYREF
  HWND hWnd[2]; // [rsp+30h] [rbp-50h] BYREF
  HRGN hrgnSrc2[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v28; // [rsp+50h] [rbp-30h] BYREF
  __m128 v29; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v24 = 0LL;
  v6 = *((_QWORD *)a2 + 1);
  v7 = *(__int64 (__fastcall **)(__int64, struct IApplicationFrame **))(*(_QWORD *)v6 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
  v8 = v7(v6, &v24);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = 4316LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_37;
  }
  v8 = TouchKeyboardExperienceManager::SetHostedPos(v9, *((struct IApplicationFrameWrapper **)a2 + 1), v24, a3);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = 4318LL;
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 32LL))(*((_QWORD *)a2 + 2), 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = 4319LL;
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 80LL))(*((_QWORD *)a2 + 2));
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = 4320LL;
    goto LABEL_11;
  }
  v8 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v24 + 24LL))(v24, hWnd);
  v10 = v8;
  if ( v8 < 0 )
  {
    v11 = 4322LL;
    goto LABEL_11;
  }
  v12 = 0LL;
  hrgnDst = 0LL;
  if ( (__int64)(*((_QWORD *)a2 + 24) - *((_QWORD *)a2 + 23)) >> 4 )
  {
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      (void **)&hrgnDst,
      RectRgn);
    v14 = (const __m128i *)*((_QWORD *)a2 + 23);
    v15 = (const __m128i *)*((_QWORD *)a2 + 24);
    v12 = hrgnDst;
    while ( v14 != v15 )
    {
      v29 = (__m128)_mm_loadu_si128(v14);
      hrgnSrc2[0] = 0LL;
      v16 = _mm_shuffle_ps(v29, v29, 85).m128_f32[0];
      v17 = CreateRectRgn(
              (int)v29.m128_f32[0],
              (int)v16,
              (int)(float)(_mm_shuffle_ps(v29, v29, 170).m128_f32[0] + v29.m128_f32[0]),
              (int)(float)(_mm_shuffle_ps(v29, v29, 255).m128_f32[0] + v16));
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
        (void **)hrgnSrc2,
        v17);
      v18 = hrgnSrc2[0];
      if ( !hrgnSrc2[0] )
      {
        v10 = -2147024890;
        v19 = 2147942406LL;
        v20 = 4340LL;
        goto LABEL_33;
      }
      if ( !CombineRgn(v12, v12, hrgnSrc2[0], 2) )
      {
        v10 = -2147418113;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x10F5,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)0x8000FFFFLL);
        DeleteObject(v18);
        goto LABEL_35;
      }
      TouchKeyboardExperienceTelemetryLogger::SetVisibleViewRect<Windows::Foundation::Rect &>((struct Windows::Foundation::Rect *)&v29);
      DeleteObject(v18);
      ++v14;
    }
    if ( !SetWindowRgn(hWnd[0], v12, 1) )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10F9,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)0x8000FFFFLL);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) )
    {
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>>::swap(
        (char *)this + 640,
        &hrgnDst);
      v12 = hrgnDst;
    }
  }
  else if ( !SetWindowRgn(hWnd[0], 0LL, 1) )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1109,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
  }
  updated = TouchKeyboardExperienceManager::UpdateBorderStyle(this, hWnd[0], a2);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x110C,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)updated);
  *(struct tagRECT *)((char *)a2 + 120) = *a3;
  v29 = *(__m128 *)((char *)a2 + 168);
  *(struct tagRECT *)hrgnSrc2 = *a3;
  *(_OWORD *)((char *)a2 + 136) = *(_OWORD *)KeyboardHosting::ViewRectHelper::GetOccludingRectInGlobalCoordinates(
                                               &v28,
                                               (const struct Windows::Foundation::Rect *)hrgnSrc2,
                                               (KeyboardHosting *)&v29);
  v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a2 + 344LL))(*(_QWORD *)a2, 4LL);
  v10 = v22;
  if ( v22 < 0 )
  {
    v20 = 4370LL;
    goto LABEL_32;
  }
  KBViewInfo::BoostPriority(a2);
  v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
  v10 = v22;
  if ( v22 < 0 )
  {
    v20 = 4377LL;
LABEL_32:
    v19 = (unsigned int)v22;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v19);
    goto LABEL_35;
  }
  v10 = 0;
LABEL_35:
  if ( v12 )
    DeleteObject(v12);
LABEL_37:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v24);
  return v10;
}
