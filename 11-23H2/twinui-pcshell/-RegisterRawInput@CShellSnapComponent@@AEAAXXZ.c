/*
 * XREFs of ?RegisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x180662D90
 * Callers:
 *     ?OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z @ 0x180072870 (-OnMessage@CShellSnapComponent@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Register@UIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK@ZPEAU2@W43@@SmartCookie@@QEAAJPEAUIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK@Z12@Z @ 0x18065D160 (--$Register@UIImmersiveRawInputProvider@@P81@EAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@ZP81@EAAJK.c)
 *     ?RegisterRawInput@CSnapComponentTelemetry@@SAXXZ @ 0x180662E58 (-RegisterRawInput@CSnapComponentTelemetry@@SAXXZ.c)
 *     ?UnregisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x1806655A0 (-UnregisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 */

void __fastcall CShellSnapComponent::RegisterRawInput(CShellSnapComponent *this)
{
  __int64 v2; // r8
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_DWORD *)this + 264) )
  {
    CSnapComponentTelemetry::RegisterRawInput();
    v3 = SmartCookie::Register<IImmersiveRawInputProvider,long (IImmersiveRawInputProvider::*)(IUnknown *,enum RAW_INPUT_TYPE,unsigned long *),long (IImmersiveRawInputProvider::*)(unsigned long),IUnknown *,enum RAW_INPUT_TYPE>(
           (__int64)this + 936,
           *((_QWORD *)this + 133),
           v2);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x80B,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v3);
    if ( GetAsyncKeyState(91) >= 0 && GetAsyncKeyState(92) >= 0 )
    {
      CShellSnapComponent::UnregisterRawInput(this);
      (*(void (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this + 18) + 32LL))((char *)this + 144, 2LL, 8LL);
    }
  }
}
