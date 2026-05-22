/*
 * XREFs of ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x180030BCC
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800328A8 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800E2000 (std--_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_ea_1800E2000.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x180190AE4 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@HotkeyRegistrationForwarder@@SA?AV?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@XZ @ 0x180030C14 (-Create@HotkeyRegistrationForwarder@@SA-AV-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@.c)
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
