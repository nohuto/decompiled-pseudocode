/*
 * XREFs of ?IsShellClient@GestureServices@@AEBA_NPEAVDragManagerClientProxy@@@Z @ 0x180060BC4
 * Callers:
 *     ?UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180002290 (-UnregisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KPEAVBamoDragMa.c)
 *     ?RegisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@4567@PEAVBamoDragManagerClientProxy@@@Z @ 0x18001A150 (-RegisterGestureDragClient@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@_KW4InputGestureSo.c)
 *     ?ApproveProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDragManagerClientProxy@@@Z @ 0x180040F60 (-ApproveProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDr.c)
 *     ?RevokeProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDragManagerClientProxy@@@Z @ 0x180153910 (-RevokeProcessesForAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@PEBIIPEAVBamoDra.c)
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180153CB0 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 *     ?OnDisconnected@DragManagerClientProxy@@MEAAJXZ @ 0x180155750 (-OnDisconnected@DragManagerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?GetProcessId@DragManagerClientProxy@@QEAA?BIXZ @ 0x18015325C (-GetProcessId@DragManagerClientProxy@@QEAA-BIXZ.c)
 */

bool __fastcall GestureServices::IsShellClient(GestureServices *this, struct DragManagerClientProxy *a2)
{
  int v2; // ebx

  v2 = *(_DWORD *)(*((_QWORD *)this + 12) + 136LL);
  if ( v2 )
    return DragManagerClientProxy::GetProcessId(a2) == v2;
  else
    return *((_BYTE *)a2 + 128);
}
