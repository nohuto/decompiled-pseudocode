/*
 * XREFs of ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180483510
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180474140 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WorkAreaChangeHandling@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C13E0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WorkAreaChangeHandling@@@details@wil@@QEA.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x1800C2934 (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18010B3D8 (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180121F64 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x1801B0F80 (KeyboardHosting--ForceToFitRectWithinMonitorRect.c)
 *     ShouldLoadLastFloatingPosition @ 0x180230042 (ShouldLoadLastFloatingPosition.c)
 *     ShouldSaveLastFloatingPosition @ 0x180230064 (ShouldSaveLastFloatingPosition.c)
 *     ??$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAI1@Z @ 0x18047F798 (--$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0.c)
 *     ??$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU123@AEAW44@_KAEAU123@AEAW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x18047F83C (--$MonitorInfoUsedForShowRequest@_KAEAURect@Foundation@Windows@@AEAW4DEVICE_SCALE_FACTOR@@_KAEAU.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18047FFE8 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@I.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180480174 (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180480500 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x180480BF0 (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180482218 (-IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositio.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x180482B2C (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x1804840E0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        _BYTE *a7)
{
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 *v11; // r15
  _OWORD *v12; // rdx
  unsigned __int64 v13; // rcx
  __int128 v14; // xmm4
  __int128 v15; // xmm3
  __int128 v16; // xmm2
  _OWORD *v17; // rax
  bool v18; // cl
  int v19; // eax
  int ViewRectFromPositionAndSizeRequest; // ebx
  __int64 v21; // rdx
  char v23; // di
  float v24; // xmm3_4
  float v25; // xmm7_4
  __int32 v26; // xmm8_4
  unsigned __int32 v27; // xmm9_4
  unsigned __int32 v28; // xmm10_4
  __m128i v29; // xmm6
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // r9
  __int64 v37; // rcx
  __int64 v38; // r9
  unsigned int v39; // eax
  __int128 v40; // xmm0
  int v41; // [rsp+38h] [rbp-D0h]
  unsigned int v42; // [rsp+68h] [rbp-A0h] BYREF
  char v43; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v44[7]; // [rsp+71h] [rbp-97h] BYREF
  __m128 v45; // [rsp+78h] [rbp-90h] BYREF
  __int128 v46; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v47[2]; // [rsp+98h] [rbp-70h] BYREF
  int v48[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-50h] BYREF
  __m128i v50; // [rsp+C8h] [rbp-40h]
  __int128 v51; // [rsp+D8h] [rbp-30h]
  __int128 v52; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v53[68]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v54; // [rsp+148h] [rbp+40h] BYREF
  __int128 v55; // [rsp+158h] [rbp+50h]
  __int128 v56; // [rsp+168h] [rbp+60h]
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v42 = a3;
  if ( !KeyboardHosting::TabTipAdapterPolicy::IgnoreInputAppRequestedShow(
          (RTL_SRWLOCK *)a1,
          a3,
          (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2) )
  {
    if ( !KeyboardHosting::TabTipAdapterPolicy::CheckRequest(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2) )
    {
      *a7 = 0;
      LODWORD(v46) = *(_DWORD *)(a2 + 24);
      LODWORD(v47[0]) = *(_DWORD *)a2;
      TouchKeyboardExperienceTelemetryLogger::InputAppRequestedShowBadRequest<unsigned int,unsigned int,unsigned int &,unsigned int &>(
        v47,
        (int *)&v46,
        (int *)(a2 + 8),
        (int *)(a2 + 4));
      return 0LL;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_WorkAreaChangeHandling>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_WorkAreaChangeHandling>::GetImpl'::`2'::impl,
      1u,
      v9,
      v10);
    v47[0] = *(_QWORD *)(a1 + 280);
    v11 = (__int128 *)(a1 + 328);
    *(_QWORD *)&v46 = *(_QWORD *)(a1 + 328);
    v45.m128_u64[0] = *(_QWORD *)(a1 + 232);
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest<unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,unsigned __int64,Windows::Foundation::Rect &,enum DEVICE_SCALE_FACTOR &,bool &,bool &>(
      (unsigned __int64 *)&v45,
      (struct Windows::Foundation::Rect *)(a1 + 240),
      (unsigned int *)(a1 + 272),
      (unsigned __int64 *)&v46,
      (struct Windows::Foundation::Rect *)(a1 + 336),
      (unsigned int *)(a1 + 368),
      v47,
      (struct Windows::Foundation::Rect *)(a1 + 288),
      (unsigned int *)(a1 + 320),
      (bool *)(a1 + 500),
      (bool *)(a1 + 448));
    v12 = (_OWORD *)(a1 + (*(_BYTE *)(a1 + 500) != 0 ? 280LL : 232LL));
    *(_OWORD *)v53 = *v12;
    *(_OWORD *)&v53[16] = v12[1];
    *(_OWORD *)&v53[32] = v12[2];
    v13 = -(__int64)(*(_BYTE *)(a1 + 448) != 0) & 0xFFFFFFFFFFFFFFA0uLL;
    v54 = *(_OWORD *)(v13 + a1 + 328);
    v14 = v54;
    v55 = *(_OWORD *)(v13 + a1 + 344);
    v15 = v55;
    v56 = *(_OWORD *)(v13 + a1 + 360);
    v16 = v56;
    v17 = *(_OWORD **)(a1 + 224);
    v17[1] = *v12;
    v17[2] = v12[1];
    v17[3] = v12[2];
    v17[4] = v14;
    v17[5] = v15;
    v17[6] = v16;
    v17[7] = *(_OWORD *)(a1 + 328);
    v17[8] = *(_OWORD *)(a1 + 344);
    v17[9] = *(_OWORD *)(a1 + 360);
    v52 = 0LL;
    v18 = *(_BYTE *)(a1 + 509) && *(_DWORD *)a2 == 2 && *(_DWORD *)(a2 + 24) == 6;
    v19 = *(_DWORD *)(a1 + 208);
    *(_OWORD *)v48 = *(_OWORD *)a2;
    v49 = *(_OWORD *)(a2 + 16);
    v50 = *(__m128i *)(a2 + 32);
    v51 = *(_OWORD *)(a2 + 48);
    LOBYTE(v41) = v18;
    ViewRectFromPositionAndSizeRequest = KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
                                           *(_QWORD *)(a1 + 224),
                                           a1 + 144,
                                           a1 + 176,
                                           a1 + 192,
                                           v48,
                                           v19,
                                           v41,
                                           &v52,
                                           &v43,
                                           v44);
    if ( ViewRectFromPositionAndSizeRequest < 0 )
    {
      v21 = 574LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)ViewRectFromPositionAndSizeRequest);
      return (unsigned int)ViewRectFromPositionAndSizeRequest;
    }
    v23 = *(_BYTE *)(a2 + 40);
    if ( v23 || *(_BYTE *)(a2 + 41) )
    {
      v11 = &v54;
      if ( *(_DWORD *)a2 == 1 )
        v11 = (__int128 *)v53;
    }
    *(_OWORD *)v48 = *v11;
    v49 = v11[1];
    v50 = (__m128i)v11[2];
    v24 = (float)_mm_cvtsi128_si32(_mm_srli_si128(v50, 8));
    v45.m128_f32[0] = (float)(v24 * *(float *)&v52) / 100.0;
    v45.m128_f32[1] = (float)(v24 * *((float *)&v52 + 1)) / 100.0;
    v45.m128_f32[2] = (float)(v24 * *((float *)&v52 + 2)) / 100.0;
    v45.m128_f32[3] = (float)(v24 * *((float *)&v52 + 3)) / 100.0;
    v25 = v45.m128_f32[0];
    *(float *)&v46 = v45.m128_f32[0];
    v26 = _mm_shuffle_ps(v45, v45, 85).m128_u32[0];
    DWORD1(v46) = v26;
    v27 = _mm_shuffle_ps(v45, v45, 170).m128_u32[0];
    DWORD2(v46) = v27;
    v28 = _mm_shuffle_ps(v45, v45, 255).m128_u32[0];
    HIDWORD(v46) = v28;
    *a7 = 1;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v45, (RTL_SRWLOCK *)(a1 + 440));
    v53[0] = 1;
    *(_OWORD *)&v53[4] = *(_OWORD *)a2;
    *(_OWORD *)&v53[20] = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v53[36] = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v53[52] = *(_OWORD *)(a2 + 48);
    v29 = *(__m128i *)&v53[52];
    v30 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Try_emplace<unsigned int const &,>(
                       (float *)(a1 + 376),
                       (__int64)v47,
                       (unsigned __int8 *)&v42);
    *(_OWORD *)(v30 + 20) = *(_OWORD *)v53;
    *(_OWORD *)(v30 + 36) = *(_OWORD *)&v53[16];
    *(_OWORD *)(v30 + 52) = *(_OWORD *)&v53[32];
    *(_OWORD *)(v30 + 68) = *(_OWORD *)&v53[48];
    *(_DWORD *)(v30 + 84) = _mm_cvtsi128_si32(_mm_srli_si128(v29, 12));
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>((RTL_SRWLOCK **)&v45);
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
      1u,
      v31,
      v32);
    if ( ShouldLoadLastFloatingPosition(a2)
      && (v34 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                             (__int64 *)(a1 + 480),
                             (__int64)&v45,
                             &v42,
                             v33),
          *(_DWORD *)(v34 + 32) = v27,
          *(_DWORD *)(v34 + 36) = v28,
          KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            v42),
          *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  (__int64 *)(a1 + 464),
                                  (__int64)&v45,
                                  &v42)
                   + 40LL)) )
    {
      KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        (KeyboardHosting::TabTipAdapterPolicy *)a1,
        (struct Windows::Foundation::Point *)v47,
        v42,
        v35);
      *(_QWORD *)&v52 = v47[0];
      *((_QWORD *)&v52 + 1) = __PAIR64__(v28, v27);
      KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v52, (int *)&v49 + 2, &v45);
      if ( v23 )
      {
        v25 = v45.m128_f32[0];
        LODWORD(v46) = v45.m128_i32[0];
      }
      if ( *(_BYTE *)(a2 + 41) )
      {
        v26 = v45.m128_i32[1];
        DWORD1(v46) = v45.m128_i32[1];
      }
    }
    else if ( ShouldSaveLastFloatingPosition(a2) )
    {
      v37 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                         (__int64 *)(a1 + 480),
                         (__int64)&v45,
                         &v42,
                         v36);
      *(_DWORD *)(v37 + 32) = v27;
      *(_DWORD *)(v37 + 36) = v28;
      v47[0] = __PAIR64__(v26, LODWORD(v25));
      ViewRectFromPositionAndSizeRequest = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
                                             (KeyboardHosting::TabTipAdapterPolicy *)a1,
                                             (const struct Windows::Foundation::Point *)v47,
                                             v42,
                                             v38);
      if ( ViewRectFromPositionAndSizeRequest < 0 )
      {
        v21 = 619LL;
        goto LABEL_11;
      }
    }
    if ( *(_DWORD *)a2 == 2 )
    {
      v39 = v42;
      if ( v42 == *(_DWORD *)(a1 + 496) && *(_BYTE *)(a1 + 460) && (v23 || *(_BYTE *)(a2 + 41)) )
      {
        *(_QWORD *)&v46 = *(_QWORD *)(a1 + 452);
      }
      else if ( !v43 )
      {
        *(float *)(a1 + 452) = v25;
        *(_DWORD *)(a1 + 456) = v26;
        *(_BYTE *)(a1 + 460) = 1;
        *(_DWORD *)(a1 + 496) = v39;
      }
    }
    v40 = v46;
    *a6 = v46;
    *(_OWORD *)(a1 + 596) = v40;
    return 0LL;
  }
  *a7 = 0;
  return 0LL;
}
