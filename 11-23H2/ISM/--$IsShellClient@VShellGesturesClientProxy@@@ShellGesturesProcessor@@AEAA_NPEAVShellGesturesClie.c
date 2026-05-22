/*
 * XREFs of ??$IsShellClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClientProxy@@@Z @ 0x180061838
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013510 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClientProxy@@@Z @ 0x1800618BC (--$ShouldSelectClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesture.c)
 * Callees:
 *     ?GetProcessId@ShellGesturesClientProxy@@QEAAIXZ @ 0x18016EED4 (-GetProcessId@ShellGesturesClientProxy@@QEAAIXZ.c)
 */

char __fastcall ShellGesturesProcessor::IsShellClient<ShellGesturesClientProxy>(
        __int64 a1,
        ShellGesturesClientProxy *a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 136LL);
  if ( v2 )
    return v2 == ShellGesturesClientProxy::GetProcessId(a2);
  else
    return *((_BYTE *)a2 + 152);
}
