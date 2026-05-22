/*
 * XREFs of ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C0B00
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801A4E20 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180107650 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall NonPointerProcessor::OnInputReport(NonPointerProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, _QWORD, char *); // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_BYTE *)this + 64) )
  {
    v8 = (_QWORD *)((char *)this + 48);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    if ( !v4 )
    {
      v5 = -2147418113;
      v6 = 112LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 7);
    v5 = InputContext::Create((struct InputContext **)this + 7);
    if ( v5 < 0 )
    {
      v6 = 114LL;
      goto LABEL_4;
    }
    v8 = (_QWORD *)((char *)this + 48);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)v4 + 64LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 6);
    v5 = v9(v4, *((_QWORD *)this + 5), *((_QWORD *)this + 7), 0LL, (char *)this + 48);
    if ( v5 < 0 )
    {
      v6 = 119LL;
      goto LABEL_4;
    }
    *((_BYTE *)this + 64) = 1;
  }
  if ( *v8 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(*(_QWORD *)*v8 + 24LL))(*v8, a2);
    if ( v5 < 0 )
    {
      v6 = 126LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
