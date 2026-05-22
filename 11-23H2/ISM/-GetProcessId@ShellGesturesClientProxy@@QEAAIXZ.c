/*
 * XREFs of ?GetProcessId@ShellGesturesClientProxy@@QEAAIXZ @ 0x18016EED4
 * Callers:
 *     ??$IsShellClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClientProxy@@@Z @ 0x180061838 (--$IsShellClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClie.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180061DD8 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellGesturesClientProxy::GetProcessId(ShellGesturesClientProxy *this)
{
  return *(unsigned int *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL))
                         + 32);
}
