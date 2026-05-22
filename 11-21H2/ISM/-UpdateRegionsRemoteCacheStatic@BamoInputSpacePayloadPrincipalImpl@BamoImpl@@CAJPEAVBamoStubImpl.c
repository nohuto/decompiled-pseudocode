/*
 * XREFs of ?UpdateRegionsRemoteCacheStatic@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180136FD0
 * Callers:
 *     ?SetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAJPEBUINPUT_SPACE_REGION@@I@Z @ 0x180136D08 (-SetRegions@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@QEAAJPEBUINPUT_SPACE_REGION@@I@Z.c)
 * Callees:
 *     ?UpdateRegionsRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180136F08 (-UpdateRegionsRemoteCache@BamoInputSpacePayloadPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mi.c)
 */

__int64 __fastcall BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateRegionsRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSpacePayloadPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoInputSpacePayloadPrincipalImpl::UpdateRegionsRemoteCache(this, a1);
  return 0LL;
}
