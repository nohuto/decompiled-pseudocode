/*
 * XREFs of ?LogPrimaryViewShowRequestInfo@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180533C60
 * Callers:
 *     ?HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180532D90 (-HandleInputPaneTryShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ @ 0x1800D3E20 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PATKTI@@@details@wil@@QEAA_NXZ.c)
 *     ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_NAEA_NAEA_NAEA_NAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGAEAY07$$CBGPEBG_NAEA_NAEA_NHAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N54AEA_N6611111110466$$QEAH6@Z @ 0x180530A30 (--$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUI.c)
 *     ??$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07$$CBGAEBU_GUID@@_N_N_N_NAEB_NAEB_N_N_N_N_NPEBGPEBGPEBGPEBGPEBGPEBGPEBGPEBG_NAEA_NAEAU?$atomic@_N@std@@HAEA_N@TouchKeyboardTelemetry@@SAX$$QEAPEBG0AEAY07$$CBGAEAURect@Foundation@Windows@@21AEBU_GUID@@$$QEA_N444AEB_N54444000000004AEA_NAEAU?$atomic@_N@std@@$$QEAH6@Z @ 0x180530C28 (--$HostInvokedMethod@PEBGPEBGAEAY07$$CBGAEAURect@Foundation@Windows@@AEAU123@AEAY07_ea_180530C28.c)
 *     ?DeviceConvertibilityData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180531F44 (-DeviceConvertibilityData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryData.c)
 *     ?EffectiveSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180531F98 (-EffectiveSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProv.c)
 *     ?GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AUDigitizerState@2@XZ @ 0x180531FEC (-GetDigitizerState@TabTipAdapterPolicy@KeyboardHosting@@AEAA-AUDigitizerState@2@XZ.c)
 *     ?OrganizationSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805345E4 (-OrganizationSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataP.c)
 *     ?SystemFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180535030 (-SystemFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDat.c)
 *     ?SystemSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180535084 (-SystemSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvide.c)
 *     ?UserFallbackSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180535178 (-UserFallbackSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataP.c)
 *     ?UserSettingData@?$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805351CC (-UserSettingData@-$consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider@.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::LogPrimaryViewShowRequestInfo(
        KeyboardHosting::TabTipAdapterPolicy *this,
        HSTRING a2,
        HSTRING a3)
{
  char IsEnabled; // al
  const unsigned __int16 *v7; // rcx
  winrt::hstring *v8; // rax
  winrt::hstring *v9; // rax
  winrt::hstring *v10; // rax
  winrt::hstring *v11; // rax
  winrt::hstring *v12; // rax
  winrt::hstring *v13; // rax
  winrt::hstring *v14; // rax
  void *v16; // [rsp+28h] [rbp-148h]
  __int64 v17; // [rsp+30h] [rbp-140h]
  __int64 v18; // [rsp+88h] [rbp-E8h]
  __int64 v19; // [rsp+90h] [rbp-E0h]
  __int64 v20; // [rsp+98h] [rbp-D8h]
  __int64 v21; // [rsp+A0h] [rbp-D0h]
  __int64 v22; // [rsp+A8h] [rbp-C8h]
  __int64 v23; // [rsp+B0h] [rbp-C0h]
  __int64 v24; // [rsp+B8h] [rbp-B8h]
  bool v25; // [rsp+F0h] [rbp-80h] BYREF
  bool v26; // [rsp+F1h] [rbp-7Fh] BYREF
  bool v27; // [rsp+F2h] [rbp-7Eh] BYREF
  bool v28; // [rsp+F3h] [rbp-7Dh] BYREF
  bool v29; // [rsp+F4h] [rbp-7Ch] BYREF
  bool v30[3]; // [rsp+F5h] [rbp-7Bh] BYREF
  bool v31; // [rsp+F8h] [rbp-78h] BYREF
  bool v32; // [rsp+F9h] [rbp-77h] BYREF
  bool v33; // [rsp+FAh] [rbp-76h] BYREF
  int v34; // [rsp+FCh] [rbp-74h] BYREF
  PCWSTR v35; // [rsp+100h] [rbp-70h] BYREF
  PCWSTR v36; // [rsp+108h] [rbp-68h] BYREF
  const unsigned __int16 *v37; // [rsp+110h] [rbp-60h] BYREF
  const unsigned __int16 *v38; // [rsp+118h] [rbp-58h] BYREF
  const unsigned __int16 *v39; // [rsp+120h] [rbp-50h] BYREF
  const unsigned __int16 *v40; // [rsp+128h] [rbp-48h] BYREF
  const unsigned __int16 *v41; // [rsp+130h] [rbp-40h] BYREF
  const unsigned __int16 *v42; // [rsp+138h] [rbp-38h] BYREF
  const unsigned __int16 *v43; // [rsp+140h] [rbp-30h] BYREF
  const unsigned __int16 *v44; // [rsp+148h] [rbp-28h] BYREF
  const unsigned __int16 *v45; // [rsp+150h] [rbp-20h] BYREF
  PCWSTR StringRawBuffer; // [rsp+158h] [rbp-18h] BYREF
  PCWSTR v47; // [rsp+160h] [rbp-10h] BYREF
  volatile signed __int32 *v48; // [rsp+168h] [rbp-8h] BYREF
  volatile signed __int32 *v49; // [rsp+170h] [rbp+0h] BYREF
  volatile signed __int32 *v50; // [rsp+178h] [rbp+8h] BYREF
  volatile signed __int32 *v51[6]; // [rsp+180h] [rbp+10h] BYREF
  bool v52; // [rsp+1C0h] [rbp+50h] BYREF
  bool v53; // [rsp+1D8h] [rbp+68h] BYREF

  KeyboardHosting::TabTipAdapterPolicy::GetDigitizerState((__int64)this, (char *)&v29);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_PATKTI>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_PATKTI>::GetImpl'::`2'::impl);
  v7 = (const unsigned __int16 *)((char *)this + 648);
  v34 = *((unsigned __int8 *)this + 585);
  v52 = 0;
  if ( IsEnabled )
  {
    if ( *((_QWORD *)this + 84) >= 8uLL )
      v7 = *(const unsigned __int16 **)v7;
    v38 = v7;
    v8 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemFallbackSettingData(
                             (char *)this + 600,
                             &v37);
    v39 = winrt::hstring::c_str(v8);
    v9 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::UserFallbackSettingData(
                             (char *)this + 600,
                             &v36);
    v40 = winrt::hstring::c_str(v9);
    v10 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::SystemSettingData(
                              (char *)this + 600,
                              &v35);
    v41 = winrt::hstring::c_str(v10);
    v11 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::UserSettingData(
                              (char *)this + 600,
                              v51);
    v42 = winrt::hstring::c_str(v11);
    v12 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::OrganizationSettingData(
                              (char *)this + 600,
                              &v50);
    v43 = winrt::hstring::c_str(v12);
    v13 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::EffectiveSettingData(
                              (__int64 *)this + 75,
                              &v49);
    v44 = winrt::hstring::c_str(v13);
    v14 = (winrt::hstring *)winrt::impl::consume_Windows_Internal_Shell_TouchKeyboard_ITapInvokeTelemetryDataProvider<winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider>::DeviceConvertibilityData(
                              (__int64 *)this + 75,
                              &v48);
    v45 = winrt::hstring::c_str(v14);
    v53 = 0;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    v47 = WindowsGetStringRawBuffer(a2, 0LL);
    TouchKeyboardTelemetry::HostInvokedMethod<unsigned short const *,unsigned short const *,unsigned short const (&)[8],Windows::Foundation::Rect &,Windows::Foundation::Rect &,unsigned short const (&)[8],_GUID const &,bool,bool,bool,bool,bool const &,bool const &,bool,bool,bool,bool,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool &,std::atomic<bool> &,int,bool &>(
      &v47,
      &StringRawBuffer,
      (__int64)this + 224,
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 128),
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 224),
      v16,
      v17,
      &v28,
      &v27,
      &v26,
      &v25,
      &v29,
      v30,
      &v33,
      &v32,
      &v31,
      &v53,
      &v45,
      &v44,
      &v43,
      &v42,
      &v41,
      &v40,
      &v39,
      &v38,
      &v52,
      (char *)this + 586,
      (char *)this + 593,
      &v34,
      (char *)this + 584);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v48);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v49);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v50);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v51);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v35);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v36);
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v37);
  }
  else
  {
    if ( *((_QWORD *)this + 84) >= 8uLL )
      v7 = *(const unsigned __int16 **)v7;
    v37 = v7;
    v53 = 0;
    v28 = 0;
    v27 = 0;
    v26 = 0;
    v25 = 0;
    v36 = WindowsGetStringRawBuffer(a3, 0LL);
    v35 = WindowsGetStringRawBuffer(a2, 0LL);
    TouchKeyboardTelemetry::HostInvokedMethod<unsigned short const *,unsigned short const *,unsigned short const (&)[8],Windows::Foundation::Rect &,Windows::Foundation::Rect &,unsigned short const (&)[8],_GUID const &,bool,bool,bool,bool,bool const &,bool const &,bool,bool &,bool &,bool &,unsigned short const (&)[8],unsigned short const (&)[8],unsigned short const (&)[8],unsigned short const (&)[8],unsigned short const (&)[8],unsigned short const (&)[8],unsigned short const (&)[8],unsigned short const *,bool,bool &,bool &,int,bool &>(
      &v35,
      &v36,
      (__int64)this + 591,
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 128),
      (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 224),
      v16,
      v17,
      &v25,
      &v26,
      &v27,
      &v28,
      &v29,
      v30,
      &v53,
      (bool *)this + 587,
      (bool *)this + 590,
      (bool *)this + 591,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      &v37,
      &v52,
      (bool *)this + 586,
      (bool *)this + 588,
      &v34,
      (char *)this + 584);
  }
  return 0LL;
}
