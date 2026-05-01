/*
 * XREFs of ??$Start@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IAEBQEBGAEAU?$atomic@_N@std@@AEA_NAEA_N@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@AEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@$$QEAIAEBQEBGAEAU?$atomic@_N@std@@AEA_N4@Z @ 0x18051EB14
 * Callers:
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@QEBGPEA_N@Z @ 0x180528814 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802DA566 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?StartActivity@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBG_N22@Z @ 0x18052B45C (-StartActivity@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX.c)
 */

// Hidden C++ exception states: #wind=1
struct wil::details::IFailureCallback *__fastcall TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::Start<enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType &,unsigned int,unsigned short const * const &,std::atomic<bool> &,bool &,bool &>(
        struct wil::details::IFailureCallback *a1,
        unsigned int *a2,
        unsigned int *a3,
        _QWORD *a4,
        char *a5,
        char *a6,
        char *a7)
{
  char v12; // [rsp+20h] [rbp-28h]
  char v13; // [rsp+28h] [rbp-20h]
  char v14; // [rsp+30h] [rbp-18h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1,
    (__int64)"OnShellRequestedStateChangeActivity");
  *(_QWORD *)a1 = &TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::`vftable';
  v14 = *a7;
  v13 = *a6;
  v12 = *a5;
  TouchKeyboardExperienceTelemetryLogger::OnShellRequestedStateChangeActivity::StartActivity(
    a1,
    *a2,
    *a3,
    *a4,
    v12,
    v13,
    v14);
  return a1;
}
