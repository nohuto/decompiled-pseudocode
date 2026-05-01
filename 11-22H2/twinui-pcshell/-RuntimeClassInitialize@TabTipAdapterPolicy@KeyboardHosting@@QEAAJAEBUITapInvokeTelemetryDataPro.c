/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJAEBUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1800AACDC
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@AEAUITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@Z @ 0x1800AAC04 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@AEAUITapInvokeTelemetryDataProvid.c)
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$T@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@$$QEA$$T@Z @ 0x180508A4C (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$T@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1800A74F4 (-UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x1800A9C1C (--0ViewRectProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x1800AA9C0 (--$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Micros.c)
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1800AADE8 (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x1800C3C34 (-GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x1801423A0 (-InternalRelease@-$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAK.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider *a2)
{
  KeyboardHosting::PositionAndSizeOptionsProvider **v3; // rbx
  int v4; // ebx
  KeyboardHosting::ViewRectProvider *v5; // rax
  KeyboardHosting::ViewRectProvider *v6; // rax
  volatile int *v7; // rdx
  KeyboardHosting::ViewRectProvider *v8; // r8
  int updated; // eax
  HWND ForegroundWindow; // rax
  __int64 v11; // r8
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF
  KeyboardHosting::ViewRectProvider *v17; // [rsp+50h] [rbp+18h] BYREF

  v3 = (KeyboardHosting::PositionAndSizeOptionsProvider **)((char *)this + 216);
  Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease((char *)this + 216);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::PositionAndSizeOptionsProvider,KeyboardHosting::PositionAndSizeOptionsProvider,>(v3);
  if ( v4 < 0 )
  {
    v13 = 146LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)v4,
      v14);
    return (unsigned int)v4;
  }
  Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease((char *)this + 224);
  *((_QWORD *)this + 28) = 0LL;
  v5 = (KeyboardHosting::ViewRectProvider *)operator new(0x118uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v17);
    v4 = -2147024882;
    v13 = 147LL;
    goto LABEL_14;
  }
  v6 = KeyboardHosting::ViewRectProvider::ViewRectProvider(v5);
  v8 = v6;
  v17 = v6;
  if ( v6 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((KeyboardHosting::ViewRectProvider *)((char *)v6 + 12), v7);
  *((_QWORD *)this + 28) = v8;
  Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease(&v17);
  v4 = KeyboardHosting::TabTipAdapterPolicy::InitializeMonitors(this);
  if ( v4 < 0 )
  {
    v13 = 148LL;
    goto LABEL_14;
  }
  updated = KeyboardHosting::TabTipAdapterPolicy::UpdatePinState(this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x95,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated,
      v14);
  ForegroundWindow = GetForegroundWindow();
  TouchKeyboardExperienceManager::GetAppIdFromWindow(&pv, ForegroundWindow);
  v11 = -1LL;
  do
    ++v11;
  while ( *((_WORD *)pv + v11) );
  std::wstring::assign((char *)this + 664, pv);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) )
    winrt::Windows::Foundation::IUnknown::operator=((KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 616));
  if ( pv )
    CoTaskMemFree(pv);
  return 0LL;
}
