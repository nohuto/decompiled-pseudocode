/*
 * XREFs of ?TryGetDisplayRegion@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUDisplayRegion@WindowManagement@UI@67@PEAUHMONITOR__@@AEBURect@Foundation@67@@Z @ 0x180691C08
 * Callers:
 *     ?TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AUSnapLayoutPickerExtension@4UI@WindowsUdk@7@IPEAUHWND__@@PEAUHMONITOR__@@AEBURect@Foundation@67@W4SnapControlType@34567@W4InputDeviceKind@49WindowsUdk@7@@Z @ 0x1806920E8 (-TryLoadSnapLayoutPickerExtension@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1805E1320 (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1805E4658 (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsPr.c)
 *     ?WorkAreaOffset@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180685A40 (-WorkAreaOffset@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManag.c)
 *     ?WorkAreaSize@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180685A84 (-WorkAreaSize@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagem.c)
 *     ??$call@P6A?AU?$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIWindowingEnvironmentStatics@WindowManagement@UI@45@@Z@?$factory_cache_entry@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@UIWindowingEnvironmentStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AU?$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@2@AEBUIWindowingEnvironmentStatics@WindowManagement@UI@62@@Z@Z @ 0x18068DA10 (--$call@P6A-AU-$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collection.c)
 *     ??1SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAA@XZ @ 0x18068E6C8 (--1SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAA@XZ.c)
 *     ?DisplayId@?$consume_Windows_UI_WindowManagement_IDisplayRegion2@UDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068EFA0 (-DisplayId@-$consume_Windows_UI_WindowManagement_IDisplayRegion2@UDisplayRegion@WindowManagement.c)
 *     ?FindAll@?$consume_Windows_UI_WindowManagement_IWindowingEnvironmentStatics@UIWindowingEnvironmentStatics@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068F048 (-FindAll@-$consume_Windows_UI_WindowManagement_IWindowingEnvironmentStatics@UIWindowingEnvironme.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UDisplayRegion@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UDisplayRegion@WindowManagement@UI@45@@impl@winrt@@QEBA@I@Z @ 0x18068F224 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UDisplayRegion@Window.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowingEnvironment@WindowManagement@UI@45@@impl@winrt@@QEBA@I@Z @ 0x18068F2A8 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowingEnvironment.c)
 *     ?GetDisplayRegions@?$consume_Windows_UI_WindowManagement_IWindowingEnvironment@UIWindowingEnvironment@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18068F524 (-GetDisplayRegions@-$consume_Windows_UI_WindowManagement_IWindowingEnvironment@UIWindowingEnviro.c)
 *     ?IsVisible@?$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180690460 (-IsVisible@-$consume_Windows_UI_WindowManagement_IDisplayRegion@UIDisplayRegion@WindowManagement.c)
 *     ?StartActivity@SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAAXPEAUHMONITOR__@@AEBURect@Foundation@Windows@winrt@@@Z @ 0x18069185C (-StartActivity@SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAAXPEAUHMONITOR__@@AEB.c)
 *     ?UsingFallbackDisplayRegion@SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAAXXZ @ 0x180692A50 (-UsingFallbackDisplayRegion@SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAAXXZ.c)
 *     ?VisibleDisplayRegion@SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAAX_KAEBURect@Foundation@Windows@winrt@@@Z @ 0x180692B14 (-VisibleDisplayRegion@SnapFlyoutInstance_GetDisplayRegion@SnapFlyoutTelemetry@@QEAAX_KAEBURect@F.c)
 */

// Hidden C++ exception states: #wind=9
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryGetDisplayRegion(
        winrt::Windows::Foundation::IUnknown *a1,
        HMONITOR a2,
        __int64 a3)
{
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rcx
  unsigned int v7; // r15d
  signed int v8; // eax
  __int64 v9; // rbx
  unsigned int v10; // r14d
  __int64 v11; // rdi
  signed int v12; // eax
  float v13; // xmm9_4
  float v14; // xmm7_4
  int v15; // xmm6_4
  int v16; // xmm0_4
  unsigned __int64 *v17; // rax
  int v18; // edx
  __int64 v20; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  const struct winrt::Windows::UI::WindowManagement::IWindowingEnvironmentStatics *(__fastcall *v25)(const struct winrt::Windows::UI::WindowManagement::IWindowingEnvironmentStatics *, __int64); // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v27[6]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 *v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h] BYREF
  __int64 v30; // [rsp+88h] [rbp-80h] BYREF
  __int64 v31; // [rsp+90h] [rbp-78h] BYREF
  __int64 v32; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+A0h] [rbp-68h] BYREF
  char v34; // [rsp+B0h] [rbp-58h]
  volatile signed __int32 *v35[40]; // [rsp+B8h] [rbp-50h] BYREF

  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v35,
    (__int64)"SnapFlyoutInstance_GetDisplayRegion");
  v35[0] = (volatile signed __int32 *)&SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion::`vftable';
  SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion::StartActivity(
    (SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion *)v35,
    a2,
    (const struct winrt::Windows::Foundation::Rect *)a3);
  v33[1] = v35;
  v34 = 1;
  v24 = 0LL;
  v28 = &qword_180991E38;
  _InterlockedIncrement64(&qword_180991E38);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::WindowingEnvironment,winrt::Windows::UI::WindowManagement::IWindowingEnvironmentStatics> )
  {
    winrt::impl::consume_Windows_UI_WindowManagement_IWindowingEnvironmentStatics<winrt::Windows::UI::WindowManagement::IWindowingEnvironmentStatics>::FindAll(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::WindowingEnvironment,winrt::Windows::UI::WindowManagement::IWindowingEnvironmentStatics>,
      &v21);
    _InterlockedDecrement64(&qword_180991E38);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991E38);
    v25 = _lambda_7ccb0e45379eda7a4635e112a63cbc6f_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Windows::UI::WindowManagement::WindowingEnvironment,winrt::Windows::UI::WindowManagement::IWindowingEnvironmentStatics>::call<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowManagement::WindowingEnvironment> (*)(winrt::Windows::UI::WindowManagement::IWindowingEnvironmentStatics const &)>(
      v6,
      (__int64)&v21,
      (void (__fastcall **)(__int64, __int64 *))&v25);
  }
  v7 = 0;
  LODWORD(v22) = 0;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 56LL))(v21, &v22);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  v9 = v24;
  while ( v7 != (_DWORD)v22 )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowManagement::WindowingEnvironment>,winrt::Windows::UI::WindowManagement::WindowingEnvironment>::GetAt(
      &v21,
      &v23,
      v7);
    winrt::impl::consume_Windows_UI_WindowManagement_IWindowingEnvironment<winrt::Windows::UI::WindowManagement::IWindowingEnvironment>::GetDisplayRegions(
      &v23,
      &v26);
    v10 = 0;
    LODWORD(v25) = 0;
    v11 = v26;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 56LL))(v26, &v25);
    if ( v12 < 0 )
      winrt::throw_hresult(v12);
    while ( v10 != (_DWORD)v25 )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::WindowManagement::DisplayRegion>,winrt::Windows::UI::WindowManagement::DisplayRegion>::GetAt(
        &v26,
        &v20,
        v10);
      if ( winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::IsVisible(&v20) )
      {
        v13 = *(float *)winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaOffset(
                          &v20,
                          &v29);
        v14 = *((float *)winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaOffset(
                           &v20,
                           &v30)
              + 1);
        v15 = *(_DWORD *)winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaSize(
                           &v20,
                           &v31);
        v16 = *((_DWORD *)winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion<winrt::Windows::UI::WindowManagement::IDisplayRegion>::WorkAreaSize(
                            &v20,
                            &v32)
              + 1);
        *(float *)v27 = v13;
        *(float *)&v27[1] = v14;
        v27[2] = v15;
        v27[3] = v16;
        v17 = winrt::impl::consume_Windows_UI_WindowManagement_IDisplayRegion2<winrt::Windows::UI::WindowManagement::DisplayRegion>::DisplayId(
                &v20,
                v33);
        SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion::VisibleDisplayRegion(
          (SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion *)v35,
          *v17,
          (const struct winrt::Windows::Foundation::Rect *)v27);
        if ( *(float *)a3 == v13 && *(float *)(a3 + 4) == v14 )
        {
          *(_QWORD *)a1 = v20;
          winrt::Windows::Foundation::IUnknown::add_ref(a1);
          if ( v20 )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
          if ( v11 )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
          if ( v23 )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
          if ( v21 )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
          if ( v9 )
            winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
          goto LABEL_38;
        }
        if ( v13 == 0.0 && v14 == 0.0 || !v9 )
        {
          winrt::Windows::Foundation::IUnknown::operator=(
            (winrt::Windows::Foundation::IUnknown *)&v24,
            (winrt::Windows::Foundation::IUnknown *)&v20);
          v9 = v24;
        }
      }
      if ( v20 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
      ++v10;
    }
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v26);
    if ( v23 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
    ++v7;
  }
  SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion::UsingFallbackDisplayRegion((SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion *)v35);
  *(_QWORD *)a1 = v9;
  if ( v21 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
LABEL_38:
  wil::ActivityBase<WindowManagementLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64 *)v35,
    v18);
  SnapFlyoutTelemetry::SnapFlyoutInstance_GetDisplayRegion::~SnapFlyoutInstance_GetDisplayRegion(v35);
  return a1;
}
