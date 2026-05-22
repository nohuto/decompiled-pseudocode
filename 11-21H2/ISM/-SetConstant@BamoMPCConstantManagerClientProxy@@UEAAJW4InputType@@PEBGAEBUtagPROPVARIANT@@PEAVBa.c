/*
 * XREFs of ?SetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x18015DBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetConstant@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x18015DC64 (-SetConstant@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGAEBUtagPROPVA.c)
 */

__int64 __fastcall BamoMPCConstantManagerClientProxy::SetConstant(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  Microsoft::BamoImpl::BamoImplObject *v12; // [rsp+40h] [rbp+8h] BYREF

  v8 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v12,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v8) = BamoImpl::BamoMPCConstantManagerClientProxyImpl::SetConstant(v8 + 8, a2, a3, a4, a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v12, v9, v10);
  return (unsigned int)v8;
}
