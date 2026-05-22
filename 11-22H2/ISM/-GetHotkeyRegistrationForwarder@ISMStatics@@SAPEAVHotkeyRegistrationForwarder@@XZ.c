/*
 * XREFs of ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x1800455D4
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800450F8 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x18010A1C0 (std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_ea_18010A1C0.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x1801BCCD4 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@HotkeyRegistrationForwarder@@SA?AV?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@XZ @ 0x18004561C (-Create@HotkeyRegistrationForwarder@@SA-AV-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@.c)
 */

struct HotkeyRegistrationForwarder *ISMStatics::GetHotkeyRegistrationForwarder(void)
{
  struct HotkeyRegistrationForwarder *result; // rax
  struct HotkeyRegistrationForwarder **v1; // rax
  struct HotkeyRegistrationForwarder *v2; // rcx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  result = ISMStatics::s_hotkeyRegistrationForwarder;
  if ( !ISMStatics::s_hotkeyRegistrationForwarder )
  {
    v1 = (struct HotkeyRegistrationForwarder **)HotkeyRegistrationForwarder::Create(&v3);
    v2 = *v1;
    *v1 = 0LL;
    ISMStatics::s_hotkeyRegistrationForwarder = v2;
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v3);
    return ISMStatics::s_hotkeyRegistrationForwarder;
  }
  return result;
}
