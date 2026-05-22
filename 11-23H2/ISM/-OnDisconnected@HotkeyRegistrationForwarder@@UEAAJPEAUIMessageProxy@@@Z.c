/*
 * XREFs of ?OnDisconnected@HotkeyRegistrationForwarder@@UEAAJPEAUIMessageProxy@@@Z @ 0x180114FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall HotkeyRegistrationForwarder::OnDisconnected(
        HotkeyRegistrationForwarder *this,
        struct IMessageProxy *a2)
{
  __int64 *v3; // rdi
  void (__fastcall ***v4)(_QWORD, GUID *, struct IMessageProxy **); // rsi
  void (__fastcall *v5)(_QWORD, GUID *, struct IMessageProxy **); // rbx
  struct IMessageProxy *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 48);
  v4 = (void (__fastcall ***)(_QWORD, GUID *, struct IMessageProxy **))*((_QWORD *)this + 6);
  if ( v4 )
  {
    v7 = 0LL;
    v5 = **v4;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v7);
    v5(v4, &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08, &v7);
    if ( v7 == a2 )
      Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v3);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v7);
  }
  return 0LL;
}
