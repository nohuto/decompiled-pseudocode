/*
 * XREFs of ?SetAllConstantsForInputTypeToDefault@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x18015D870
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetAllConstantsForInputTypeToDefault@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEAVBamoAsyncHRESULTPrincipal@@@Z @ 0x18015D8DC (-SetAllConstantsForInputTypeToDefault@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4Inp.c)
 */

__int64 __fastcall BamoMPCConstantManagerClientProxy::SetAllConstantsForInputTypeToDefault(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  Microsoft::BamoImpl::BamoImplObject *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v9,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v5) = BamoImpl::BamoMPCConstantManagerClientProxyImpl::SetAllConstantsForInputTypeToDefault(v5 + 8, a2, a3);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v9, v6, v7);
  return (unsigned int)v5;
}
