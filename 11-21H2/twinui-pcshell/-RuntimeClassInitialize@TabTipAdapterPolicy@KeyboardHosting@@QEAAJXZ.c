/*
 * XREFs of ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x1800B9828
 * Callers:
 *     ??$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTipAdapterPolicy@KeyboardHosting@@@Z @ 0x1800B9760 (--$MakeAndInitialize@VTabTipAdapterPolicy@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180064078 (--1-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_consta.c)
 *     ?GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUHWND__@@@Z @ 0x18008C3A8 (-GetAppIdFromWindow@TouchKeyboardExperienceManager@@SA-AV-$unique_any_t@V-$unique_storage@U-$res.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPositionAndSizeOptionsProvider@KeyboardHosting@@@Z @ 0x1800B994C (--$MakeAndInitialize@VPositionAndSizeOptionsProvider@KeyboardHosting@@V12@$$V@Details@WRL@Micros.c)
 *     ??0ViewRectProvider@KeyboardHosting@@QEAA@XZ @ 0x1800B9B0C (--0ViewRectProvider@KeyboardHosting@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheForegroundAppId@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9BA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheForegroundAppId@@@details@wil@@QEAAX.c)
 *     ?InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1800B9DBC (-InitializeMonitors@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ @ 0x1800E5220 (-UpdatePinState@TabTipAdapterPolicy@KeyboardHosting@@AEAAJXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAKXZ @ 0x18017B88C (-InternalRelease@-$ComPtr@VPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@IEAAK.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18018FE0C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::RuntimeClassInitialize(
        KeyboardHosting::TabTipAdapterPolicy *this)
{
  char *v2; // rbx
  int v3; // ebx
  _WORD *v4; // rax
  __int64 v5; // rax
  volatile int *v6; // rdx
  __int64 v7; // r9
  int updated; // eax
  __int64 v9; // rdx
  HWND ForegroundWindow; // rax
  __int64 v11; // r8
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  _WORD *v15; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 216;
  Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease((char *)this + 216);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardHosting::PositionAndSizeOptionsProvider,KeyboardHosting::PositionAndSizeOptionsProvider,>(v2);
  if ( v3 < 0 )
  {
    v13 = 30LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease((char *)this + 224);
  *((_QWORD *)this + 28) = 0LL;
  v4 = operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v4;
  if ( !v4 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
    v3 = -2147024882;
    v13 = 31LL;
    goto LABEL_13;
  }
  v5 = KeyboardHosting::ViewRectProvider::ViewRectProvider((KeyboardHosting::ViewRectProvider *)v4);
  v7 = v5;
  v15 = (_WORD *)v5;
  if ( v5 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v5 + 12), v6);
  *((_QWORD *)this + 28) = v7;
  Microsoft::WRL::ComPtr<KeyboardHosting::PositionAndSizeOptionsProvider>::InternalRelease(&v15);
  v3 = KeyboardHosting::TabTipAdapterPolicy::InitializeMonitors(this);
  if ( v3 < 0 )
  {
    v13 = 32LL;
    goto LABEL_13;
  }
  updated = KeyboardHosting::TabTipAdapterPolicy::UpdatePinState(this);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x21,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
  LOBYTE(v9) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheForegroundAppId>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_CacheForegroundAppId>::GetImpl'::`2'::impl,
    v9);
  ForegroundWindow = GetForegroundWindow();
  TouchKeyboardExperienceManager::GetAppIdFromWindow((HWND)&v15, ForegroundWindow);
  v11 = -1LL;
  do
    ++v11;
  while ( v15[v11] );
  std::wstring::assign((char *)this + 624);
  wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>((void **)&v15);
  return 0LL;
}
