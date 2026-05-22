/*
 * XREFs of ?OnDockableDeviceAdded@BamoDeviceDockClientProxy@@UEAAJIPEAVBamoDockableDevicePrincipal@@@Z @ 0x1801A0070
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnDockableDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockableDevicePrincipal@@@Z @ 0x1801A00DC (-OnDockableDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockableDevicePrinc.c)
 */

__int64 __fastcall BamoDeviceDockClientProxy::OnDockableDeviceAdded(
        BamoDeviceDockClientProxy *this,
        unsigned int a2,
        struct BamoDockableDevicePrincipal *a3)
{
  BamoDeviceDockClientProxy *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoDeviceDockClientProxyImpl::OnDockableDeviceAdded(
                  (BamoDeviceDockClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
