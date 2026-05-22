/*
 * XREFs of ?HandlesInput@ShellGesturesClientProxy@@QEAA_NW4InputType@@@Z @ 0x18017BCB8
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180013EC0 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellGesturesClientProxy::HandlesInput(__int64 a1, int a2)
{
  if ( (a2 & 8) != 0 )
    return BamoShellGesturesClientProxy::GetTouchEnabled((BamoShellGesturesClientProxy *)(a1 + 8));
  if ( (a2 & 0x1000000) != 0 )
    return BamoShellGesturesClientProxy::GetTouchpadEnabled((BamoShellGesturesClientProxy *)(a1 + 8));
  return 0;
}
