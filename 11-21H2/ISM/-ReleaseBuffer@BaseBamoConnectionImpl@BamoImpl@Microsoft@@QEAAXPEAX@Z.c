/*
 * XREFs of ?ReleaseBuffer@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAX@Z @ 0x180088634
 * Callers:
 *     ??1?$ThunkArray@I@BamoImpl@Microsoft@@QEAA@XZ @ 0x180087374 (--1-$ThunkArray@I@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z @ 0x180087EA8 (-OnInputConfigChanged@BamoSystemContextEndpointPrincipalImpl@BamoImpl@@QEAAJPEBII@Z.c)
 *     ?OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePayloadPrincipal@@I@Z @ 0x18013776C (-OnInputConfigChanged@BamoSystemContextEndpointProxyImpl@BamoImpl@@QEAAJPEBQEAVBamoInputSpacePay.c)
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
