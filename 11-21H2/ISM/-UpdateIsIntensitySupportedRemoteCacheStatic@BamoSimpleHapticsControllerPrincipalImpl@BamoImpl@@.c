/*
 * XREFs of ?UpdateIsIntensitySupportedRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18018F4B0
 * Callers:
 *     ?SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018EB60 (-SetIsIntensitySupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?UpdateIsIntensitySupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018F3EC (-UpdateIsIntensitySupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXP.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsIntensitySupportedRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsIntensitySupportedRemoteCache(this, a1);
  return 0LL;
}
