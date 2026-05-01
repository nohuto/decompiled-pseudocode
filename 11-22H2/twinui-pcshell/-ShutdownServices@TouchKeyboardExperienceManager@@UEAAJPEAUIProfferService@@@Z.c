/*
 * XREFs of ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x1800A3B50
 * Callers:
 *     <none>
 * Callees:
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x180098A8C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800A5C6C (-UnsubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1?UnhookWinEvent@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWINEVENTHOOK__@@@Z @ 0x1800A6E3C (-reset@-$unique_storage@U-$resource_policy@PEAUHWINEVENTHOOK__@@P6AHPEAU1@@Z$1-UnhookWinEvent@@Y.c)
 *     ??4?$com_ptr@UTabTipAdapter@KeyboardHosting@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800AB70C (--4-$com_ptr@UTabTipAdapter@KeyboardHosting@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800C386C (-Provider@TouchKeyboardExperienceTraceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x180185330 (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ??1InputAppPreloader@KeyboardHosting@@QEAA@XZ @ 0x1801B32E0 (--1InputAppPreloader@KeyboardHosting@@QEAA@XZ.c)
 *     ?is_running@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x1801BEAF4 (-is_running@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?complete@?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ @ 0x18020C3B4 (-complete@-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803BAF64 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?close@?$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAAXXZ @ 0x18051CC14 (-close@-$test_data_control@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@details@tip@@@std@@XZ @ 0x18051CD38 (-ensure_data@-$tip_test@U_tip_InputAppActivationTest@KeyboardHostingTipTests@@@tip@@AEBAAEAV-$sh.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::ShutdownServices(
        TouchKeyboardExperienceManager *this,
        struct IProfferService *a2)
{
  const struct _tlgProvider_t *v3; // rcx
  int v4; // ecx
  int v5; // r9d
  KeyboardHosting::InputAppPreloader *v6; // rdi
  KeyboardHosting::TabTipAdapter *v7; // rcx
  char *v8; // rdi
  __int64 v9; // rcx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  std::_Ref_count_base *v13; // rax
  __int64 v14; // rax
  __int64 v16; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v17; // [rsp+38h] [rbp-10h]
  __int64 v18; // [rsp+50h] [rbp+8h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF

  v3 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v3 > 5u && (unsigned __int8)tlgKeywordOn(v3, 16LL) )
  {
    v19 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v4,
      (unsigned int)&unk_18085DC61,
      0,
      v5,
      (__int64)&v19);
  }
  v6 = (KeyboardHosting::InputAppPreloader *)*((_QWORD *)this + 116);
  *((_QWORD *)this + 116) = 0LL;
  if ( v6 )
  {
    KeyboardHosting::InputAppPreloader::~InputAppPreloader(v6);
    operator delete(v6, 0x28uLL);
  }
  wil::details::unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>::reset(
    (char *)this + 584,
    0LL);
  wil::details::unique_storage<wil::details::resource_policy<HWINEVENTHOOK__ *,int (*)(HWINEVENTHOOK__ *),&int UnhookWinEvent(HWINEVENTHOOK__ *),wistd::integral_constant<unsigned __int64,0>,HWINEVENTHOOK__ *,HWINEVENTHOOK__ *,0,std::nullptr_t>>::reset(
    (char *)this + 576,
    0LL);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl) )
    TouchKeyboardExperienceManager::UnsubscribeTouchKeyboardWnfNotifications((TouchKeyboardExperienceManager *)((char *)this - 48));
  v7 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 67);
  if ( v7 )
  {
    KeyboardHosting::TabTipAdapter::UnInitialize(v7);
    v18 = 0LL;
    winrt::com_ptr<KeyboardHosting::TabTipAdapter>::operator=((char *)this + 536, &v18);
    if ( v18 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v18);
  }
  *((_QWORD *)this + 91) = 0LL;
  v8 = (char *)this + 2128;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  v9 = *((_QWORD *)this + 266);
  if ( v9 && (unsigned __int8)tip::details::test_common_data<0>::is_running(v9 + 8) )
  {
    v10 = (__int64 *)tip::tip_test<KeyboardHostingTipTests::_tip_InputAppActivationTest>::ensure_data((char *)this + 2128);
    v11 = v10[1];
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v12 = *v10;
    v13 = (std::_Ref_count_base *)v10[1];
    v16 = v12;
    v17 = v13;
    tip::details::test_common_data<0>::begin_update(v12 + 8);
    v14 = v12 + 199;
    if ( !v12 )
      v14 = 23LL;
    *(_BYTE *)v14 = 1;
    tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppActivationTest>::close(&v16);
    if ( v17 )
      std::_Ref_count_base::_Decref(v17);
    tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::complete(v8);
  }
  return 0LL;
}
