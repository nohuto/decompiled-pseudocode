/*
 * XREFs of ?UnregisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x1806655A0
 * Callers:
 *     ?ObservedKeyUp@CShellSnapComponent@@UEAAJI@Z @ 0x180661BB0 (-ObservedKeyUp@CShellSnapComponent@@UEAAJI@Z.c)
 *     ?RegisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x180662D90 (-RegisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?UnregisterRawInput@CSnapComponentTelemetry@@SAXXZ @ 0x1806655F0 (-UnregisterRawInput@CSnapComponentTelemetry@@SAXXZ.c)
 */

void __fastcall CShellSnapComponent::UnregisterRawInput(CShellSnapComponent *this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 264) )
  {
    CSnapComponentTelemetry::UnregisterRawInput();
    v2 = SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 936));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x81D,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v2);
  }
}
