/*
 * XREFs of ?UpdateMPCConstantManagerClientRemoteCacheStatic@BamoMPCManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18009BD8C
 * Callers:
 *     ??0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z @ 0x18002BC20 (--0MPCManager@@QEAA@PEAVMPCManagerConnection@@@Z.c)
 *     ?SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrincipal@@@Z @ 0x18009B380 (-SetMPCConstantManagerClient@BamoMPCManagerPrincipal@@UEAAXPEAVBamoMPCConstantManagerClientPrinc.c)
 * Callees:
 *     ?UpdateMPCConstantManagerClientRemoteCache@BamoMPCManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18009BCA8 (-UpdateMPCConstantManagerClientRemoteCache@BamoMPCManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoSt.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::UpdateMPCConstantManagerClientRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoMPCManagerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoMPCManagerPrincipalImpl::UpdateMPCConstantManagerClientRemoteCache(this, a1);
  return 0LL;
}
