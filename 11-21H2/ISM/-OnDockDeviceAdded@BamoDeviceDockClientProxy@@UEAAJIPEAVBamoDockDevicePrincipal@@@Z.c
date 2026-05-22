/*
 * XREFs of ?OnDockDeviceAdded@BamoDeviceDockClientProxy@@UEAAJIPEAVBamoDockDevicePrincipal@@@Z @ 0x180180870
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnDockDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockDevicePrincipal@@@Z @ 0x1801808DC (-OnDockDeviceAdded@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIPEAVBamoDockDevicePrincipal@@@Z.c)
 */

__int64 __fastcall BamoDeviceDockClientProxy::OnDockDeviceAdded(
        BamoDeviceDockClientProxy *this,
        unsigned int a2,
        struct BamoDockDevicePrincipal *a3)
{
  BamoDeviceDockClientProxy *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoDeviceDockClientProxyImpl::OnDockDeviceAdded(
                  (BamoDeviceDockClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v9, v6, v7);
  return (unsigned int)v5;
}
