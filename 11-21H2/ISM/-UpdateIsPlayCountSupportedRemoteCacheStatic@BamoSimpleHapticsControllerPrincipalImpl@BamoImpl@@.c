/*
 * XREFs of ?UpdateIsPlayCountSupportedRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18018F59C
 * Callers:
 *     ?SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018EC20 (-SetIsPlayCountSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?UpdateIsPlayCountSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018F4DC (-UpdateIsPlayCountSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXP.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsPlayCountSupportedRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsPlayCountSupportedRemoteCache(this, a1);
  return 0LL;
}
