/*
 * XREFs of ?s_XamlApplicationThreadProc@XamlExplorerHostShellComponent@@CAKPEAX@Z @ 0x1800625C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?EnsureXamlIslandHosting@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x180062B18 (-EnsureXamlIslandHosting@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1805F5290 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall XamlExplorerHostShellComponent::s_XamlApplicationThreadProc(wil::details **Parameter)
{
  HANDLE CurrentThread; // rax
  HRESULT v3; // eax
  void *v4; // rdx
  wil::details *v5; // rax
  int lpdwindex; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD dwindex; // [rsp+40h] [rbp+8h] BYREF
  HANDLE pHandles; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = GetCurrentThread();
  v3 = SetThreadDescription(CurrentThread, L"Explorer Xaml Application Thread");
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x15D,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
      (const char *)(unsigned int)v3,
      lpdwindex);
  if ( XamlExplorerHostShellComponent::EnsureXamlIslandHosting((XamlExplorerHostShellComponent *)Parameter) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  else
  {
    wil::details::SetEvent(Parameter[36], v4);
    v5 = Parameter[37];
    dwindex = 0;
    pHandles = v5;
    CoWaitForMultipleHandles(0x18u, 0xFFFFFFFF, 1u, &pHandles, &dwindex);
  }
  return 0LL;
}
