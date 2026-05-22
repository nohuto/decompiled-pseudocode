/*
 * XREFs of ??$IsShellClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180061800
 * Callers:
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180061870 (--$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerCli.c)
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x180061B74 (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 *     ?PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@@Z @ 0x18016F688 (-PopulateGestureHandler@ShellGesturesProcessor@@AEAAXAEAUHandlerContext@1@W4InputType@@AEAV-$vec.c)
 * Callees:
 *     ?GetProcessId@DragManagerClientProxy@@QEAA?BIXZ @ 0x18015325C (-GetProcessId@DragManagerClientProxy@@QEAA-BIXZ.c)
 */

char __fastcall ShellGesturesProcessor::IsShellClient<DragManagerClientProxy>(__int64 a1, DragManagerClientProxy *a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 136LL);
  if ( v2 )
    return v2 == DragManagerClientProxy::GetProcessId(a2);
  else
    return *((_BYTE *)a2 + 128);
}
