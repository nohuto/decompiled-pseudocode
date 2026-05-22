/*
 * XREFs of ?OnMenuPressed@BamoMPCManagerClientProxy@@UEAAJW4MPCSourceKind@@I@Z @ 0x1801892C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18000B16C (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18000B2C0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?OnMenuPressed@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJW4MPCSourceKind@@I@Z @ 0x18018932C (-OnMenuPressed@BamoMPCManagerClientProxyImpl@BamoImpl@@QEAAJW4MPCSourceKind@@I@Z.c)
 */

__int64 __fastcall BamoMPCManagerClientProxy::OnMenuPressed(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v5) = BamoImpl::BamoMPCManagerClientProxyImpl::OnMenuPressed(v5 + 8, a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v9, v6, v7);
  return (unsigned int)v5;
}
