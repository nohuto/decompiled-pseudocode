/*
 * XREFs of ?OnSessionBecameActive@XamlLauncherState@@QEAAJXZ @ 0x180071F68
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x1801AB4E0 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800BBE4C (-Provider@LauncherTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800C3AF4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801127B4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180198890 (-ShowSearchWithStart@XamlLauncherState@@AEAAJW4IMMERSIVELAUNCHERSHOWFLAGS@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_53115370@@@details@wil@@QEAA_NXZ @ 0x180203214 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_53115370@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives@@@details@wil@@QEAA_NXZ @ 0x180203250 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::OnSessionBecameActive(XamlLauncherState *this)
{
  int v2; // edi
  const struct _tlgProvider_t *v3; // rax
  int v4; // r9d
  int v6; // [rsp+60h] [rbp+8h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 16);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_53115370>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_53115370>::GetImpl'::`2'::impl)
    && *((_DWORD *)this + 16) == 5 )
  {
    XamlLauncherState::ShowSearchWithStart(this, 8LL);
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RecoverFromIdleAndDesktopSwitchTimeoutFalseNegatives>::GetImpl'::`2'::impl) )
    *((_BYTE *)this + 1048) = 0;
  v3 = LauncherTelemetryLogging::Provider();
  if ( *(_DWORD *)v3 > 5u && (unsigned __int8)tlgKeywordOn(v3, 0x200000000000LL) )
  {
    v6 = *((_DWORD *)this + 16);
    v7 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      (unsigned int)&unk_18085C92C,
      0,
      v4,
      (__int64)&v7,
      (__int64)&v6);
  }
  return 0LL;
}
