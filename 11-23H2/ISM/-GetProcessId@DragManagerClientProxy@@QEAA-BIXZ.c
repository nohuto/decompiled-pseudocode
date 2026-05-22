/*
 * XREFs of ?GetProcessId@DragManagerClientProxy@@QEAA?BIXZ @ 0x18015325C
 * Callers:
 *     ?IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z @ 0x180060BC4 (-IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z.c)
 *     ??$IsShellClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180061800 (--$IsShellClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientPr.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180061DD8 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180153CB0 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DragManagerClientProxy::GetProcessId(DragManagerClientProxy *this)
{
  return *(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL))
                         + 32);
}
