/*
 * XREFs of ?terminate@details@gsl@@YAXXZ @ 0x1800B27E0
 * Callers:
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800675E8 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z @ 0x180067818 (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_N@Z.c)
 *     ?FindDCompTargetIdForPoint@GestureServices@@AEAA?AV?$tuple@V?$optional@UtagCOMPOSITION_TARGET_ID@@@std@@PEBG@std@@UtagPOINT@@IPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x180072D8C (-FindDCompTargetIdForPoint@GestureServices@@AEAA-AV-$tuple@V-$optional@UtagCOMPOSITION_TARGET_ID.c)
 *     ?ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV?$optional@ULastUpData@ShellEdgyRecognizer@@@std@@@Z @ 0x18017E6BC (-ProcessInput@ShellEdgyRecognizer@@QEAAXPEBUPointerInputInfo@@AEAV-$optional@ULastUpData@ShellEd.c)
 * Callees:
 *     <none>
 */

void __fastcall gsl::details::terminate(gsl::details *this, __int64 a2, __int64 a3, __int64 a4)
{
  _o_terminate(this, a2, a3, a4);
  __debugbreak();
  JUMPOUT(0x1800B27F1LL);
}
