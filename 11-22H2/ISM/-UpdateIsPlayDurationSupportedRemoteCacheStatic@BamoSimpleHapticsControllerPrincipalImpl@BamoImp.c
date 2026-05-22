/*
 * XREFs of ?UpdateIsPlayDurationSupportedRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801BB9B4
 * Callers:
 *     ?SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x1801BB070 (-SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?UpdateIsPlayDurationSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801BB8F8 (-UpdateIsPlayDurationSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEA.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsPlayDurationSupportedRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsPlayDurationSupportedRemoteCache(this, a1);
  return 0LL;
}
