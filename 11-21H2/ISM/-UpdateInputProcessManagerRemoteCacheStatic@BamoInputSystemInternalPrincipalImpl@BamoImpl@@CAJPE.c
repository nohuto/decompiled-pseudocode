/*
 * XREFs of ?UpdateInputProcessManagerRemoteCacheStatic@BamoInputSystemInternalPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180123210
 * Callers:
 *     ??0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180036BC4 (--0InputSystemInternal@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?SetInputProcessManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoInputProcessManagerPrincipal@@@Z @ 0x180122F30 (-SetInputProcessManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoInputProcessManagerPrinci.c)
 * Callees:
 *     ?UpdateInputProcessManagerRemoteCache@BamoInputSystemInternalPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18012312C (-UpdateInputProcessManagerRemoteCache@BamoInputSystemInternalPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateInputProcessManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemInternalPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateInputProcessManagerRemoteCache(this, a1);
  return 0LL;
}
