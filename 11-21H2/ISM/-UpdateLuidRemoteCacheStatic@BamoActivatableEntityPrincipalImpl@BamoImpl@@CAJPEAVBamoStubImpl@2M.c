/*
 * XREFs of ?UpdateLuidRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18008FC00
 * Callers:
 *     ?SetLuid@BamoActivatableEntityPrincipal@@UEAAXAEBU_LUID@@@Z @ 0x180006040 (-SetLuid@BamoActivatableEntityPrincipal@@UEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ?UpdateLuidRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18008FB28 (-UpdateLuidRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micro.c)
 */

__int64 __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateLuidRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivatableEntityPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateLuidRemoteCache(this, a1);
  return 0LL;
}
