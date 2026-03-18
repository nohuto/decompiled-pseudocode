/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0003AE0
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C00959B0 (VidSchiSubmitPagingCommand.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0095CE0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchiCheckNodeTimeout @ 0x1C0097B40 (VidSchiCheckNodeTimeout.c)
 *     VidSchCreateSystemDevices @ 0x1C00B80AC (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00F34CC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00F35F0 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00F38D0 (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00F4A80 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00F5050 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00F61F8 (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00F6300 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 632);
  if ( a2 < *(_DWORD *)(a1 + 704) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 6LL);
}
