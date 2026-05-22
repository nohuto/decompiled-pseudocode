/*
 * XREFs of ?OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x1801C0C40
 * Callers:
 *     ?OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x1801A50B0 (-OnTargetWithFocusChanged@ControllerProcessor@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180107650 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall NonPointerProcessor::OnTargetWithFocusChanged(
        NonPointerProcessor *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // rdx
  __int64 (__fastcall *v8)(__int64, _QWORD, _QWORD, _QWORD, char *); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IInputTarget *, struct IInputTarget *))(**((_QWORD **)this + 3) + 64LL))(
         *((_QWORD *)this + 3),
         a2,
         a3);
  if ( !v4 )
  {
    v5 = -2147418113;
    v6 = 142LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 6);
  v5 = InputContext::Create((struct InputContext **)this + 6);
  if ( v5 < 0 )
  {
    v6 = 145LL;
    goto LABEL_3;
  }
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)v4 + 64LL);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 5);
  v5 = v8(v4, *((_QWORD *)this + 4), *((_QWORD *)this + 6), 0LL, (char *)this + 40);
  if ( v5 < 0 )
  {
    v6 = 150LL;
    goto LABEL_3;
  }
  *((_BYTE *)this + 56) = 1;
  return 0LL;
}
