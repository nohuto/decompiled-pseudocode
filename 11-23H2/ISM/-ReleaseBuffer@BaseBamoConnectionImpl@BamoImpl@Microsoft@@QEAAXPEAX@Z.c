/*
 * XREFs of ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x18009F6C0
 * Callers:
 *     ??1?$ThunkArray@I@BamoImpl@Microsoft@@QEAA@XZ @ 0x18009E4D8 (--1-$ThunkArray@I@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z @ 0x18009F0C0 (-OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z.c)
 *     ?StartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEBQEAVBamoAnimationTargetClientPrincipal@@IPEAVBamoDragManagerClientPrincipal@@W4GestureProcessorType@@@Z @ 0x180132B5C (-StartAnimation@BamoGestureServicesProxyImpl@BamoImpl@@QEAAJIPEBQEAVBamoAnimationTargetClientPri.c)
 *     ?OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x180151E3C (-OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePay.c)
 *     ?StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@Z @ 0x1801539E8 (-StartAnimation@BamoGestureServicesPrincipalImpl@BamoImpl@@QEAAJIPEBIIIW4GestureProcessorType@@@.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::ReleaseBuffer(
        Microsoft::BamoImpl::BaseBamoConnectionImpl *this,
        void *a2)
{
  HANDLE ProcessHeap; // rax

  if ( a2 )
  {
    if ( a2 == *((void **)this + 16) )
    {
      *((_BYTE *)this + 136) = 0;
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, a2);
    }
  }
}
