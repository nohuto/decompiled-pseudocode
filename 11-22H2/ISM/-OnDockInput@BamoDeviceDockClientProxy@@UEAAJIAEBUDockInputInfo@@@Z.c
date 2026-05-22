/*
 * XREFs of ?OnDockInput@BamoDeviceDockClientProxy@@UEAAJIAEBUDockInputInfo@@@Z @ 0x1801ADE60
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnDockInput@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIAEBUDockInputInfo@@@Z @ 0x1801ADECC (-OnDockInput@BamoDeviceDockClientProxyImpl@BamoImpl@@QEAAJIAEBUDockInputInfo@@@Z.c)
 */

__int64 __fastcall BamoDeviceDockClientProxy::OnDockInput(
        BamoDeviceDockClientProxy *this,
        unsigned int a2,
        const struct DockInputInfo *a3)
{
  BamoDeviceDockClientProxy *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v5) = BamoImpl::BamoDeviceDockClientProxyImpl::OnDockInput(
                  (BamoDeviceDockClientProxy *)((char *)v5 + 8),
                  a2,
                  a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
