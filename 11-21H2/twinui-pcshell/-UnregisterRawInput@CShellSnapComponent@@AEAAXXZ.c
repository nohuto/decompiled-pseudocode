/*
 * XREFs of ?UnregisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x180597838
 * Callers:
 *     ?ObservedKeyUp@CShellSnapComponent@@UEAAJI@Z @ 0x1805943B0 (-ObservedKeyUp@CShellSnapComponent@@UEAAJI@Z.c)
 *     ?RegisterRawInput@CShellSnapComponent@@AEAAXXZ @ 0x180595810 (-RegisterRawInput@CShellSnapComponent@@AEAAXXZ.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnregisterRawInput@CSnapComponentTelemetry@@SAXXZ @ 0x180597888 (-UnregisterRawInput@CSnapComponentTelemetry@@SAXXZ.c)
 */

void __fastcall CShellSnapComponent::UnregisterRawInput(CShellSnapComponent *this)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 282) )
  {
    CSnapComponentTelemetry::UnregisterRawInput();
    v2 = SmartCookie::Unregister((CShellSnapComponent *)((char *)this + 1008));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x759,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
        (const char *)(unsigned int)v2);
  }
}
