/*
 * XREFs of ?GetConstant@BamoMPCConstantManagerClientProxy@@UEAAJW4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Principal@@@Z @ 0x18015A040
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180019740 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180019970 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?GetConstant@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAVBamoAsyncResult_PROPVARIANT_Principal@@@Z @ 0x18015A0B8 (-GetConstant@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAVBamoAsync.c)
 */

__int64 __fastcall BamoMPCConstantManagerClientProxy::GetConstant(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  Microsoft::BamoImpl::BamoImplObject *v11; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v11,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v7) = BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetConstant(v7 + 8, a2, a3, a4);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v11, v8, v9);
  return (unsigned int)v7;
}
