/*
 * XREFs of ?UpdateScaleOverrideRemoteCacheStatic@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180102F94
 * Callers:
 *     ?SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z @ 0x1800537E0 (-SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z.c)
 * Callees:
 *     ?UpdateScaleOverrideRemoteCache@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180102ED0 (-UpdateScaleOverrideRemoteCache@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoS.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerPrincipalImpl::UpdateScaleOverrideRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoSystemCursorControllerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoSystemCursorControllerPrincipalImpl::UpdateScaleOverrideRemoteCache(this, a1);
  return 0LL;
}
