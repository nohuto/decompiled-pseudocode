/*
 * XREFs of ?CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ @ 0x180043FB8
 * Callers:
 *     ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x180043F34 (-ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x1800409D8 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A8D0C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CursorNotificationProcessor::CheckAndEnsureCursorManagerClient(
        wil::details **this,
        __int64 a2,
        unsigned __int64 a3)
{
  bool v4; // al
  unsigned __int64 v5; // r8
  wil::details *v6; // rbx
  bool v7; // zf
  bool v8; // bl
  wil::details *v10; // rdi
  __int64 (__fastcall *v11)(wil::details *, __int64 *); // rbx
  int v12; // eax
  unsigned __int64 v13; // r8
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, const wchar_t *, __int64, wil::details **); // rdi
  int v16; // eax
  unsigned __int64 v17; // r8
  int v18; // [rsp+20h] [rbp-28h]
  wil::details *v19; // [rsp+30h] [rbp-18h] BYREF
  wil::details *v20; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF

  v22 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v19,
    this[1],
    a3);
  v4 = (*(unsigned int (__fastcall **)(wil::details *))(*(_QWORD *)*this + 64LL))(*this) != 0;
  v6 = this[2];
  v7 = v6 == 0LL;
  if ( !v6 )
  {
    if ( v4 )
    {
      v10 = this[1];
      v11 = *(__int64 (__fastcall **)(wil::details *, __int64 *))(*(_QWORD *)v10 + 24LL);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v22);
      v12 = v11(v10, &v22);
      if ( v12 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xDB,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\curs"
                        "ornotificationprocessor.cpp",
          (const char *)(unsigned int)v12,
          v18);
      v14 = v22;
      v15 = *(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, wil::details **))(*(_QWORD *)v22 + 24LL);
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        &v19,
        v19,
        v13);
      v16 = v15(v14, L"System\\Input\\CursorManagerEndpoint", 1LL, &v20);
      if ( v16 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0xE0,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\curs"
                        "ornotificationprocessor.cpp",
          (const char *)(unsigned int)v16,
          v18);
      v6 = v20;
      v20 = 0LL;
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        &v19,
        0LL,
        v17);
      this[2] = v6;
    }
    v7 = v6 == 0LL;
  }
  v8 = !v7;
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    &v19,
    0LL,
    v5);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease(&v22);
  return v8;
}
