/*
 * XREFs of ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x180476080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B898C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1800C1340 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18011F150 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ @ 0x18011F52C (-IsAnyViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180164990 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion@@@details@w.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180179958 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x18022B92C (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18022FC80 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18045D848 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z @ 0x180462D8C (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@QEAAJI_N@Z.c)
 *     ??0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z @ 0x18046EECC (--0PendingShowHideViewData@TabTipAdapter@KeyboardHosting@@QEAA@AEBU012@@Z.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1805F4A0C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnPrimaryViewHidingResponse(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewHidingResponseEventArgs *a3)
{
  _DWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  IhmNotification *v20; // rcx
  KeyboardHosting::TabTipAdapterPolicy *v21; // rbx
  int ShellState; // eax
  __int64 v23; // rdx
  char v26; // [rsp+30h] [rbp-59h] BYREF
  char v27; // [rsp+31h] [rbp-58h] BYREF
  _BYTE v28[6]; // [rsp+32h] [rbp-57h] BYREF
  __int64 v29; // [rsp+38h] [rbp-51h] BYREF
  __int64 v30[2]; // [rsp+40h] [rbp-49h] BYREF
  _BYTE v31[64]; // [rsp+50h] [rbp-39h] BYREF
  unsigned int v32; // [rsp+90h] [rbp+7h]
  char v33; // [rsp+A8h] [rbp+1Fh]
  bool v34; // [rsp+A9h] [rbp+20h]
  _BYTE v35[32]; // [rsp+B0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v5 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                   (__int64)this,
                   _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 5u )
  {
    v29 = (__int64)"TabTipAdapter::OnPrimaryViewHidingResponse";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (__int64)v5,
      byte_1806BA3BA,
      v6,
      v7,
      (const wchar_t **)&v29);
  }
  if ( *((_QWORD *)this + 72) )
  {
    KeyboardHosting::TabTipAdapter::PendingShowHideViewData::PendingShowHideViewData(
      (KeyboardHosting::TabTipAdapter::PendingShowHideViewData *)v31,
      *(const struct KeyboardHosting::TabTipAdapter::PendingShowHideViewData **)(*((_QWORD *)this + 69)
                                                                               + 8
                                                                               * (*((_QWORD *)this + 71) & (*((_QWORD *)this + 70) - 1LL))));
    if ( v33 )
    {
      v9 = *((_QWORD *)this + 72);
      while ( v9 )
      {
        std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*((_QWORD *)this + 69)
                                                      + 8 * (*((_QWORD *)this + 71) & (*((_QWORD *)this + 70) - 1LL))) + 96LL);
        v9 = *((_QWORD *)this + 72) - 1LL;
        *((_QWORD *)this + 72) = v9;
        if ( v9 )
          ++*((_QWORD *)this + 71);
        else
          *((_QWORD *)this + 71) = 0LL;
      }
      v8 = -2147418113;
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x43F,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_32;
    }
    v26 = 0;
    (*(void (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerPrimaryViewHidingResponseEventArgs *, char *))(*(_QWORD *)a3 + 48LL))(
      a3,
      &v26);
    if ( !v26 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::GetImpl'::`2'::impl,
        1u,
        v10,
        v11);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_WindowTranslatesWithSipMotion>::GetImpl'::`2'::impl,
        1u,
        v12,
        v13);
      v8 = TouchKeyboardExperienceManager::OnInputAppRequestedHide(
             *((TouchKeyboardExperienceManager **)this + 8),
             v32,
             v34);
      if ( v8 )
      {
        TouchKeyboardExperienceManager::FireInputPaneHidingEvent(*((TouchKeyboardExperienceManager **)this + 8), v32, 0);
LABEL_32:
        std::vector<Geometry::CRect>::_Tidy((__int64)v35);
        return v8;
      }
      if ( !KeyboardHosting::TabTipAdapterPolicy::IsAnyViewShown(*((RTL_SRWLOCK **)this + 14)) )
      {
        v15 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 0LL, v14);
        v8 = v15;
        if ( v15 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x460,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_32;
        }
      }
LABEL_28:
      std::vector<Geometry::CRect>::_Tidy(*(_QWORD *)(*((_QWORD *)this + 69)
                                                    + 8 * (*((_QWORD *)this + 71) & (*((_QWORD *)this + 70) - 1LL))) + 96LL);
      if ( (*((_QWORD *)this + 72))-- == 1LL )
        *((_QWORD *)this + 71) = 0LL;
      else
        ++*((_QWORD *)this + 71);
      v8 = 0;
      goto LABEL_32;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
      1u,
      v10,
      v11);
    v17 = (_DWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                      v16,
                      _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)[1];
    if ( *v17 > 5u )
    {
      v30[0] = (__int64)"TabTipAdapter::OnPrimaryViewHidingResponse - HideCancelled";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
        (__int64)v17,
        byte_1806BA3BA,
        v18,
        v19,
        (const wchar_t **)v30);
    }
    v20 = (IhmNotification *)*((_QWORD *)this + 8);
    if ( *((_DWORD *)this + 132) == *((_DWORD *)v20 + 191) )
    {
      LOBYTE(v20) = 1;
      IhmNotification::SendKeyboardSetVisible(v20, 0, v18);
    }
    v29 = 0LL;
    v21 = (KeyboardHosting::TabTipAdapterPolicy *)*((_QWORD *)this + 14);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
    ShellState = KeyboardHosting::TabTipAdapterPolicy::GetShellState(v21, 0LL, v28, (__int64)&v27, v30, &v29);
    v8 = ShellState;
    if ( ShellState >= 0 )
    {
      ShellState = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 1) + 32LL))(
                     (char *)this + 8,
                     LODWORD(v30[0]),
                     0LL);
      v8 = ShellState;
      if ( ShellState >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
        goto LABEL_28;
      }
      v23 = 1138LL;
    }
    else
    {
      v23 = 1137LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)ShellState);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v29);
    goto LABEL_32;
  }
  v8 = -2147418113;
  wil::details::in1diag3::Log_Hr(
    retaddr,
    (void *)0x434,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)0x8000FFFFLL);
  return v8;
}
