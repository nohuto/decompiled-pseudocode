/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___ @ 0x1805C0068
 * Callers:
 *     ?ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellViewRequestedEventArgs@3UI@WindowsUdk@6@W4LaunchSource@MeetAndChatTelemetry@@@Z @ 0x1805CE3A0 (-ShowMACFlyout@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUShowShellVi.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??0?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1805C0368 (--0-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0DAAAAAA@U_TlgReflectorTag.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::Foundation::AsyncActionCompletedHandler__lambda_e61605ece55422ba9fa5b55a2642b1df___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  _QWORD *result; // rax
  _QWORD *v6; // [rsp+30h] [rbp+8h]

  v6 = operator new(0x158uLL);
  v4 = *a2;
  *a2 = 0LL;
  v6[1] = v4;
  wil::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<MeetAndChatTelemetryLogging,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
    v6 + 2,
    a2 + 1);
  v6[2] = &MeetAndChatTelemetry::ShowFlyout::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 84) = 1;
  *v6 = off_180645CB0;
  result = a1;
  *a1 = v6;
  return result;
}
