/*
 * XREFs of ?UpdateSystemCursorControllerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18013CE74
 * Callers:
 *     ?SetSystemCursorController@BamoInputSystemPrincipal@@UEAAXPEAVBamoSystemCursorControllerPrincipal@@@Z @ 0x180052AF0 (-SetSystemCursorController@BamoInputSystemPrincipal@@UEAAXPEAVBamoSystemCursorControllerPrincipa.c)
 * Callees:
 *     ?UpdateSystemCursorControllerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180003970 (-UpdateSystemCursorControllerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStu.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateSystemCursorControllerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateSystemCursorControllerRemoteCache(this, a1);
  return 0LL;
}
