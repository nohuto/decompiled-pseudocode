/*
 * XREFs of ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x1801D2044
 * Callers:
 *     ?Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801D1F3C (-Create@ComboButtonProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004D3D4 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?Create@ButtonRecognizer@@SAJPEAPEAV1@@Z @ 0x1801D3080 (-Create@ButtonRecognizer@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall ComboButtonProcessor::Initialize(ComboButtonProcessor *this)
{
  wil::details **v1; // rdi
  int v3; // ebx
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (wil::details **)((char *)this + 24);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 3);
  v3 = CoreUICreate(v1);
  if ( v3 < 0 )
  {
    v5 = 10LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\com"
               "bobuttonprocessor.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (wil::details **)this + 4,
    *v1,
    v4);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 6);
  v3 = ButtonRecognizer::Create((struct ButtonRecognizer **)this + 6);
  if ( v3 < 0 )
  {
    v5 = 15LL;
    goto LABEL_3;
  }
  return 0LL;
}
