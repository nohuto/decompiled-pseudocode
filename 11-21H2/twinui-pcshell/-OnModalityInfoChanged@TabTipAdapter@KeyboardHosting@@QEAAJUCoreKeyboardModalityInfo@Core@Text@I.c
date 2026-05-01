/*
 * XREFs of ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x18022F548
 * Callers:
 *     ?HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z @ 0x18022E902 (-HandleTouchEvent@TouchKeyboardExperienceManager@@AEAAXAEAY0CA@$$CBE@Z.c)
 * Callees:
 *     ?ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180065890 (-ActivateInputAppOnFirstFocus@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x18008E250 (-SetShellPreference@TabTipAdapter@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180095DF0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BB7C0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement@@@det.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800BE054 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation@@@details@wi.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18016400C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke@@@details@wil@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDeferredFocusNotification@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801B18DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDeferredFocusNotification@@@details.c)
 *     ?GetModalityString@TabTipAdapter@KeyboardHosting@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@Z @ 0x18022F4C0 (-GetModalityString@TabTipAdapter@KeyboardHosting@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x18022FFA0 (-HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityI.c)
 *     ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180477C4C (-ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnModalityInfoChanged(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // r14d
  char v12; // al
  int Focus; // ebx
  __int64 v14; // rdx
  const WCHAR *ModalityString; // rax
  unsigned int v17; // r8d
  HSTRING v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // [rsp+20h] [rbp-49h] BYREF
  const WCHAR *v24; // [rsp+28h] [rbp-41h] BYREF
  __int64 v25; // [rsp+30h] [rbp-39h] BYREF
  int v26; // [rsp+38h] [rbp-31h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-29h] BYREF
  HSTRING v28; // [rsp+58h] [rbp-11h]
  _BYTE v29[24]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v30; // [rsp+78h] [rbp+Fh]
  _QWORD v31[4]; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_TryShowApiKeyboardInvocation>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_CobaltInputAppActivationImprovement>::GetImpl'::`2'::impl,
    1u,
    v6,
    v7);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDeferredFocusNotification>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_RemoveDeferredFocusNotification>::GetImpl'::`2'::impl,
    1u,
    v8,
    v9);
  v11 = *a2;
  if ( *a2 )
  {
    v12 = *(_BYTE *)(a1 + 532);
    *(_BYTE *)(a1 + 532) = 1;
    if ( !v12 )
    {
      Focus = KeyboardHosting::TabTipAdapter::ActivateInputAppOnFirstFocus((KeyboardHosting::TabTipAdapter *)a1);
      if ( Focus < 0 )
      {
        v14 = 3179LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)(unsigned int)Focus);
        return (unsigned int)Focus;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 536) != v11 )
  {
    ModalityString = (const WCHAR *)KeyboardHosting::TabTipAdapter::GetModalityString(v10, v31, v11);
    if ( *((_QWORD *)ModalityString + 3) >= 8uLL )
      ModalityString = *(const WCHAR **)ModalityString;
    v24 = ModalityString;
    v18 = *(HSTRING *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v29, &v24, v17) + 24);
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"LastInputModality", 0x12u, 0x11u);
    v19 = KeyboardHosting::TabTipAdapter::SetShellPreference((KeyboardHosting::TabTipAdapter *)a1, v28, v18);
    if ( v19 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC71,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v19);
    v28 = 0LL;
    v30 = 0LL;
    std::wstring::_Tidy_deallocate((__int64)v31);
    _InterlockedExchange((volatile __int32 *)(a1 + 536), v11);
  }
  v20 = *(_QWORD *)(a1 + 112);
  if ( v20
    || (wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC77,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
          (const char *)0x80070490LL),
        (v20 = *(_QWORD *)(a1 + 112)) != 0) )
  {
    v25 = *(_QWORD *)a2;
    v26 = a2[2];
    Focus = KeyboardHosting::TabTipAdapterPolicy::HandleInputModalityInfoChanged(v20, &v25, &v23);
    if ( Focus < 0 )
    {
      v14 = 3195LL;
      goto LABEL_5;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_KeyboardButtonAlwaysInvoke>::GetImpl'::`2'::impl,
      1u,
      v21,
      v22);
    if ( v23 == 2 )
    {
      Focus = KeyboardHosting::TabTipAdapter::ProcessChangeRequest(a1, 2LL, *(unsigned int *)(a1 + 528));
      if ( Focus < 0 )
      {
        v14 = 3201LL;
        goto LABEL_5;
      }
    }
  }
  return 0LL;
}
