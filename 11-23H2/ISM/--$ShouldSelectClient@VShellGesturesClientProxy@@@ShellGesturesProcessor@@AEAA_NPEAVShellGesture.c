/*
 * XREFs of ??$ShouldSelectClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClientProxy@@@Z @ 0x1800618BC
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013510 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ?IsTestSigningEnabled@KernelContextProvider@@SA_NXZ @ 0x180025CE8 (-IsTestSigningEnabled@KernelContextProvider@@SA_NXZ.c)
 *     ??$IsShellClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClientProxy@@@Z @ 0x180061838 (--$IsShellClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClie.c)
 *     ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x1801163C4 (-IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z.c)
 */

bool __fastcall ShellGesturesProcessor::ShouldSelectClient<ShellGesturesClientProxy>(__int64 a1, __int64 a2)
{
  ShellGesturesClientProxy *v2; // r9
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( !KernelContextProvider::IsDesktopAllowed(*(KernelContextProvider **)(a1 + 24), *(_QWORD *)(a2 + 160)) )
    return 0;
  if ( ShellGesturesProcessor::IsShellClient<ShellGesturesClientProxy>(v3, v2) )
    return 1;
  return KernelContextProvider::IsTestSigningEnabled(v5, v4) != 0;
}
