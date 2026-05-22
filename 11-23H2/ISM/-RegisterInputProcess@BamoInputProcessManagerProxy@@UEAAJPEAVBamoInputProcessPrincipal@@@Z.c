/*
 * XREFs of ?RegisterInputProcess@BamoInputProcessManagerProxy@@UEAAJPEAVBamoInputProcessPrincipal@@@Z @ 0x1801303D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?RegisterInputProcess@BamoInputProcessManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoInputProcessPrincipal@@@Z @ 0x18013042C (-RegisterInputProcess@BamoInputProcessManagerProxyImpl@BamoImpl@@QEAAJPEAVBamoInputProcessPrinci.c)
 */

__int64 __fastcall BamoInputProcessManagerProxy::RegisterInputProcess(
        BamoInputProcessManagerProxy *this,
        struct BamoInputProcessPrincipal *a2)
{
  BamoInputProcessManagerProxy *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoInputProcessManagerProxyImpl::RegisterInputProcess(
                  (BamoInputProcessManagerProxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
