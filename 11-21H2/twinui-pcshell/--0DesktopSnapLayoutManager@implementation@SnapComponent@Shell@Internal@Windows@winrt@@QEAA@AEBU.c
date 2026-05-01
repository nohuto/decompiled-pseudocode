/*
 * XREFs of ??0DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@AEBUDisplayRegion@WindowManagement@UI@56@@Z @ 0x1805B3664
 * Callers:
 *     ?CreateInstance@?$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIDesktopSnapLayoutManagerFactory@34567@@impl@winrt@@UEAAHPEAX0PEAPEAX1@Z @ 0x1805B3B60 (-CreateInstance@-$produce@UDesktopSnapLayoutManager@factory_implementation@SnapComponent@Shell@I.c)
 *     ?GetForDisplayRegion@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Windows@winrt@@SA?AUSnapLayoutManagerExtension@PlatformExtensions@4567@AEBUDisplayRegion@WindowManagement@UI@67@@Z @ 0x1805B3D64 (-GetForDisplayRegion@DesktopSnapLayoutManager@implementation@SnapComponent@Shell@Internal@Window.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x180079874 (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800F4BD8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??4?$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803B5624 (--4-$com_ptr@UIUnknown@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ??$capture@UIServiceProvider@@P6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA?AU?$com_ptr@UIServiceProvider@@@0@P6AHAEBUguid@0@PEAXI0PEAPEAX@_E0AEAPEAXAEAI@Z @ 0x1805B30F0 (--$capture@UIServiceProvider@@P6AHAEBUguid@winrt@@PEAXI0PEAPEAX@_EAEBU23@AEAPEAXAEAI@winrt@@YA-A.c)
 *     ??$capture@UImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@ZPEAUIServiceProvider@@AEBUguid@6@@winrt@@YA?AUImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@0@P6AJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z$$QEAPEAUIServiceProvider@@AEBUguid@0@@Z @ 0x1805B31B0 (--$capture@UImmersiveShellThreadDispatcher@SnapComponent@Shell@Internal@Windows@winrt@@P6AJPEAUI.c)
 */

// Hidden C++ exception states: #wind=4
winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::DesktopSnapLayoutManager(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *this,
        const struct winrt::Windows::UI::WindowManagement::DisplayRegion *a2)
{
  __int64 *v3; // rdi
  winrt::Windows::Foundation::IUnknown *v4; // rcx
  void *v5; // rdx
  winrt::Windows::Foundation::IUnknown *v6; // rax
  DWORD v8; // [rsp+30h] [rbp-40h] BYREF
  LPVOID v9; // [rsp+38h] [rbp-38h] BYREF
  IUnknown *v10; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-28h] BYREF
  IID v12; // [rsp+58h] [rbp-18h] BYREF

  v11[1] = this;
  *((_QWORD *)this + 5) = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::SnapComponent::IDesktopSnapLayoutManager>::`vftable';
  *((_QWORD *)this + 6) = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension>::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = &winrt::impl::produce<winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager,winrt::impl::INonDelegatingInspectable>::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 4) = 1LL;
  *(_QWORD *)this = &winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::`vftable';
  v3 = (__int64 *)((char *)this + 56);
  *((_QWORD *)this + 7) = 0LL;
  v4 = (winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)((char *)this + 64);
  *(_QWORD *)v4 = *(_QWORD *)a2;
  winrt::Windows::Foundation::IUnknown::add_ref(v4);
  *((_QWORD *)this + 9) = 0LL;
  v12 = CLSID_ImmersiveShell;
  v10 = 0LL;
  v8 = 4;
  ___capture_UIServiceProvider__P6AHAEBUguid_winrt__PEAXI0PEAPEAX__EAEBU23_AEAPEAXAEAI_winrt__YA_AU__com_ptr_UIServiceProvider___0_P6AHAEBUguid_0_PEAXI0PEAPEAX__E0AEAPEAXAEAI_Z(
    &v9,
    v5,
    &v12,
    &v10,
    &v8);
  winrt::com_ptr<IUnknown>::operator=(v3, (__int64 *)&v9);
  if ( v9 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref((__int64 *)&v9);
  v10 = (IUnknown *)*v3;
  v6 = (winrt::Windows::Foundation::IUnknown *)winrt::capture<winrt::Windows::Internal::Shell::SnapComponent::ImmersiveShellThreadDispatcher,long (*)(IUnknown *,_GUID const &,_GUID const &,void * *),IServiceProvider *,winrt::guid const &>(
                                                 v11,
                                                 (__int64 (__fastcall *)(_QWORD, __int64, __int128 *, __int64 *))IUnknown_QueryService,
                                                 &v10,
                                                 (__int64)&winrt::impl::guid_v<winrt::Windows::Internal::Shell::SnapComponent::IImmersiveShellThreadDispatcher>);
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager *)((char *)this + 72),
    v6);
  if ( v11[0] )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v11);
  return this;
}
