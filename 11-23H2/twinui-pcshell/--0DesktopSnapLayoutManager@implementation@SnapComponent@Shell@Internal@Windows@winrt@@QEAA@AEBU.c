/*
 * XREFs of ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBUDisplayRegion@WindowManagement@UI@56@@Z @ 0x180682750
 * Callers:
 *     ?CreateInstance@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@34567@@impl@winrt@@UEAAHPEAX0PEAPEAX1@Z @ 0x1806832F0 (-CreateInstance@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@I.c)
 *     ?GetForDisplayRegion@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBUDisplayRegion@WindowManagement@UI@67@@Z @ 0x180683770 (-GetForDisplayRegion@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Window.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801451A8 (--4-$com_ptr@UITouchSwipe@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??$create_instance@UIServiceProvider@@@winrt@@YA?A_PAEBUguid@0@IPEAX@Z @ 0x1801A2090 (--$create_instance@UIServiceProvider@@@winrt@@YA-A_PAEBUguid@0@IPEAX@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$capture@UImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBUguid@6@@winrt@@YA?AUImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@0@A6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@AEBUguid@0@@Z @ 0x1806820D0 (--$capture@UImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@A6AJPEAUI.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapFlyoutDeprecateDisplayRegions@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180685084 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapFlyoutDeprecateDisplayRegions@@@detai.c)
 *     ?WorkAreaOffset@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180685A40 (-WorkAreaOffset@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManag.c)
 *     ?WorkAreaSize@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180685A84 (-WorkAreaSize@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagem.c)
 */

// Hidden C++ exception states: #wind=5
winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::DesktopSnapLayoutManager(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this,
        const struct winrt::Windows::UI::WindowManagement::DisplayRegion *a2)
{
  __int64 *v4; // rbx
  winrt::Windows::Foundation::IUnknown *v5; // rcx
  __int64 *v6; // rax
  winrt::Windows::Foundation::IUnknown *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v12[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v13[8]; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v14[8]; // [rsp+40h] [rbp-20h] BYREF
  GUID v15; // [rsp+48h] [rbp-18h] BYREF

  v12[1] = this;
  *((_QWORD *)this + 5) = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManager>::`vftable';
  *((_QWORD *)this + 6) = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::impl::INonDelegatingInspectable>::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::`vftable';
  v4 = (__int64 *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  v5 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)((char *)this + 64);
  *(_QWORD *)v5 = *(_QWORD *)a2;
  winrt::Windows::Foundation::IUnknown::add_ref(v5);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 1;
  v15 = CLSID_ImmersiveShell;
  v6 = (__int64 *)winrt::create_instance<IServiceProvider>((__int64)&v11, (__int64)&v15);
  winrt::com_ptr<ITouchSwipe>::operator=(v4, v6);
  if ( v11 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
  v11 = *v4;
  v7 = (winrt::Windows::Foundation::IUnknown *)winrt::capture<winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher,long (&)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,winrt::guid const &>(
                                                 v12,
                                                 (__int64 (__fastcall *)(_QWORD, __int64, __int128 *, __int64 *))IUnknown_QueryService,
                                                 &v11,
                                                 (__int64)&winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)((char *)this + 88),
    v7);
  if ( v12[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v12);
  LOBYTE(v8) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapFlyoutDeprecateDisplayRegions>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SnapFlyoutDeprecateDisplayRegions>::GetImpl'::`2'::impl,
    v8);
  v9 = (_QWORD *)winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaSize(
                   a2,
                   v13);
  *(_QWORD *)&v15.Data1 = *(_QWORD *)winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaOffset(
                                       a2,
                                       v14);
  *(_QWORD *)v15.Data4 = *v9;
  *(GUID *)((char *)this + 72) = v15;
  return this;
}
