/*
 * XREFs of ?Initialize@RawButtonProcessor@@AEAAJXZ @ 0x1801E059C
 * Callers:
 *     ?Create@RawButtonProcessor@@SAJPEAPEAV1@@Z @ 0x1801E0244 (-Create@RawButtonProcessor@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004D3D4 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x1801E0374 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 *     ?Initialize@PrivateMessageSession@RawButtonProcessor@@QEAAXPEAV2@@Z @ 0x1801E04C4 (-Initialize@PrivateMessageSession@RawButtonProcessor@@QEAAXPEAV2@@Z.c)
 */

__int64 __fastcall RawButtonProcessor::Initialize(RawButtonProcessor *this)
{
  wil::details **v1; // rsi
  int v3; // eax
  unsigned __int64 v4; // r8
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (wil::details **)((char *)this + 24);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 3);
  v3 = CoreUICreate(v1);
  v5 = v3;
  if ( v3 >= 0 )
  {
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)this + 4,
      *v1,
      v4);
    RawButtonProcessor::FindRemoteEndpoint(this);
    RawButtonProcessor::PrivateMessageSession::Initialize((RawButtonProcessor *)((char *)this + 400), this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
