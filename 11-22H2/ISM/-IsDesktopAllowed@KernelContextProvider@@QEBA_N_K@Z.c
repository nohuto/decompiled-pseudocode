/*
 * XREFs of ?IsDesktopAllowed@KernelContextProvider@@QEBA_N_K@Z @ 0x180124434
 * Callers:
 *     ??$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerClientProxy@@@Z @ 0x180074180 (--$ShouldSelectClient@VDragManagerClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVDragManagerCli.c)
 *     ??$ShouldSelectClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesturesClientProxy@@@Z @ 0x1800741CC (--$ShouldSelectClient@VShellGesturesClientProxy@@@ShellGesturesProcessor@@AEAA_NPEAVShellGesture.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180074B34 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall KernelContextProvider::IsDesktopAllowed(KernelContextProvider *this, __int64 a2)
{
  __int64 v2; // r8
  char result; // al

  v2 = *((_QWORD *)this + 16);
  result = 0;
  if ( !v2 || v2 == a2 )
    return 1;
  return result;
}
