/*
 * XREFs of ?UpdateSystemContextManagerRemoteCacheStatic@BamoInputSystemInternalPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18013DBAC
 * Callers:
 *     ?SetSystemContextManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoSystemContextManagerPrincipal@@@Z @ 0x180031620 (-SetSystemContextManager@BamoInputSystemInternalPrincipal@@UEAAXPEAVBamoSystemContextManagerPrin.c)
 * Callees:
 *     ?UpdateSystemContextManagerRemoteCache@BamoInputSystemInternalPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18013DAD4 (-UpdateSystemContextManagerRemoteCache@BamoInputSystemInternalPrincipalImpl@BamoImpl@@AEAAXPEAVB.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateSystemContextManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemInternalPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateSystemContextManagerRemoteCache(this, a1);
  return 0LL;
}
