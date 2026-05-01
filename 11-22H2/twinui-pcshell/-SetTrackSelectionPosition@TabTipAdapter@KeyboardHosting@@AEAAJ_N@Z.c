/*
 * XREFs of ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x180185C88
 * Callers:
 *     ?OnCoreKeyboardSpeechProcessorActiveChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerSpeechProcessorActiveChangedEventArgs@45678@@Z @ 0x1801859B0 (-OnCoreKeyboardSpeechProcessorActiveChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboar.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180185AF4 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerHardwareKeyboardTextIntelligenceEnabledChangedEventArgs@45678@@Z @ 0x180185BC0 (-OnCoreKeyboardHardwareKeyboardTextIntelligenceEnabled@TabTipAdapter@KeyboardHosting@@AEAAJPEAUI.c)
 *     ?OnAccessibilityKeyboardRequestHide@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180525544 (-OnAccessibilityKeyboardRequestHide@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?OnAccessibilityKeyboardRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1805255E4 (-OnAccessibilityKeyboardRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedHideEventArgs@45678@@Z @ 0x180526030 (-OnInputAppRequestedHide@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x180526850 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 *     ?OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerPrimaryViewHidingResponseEventArgs@45678@@Z @ 0x180527770 (-OnPrimaryViewHidingResponse@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@T.c)
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180528520 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x180528814 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 *     ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18052906C (-ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Interna.c)
 *     ?ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV?$ComPtr@U?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@789UI@Windows@@@Z @ 0x180529200 (-ProcessShowRequestWithStoredData@TabTipAdapter@KeyboardHosting@@AEAAJV-$ComPtr@U-$IVectorView@U.c)
 * Callees:
 *     ??$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1800ACE38 (--$wnf_query_nothrow@_N@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_N1PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x1801334E0 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbSh1@@@details@wil@@QEAA_NXZ @ 0x180185DA0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbSh1@@@details@wil@@QEAA_NX.c)
 *     ?InvokeIsAnyViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NXZ @ 0x180185EA8 (-InvokeIsAnyViewShown@TabTipAdapter@KeyboardHosting@@AEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@wil@@QEAA_NXZ @ 0x18052E914 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MTestAbShMUS@@@details@wil@@QEAA_.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(
        KeyboardHosting::TabTipAdapter *this,
        char a2)
{
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v12; // [rsp+40h] [rbp+8h] BYREF
  char v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbSh1>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MTestAbSh1>::GetImpl'::`2'::impl) )
  {
    v13 = 0;
    wil::wnf_query_nothrow<bool>((__int64)&WNF_SHEL_SHELLHANDWRITING_ENABLED, &v12, (__int64)&v13, v7);
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MTestAbShMUS>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MTestAbShMUS>::GetImpl'::`2'::impl)
      || IsActiveSessionCountLimited() )
    {
      v4 = v13 != 0;
    }
  }
  if ( a2
    || *((_BYTE *)this + 434)
    || *((_BYTE *)this + 435)
    || *((_BYTE *)this + 436)
    || KeyboardHosting::TabTipAdapter::InvokeIsAnyViewShown(this)
    || *((_BYTE *)this + 432)
    || v4 )
  {
    v4 = 1;
  }
  if ( v4 != *((_BYTE *)this + 437) )
  {
    LOBYTE(v6) = v4;
    LOBYTE(v5) = 1;
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 4) + 608LL))(
           *((_QWORD *)this + 4),
           v5,
           v6);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6BB,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    *((_BYTE *)this + 437) = v4;
  }
  return 0LL;
}
