/*
 * XREFs of ?RegisterInputAttemptedClient@BamoInputDeliveryServerProxy@@UEAAJPEAVBamoInputAttemptedDeliveryClientPrincipal@@@Z @ 0x180130160
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?RegisterInputAttemptedClient@BamoInputDeliveryServerProxyImpl@BamoImpl@@QEAAJPEAVBamoInputAttemptedDeliveryClientPrincipal@@@Z @ 0x1801301BC (-RegisterInputAttemptedClient@BamoInputDeliveryServerProxyImpl@BamoImpl@@QEAAJPEAVBamoInputAttem.c)
 */

__int64 __fastcall BamoInputDeliveryServerProxy::RegisterInputAttemptedClient(
        BamoInputDeliveryServerProxy *this,
        struct BamoInputAttemptedDeliveryClientPrincipal *a2)
{
  BamoInputDeliveryServerProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoInputDeliveryServerProxyImpl::RegisterInputAttemptedClient(
                  (BamoInputDeliveryServerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
