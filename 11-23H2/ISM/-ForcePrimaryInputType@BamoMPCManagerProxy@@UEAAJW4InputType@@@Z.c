/*
 * XREFs of ?ForcePrimaryInputType@BamoMPCManagerProxy@@UEAAJW4InputType@@@Z @ 0x180178E80
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000ACFC (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000AE50 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?ForcePrimaryInputType@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJW4InputType@@@Z @ 0x180178EDC (-ForcePrimaryInputType@BamoMPCManagerProxyImpl@BamoImpl@@QEAAJW4InputType@@@Z.c)
 */

__int64 __fastcall BamoMPCManagerProxy::ForcePrimaryInputType(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  Microsoft::BamoImpl::BamoImplObject *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v7,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v3) = BamoImpl::BamoMPCManagerProxyImpl::ForcePrimaryInputType(v3 + 8, a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v7, v4, v5);
  return (unsigned int)v3;
}
