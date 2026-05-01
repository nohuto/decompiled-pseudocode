/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001BD0
 * Callers:
 *     ?HandleTapInvokeEffectiveSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@@PEAW4ShellRequestType@Text@567@@Z @ 0x1801B7190 (-HandleTapInvokeEffectiveSettingChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4TapInvokeSet.c)
 *     ??$RelaunchInputAppAfterTerminationRejected@I_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI$$QEA_N@Z @ 0x180205CC4 (--$RelaunchInputAppAfterTerminationRejected@I_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x1802092F0 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@PEAW4ShellRequestType@5Shell@68@@Z @ 0x1802DE8E0 (-HandleInputModalityInfoChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardModalityI.c)
 *     ?UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z @ 0x18051BD7C (-UpdateViewMovingStateInShellPreference@TouchKeyboardExperienceManager@@AEAAXI_N@Z.c)
 *     ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180532CD0 (-HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800C3A58 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v13 = a7;
  v11 = a6;
  v9 = a5;
  v14 = 8LL;
  v12 = 1LL;
  v10 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0, 0, 5u, &v8);
}
