/*
 * XREFs of ?NotifyOcclusionToCoreInputViewManager@TabTipAdapter@KeyboardHosting@@QEAAJIAEBUtagRECT@@@Z @ 0x180525280
 * Callers:
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 * Callees:
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1802DD43C (-GetOcclusionsVectorView@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@AEAV-$ComPtr@U-$IVect.c)
 *     ??$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@PEBGAEAURect@Foundation@6@AEAU9Foundation@6@AEAU9Foundation@6@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4CoreInputViewOcclusionKind@2ViewManagement@56@$$QEAPEBGAEAURect@Foundation@6@33@Z @ 0x18051DE08 (--$CoreInputViewOcclusionChanged@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@AEAW4C.c)
 *     ?GetFirstViewTypeIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180523084 (-GetFirstViewTypeIfExists@TabTipAdapter@KeyboardHosting@@AEAA_NIAEAW4CoreKeyboardViewType@Core@T.c)
 *     ?GetOcclusionKind@TabTipAdapter@KeyboardHosting@@QEAA?AW4CoreInputViewOcclusionKind@Core@ViewManagement@UI@Windows@@I@Z @ 0x18052396C (-GetOcclusionKind@TabTipAdapter@KeyboardHosting@@QEAA-AW4CoreInputViewOcclusionKind@Core@ViewMan.c)
 *     ?InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1805248FC (-InvokeGetForegroundAppId@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::NotifyOcclusionToCoreInputViewManager(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        const struct tagRECT *a3)
{
  unsigned int v4; // esi
  int OcclusionsVectorView; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  HSTRING v9; // rbx
  __int128 *v10; // rax
  unsigned int v12; // [rsp+30h] [rbp-39h] BYREF
  unsigned int OcclusionKind; // [rsp+34h] [rbp-35h] BYREF
  __int64 v14; // [rsp+38h] [rbp-31h] BYREF
  __int128 v15; // [rsp+40h] [rbp-29h] BYREF
  __m128i si128; // [rsp+50h] [rbp-19h]
  _OWORD v17[2]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v18; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v4 = a2;
  OcclusionKind = KeyboardHosting::TabTipAdapter::GetOcclusionKind((__int64)this, a2);
  *(float *)v17 = (float)a3->left;
  *((float *)v17 + 1) = (float)a3->top;
  *((float *)v17 + 2) = (float)(a3->right - a3->left);
  *((float *)v17 + 3) = (float)(a3->bottom - a3->top);
  v18 = v17[0];
  v14 = 0LL;
  OcclusionsVectorView = KeyboardHosting::TabTipAdapter::GetOcclusionsVectorView((__int64)this, v4, &a3->left, &v14);
  v7 = OcclusionsVectorView;
  if ( OcclusionsVectorView < 0 )
  {
    v8 = 1899LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)OcclusionsVectorView);
    goto LABEL_15;
  }
  OcclusionsVectorView = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 72LL))(
                           *((_QWORD *)this + 6),
                           v14);
  v7 = OcclusionsVectorView;
  if ( OcclusionsVectorView < 0 )
  {
    v8 = 1900LL;
    goto LABEL_5;
  }
  v12 = 11;
  if ( !KeyboardHosting::TabTipAdapter::GetFirstViewTypeIfExists(
          this,
          v4,
          (enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *)&v12) )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x772,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)0x8000FFFFLL);
  *(_QWORD *)&v15 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( v12 != 1 )
  {
    v9 = KeyboardHosting::TabTipAdapter::InvokeGetForegroundAppId((__int64)this, (HSTRING)v17);
    if ( &v15 != (__int128 *)v9 )
    {
      std::wstring::_Tidy_deallocate((__int64)&v15);
      v15 = *(_OWORD *)v9;
      si128 = *((__m128i *)v9 + 1);
      *((_QWORD *)v9 + 2) = 0LL;
      *((_QWORD *)v9 + 3) = 7LL;
      *(_WORD *)v9 = 0;
    }
    std::wstring::_Tidy_deallocate((__int64)v17);
    v10 = &v15;
    if ( si128.m128i_i64[1] >= 8uLL )
      v10 = (__int128 *)v15;
    *(_QWORD *)&v17[0] = v10;
    TouchKeyboardExperienceTelemetryLogger::CoreInputViewOcclusionChanged<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,enum Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind &,unsigned short const *,Windows::Foundation::Rect &,Windows::Foundation::Rect &,Windows::Foundation::Rect &>(
      &v12,
      &OcclusionKind,
      v17,
      (__int64)&v18,
      (__int64)this + 440,
      (__int64)this + 456);
  }
  v7 = 0;
  std::wstring::_Tidy_deallocate((__int64)&v15);
LABEL_15:
  Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v14);
  return v7;
}
