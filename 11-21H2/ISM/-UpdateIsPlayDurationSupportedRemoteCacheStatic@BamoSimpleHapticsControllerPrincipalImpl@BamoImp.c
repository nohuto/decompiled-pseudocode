/*
 * XREFs of ?UpdateIsPlayDurationSupportedRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18018F68C
 * Callers:
 *     ?SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z @ 0x18018ECE0 (-SetIsPlayDurationSupported@BamoSimpleHapticsControllerPrincipal@@UEAAX_N@Z.c)
 * Callees:
 *     ?UpdateIsPlayDurationSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018F5C8 (-UpdateIsPlayDurationSupportedRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEA.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsPlayDurationSupportedRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateIsPlayDurationSupportedRemoteCache(this, a1);
  return 0LL;
}
