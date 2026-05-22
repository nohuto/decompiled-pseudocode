/*
 * XREFs of ?Actuate@BamoActuationClientProxy@@UEAAJAEBUtagPOINT@@@Z @ 0x1801067A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?Actuate@BamoActuationClientProxyImpl@BamoImpl@@QEAAJAEBUtagPOINT@@@Z @ 0x1801067FC (-Actuate@BamoActuationClientProxyImpl@BamoImpl@@QEAAJAEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall BamoActuationClientProxy::Actuate(BamoActuationClientProxy *this, const struct tagPOINT *a2)
{
  BamoActuationClientProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoActuationClientProxyImpl::Actuate((BamoActuationClientProxy *)((char *)v3 + 8), a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v7, v4, v5);
  return (unsigned int)v3;
}
