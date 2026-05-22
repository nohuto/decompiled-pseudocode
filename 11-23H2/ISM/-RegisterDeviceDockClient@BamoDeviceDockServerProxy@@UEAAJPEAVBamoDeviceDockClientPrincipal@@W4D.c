/*
 * XREFs of ?RegisterDeviceDockClient@BamoDeviceDockServerProxy@@UEAAJPEAVBamoDeviceDockClientPrincipal@@W4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18012F970
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?RegisterDeviceDockClient@BamoDeviceDockServerProxyImpl@BamoImpl@@QEAAJPEAVBamoDeviceDockClientPrincipal@@W4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18012F9DC (-RegisterDeviceDockClient@BamoDeviceDockServerProxyImpl@BamoImpl@@QEAAJPEAVBamoDeviceDockClientP.c)
 */

__int64 __fastcall BamoDeviceDockServerProxy::RegisterDeviceDockClient(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v5) = BamoImpl::BamoDeviceDockServerProxyImpl::RegisterDeviceDockClient(v5 + 8, a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
