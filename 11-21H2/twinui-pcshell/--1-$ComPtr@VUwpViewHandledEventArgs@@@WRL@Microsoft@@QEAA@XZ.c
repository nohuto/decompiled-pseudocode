/*
 * XREFs of ??1?$ComPtr@VUwpViewHandledEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x180302FFC
 * Callers:
 *     ?_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z @ 0x1800831C0 (-_ScheduleApplicationNotifications@CImmersiveApp@@AEAAXQEBUAPP_CHANGE_INFO@@_K@Z.c)
 *     _wil::MakeOrThrow_UwpViewHandledEventArgs_bool_&__::_1_::dtor$0 @ 0x180408291 (_wil--MakeOrThrow_UwpViewHandledEventArgs_bool_-__--_1_--dtor$0.c)
 *     _WindowWrapperBase::OnBackComplete_::_1_::dtor$3 @ 0x18040B7C4 (_WindowWrapperBase--OnBackComplete_--_1_--dtor$3.c)
 *     _UwpWindowWrapperBase::OnBackComplete_::_1_::dtor$3 @ 0x180415C04 (_UwpWindowWrapperBase--OnBackComplete_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803070D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVis_ea_1803070D0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<UwpViewHandledEventArgs>::~ComPtr<UwpViewHandledEventArgs>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
