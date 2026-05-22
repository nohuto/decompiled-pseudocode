/*
 * XREFs of ?UpdateInterfacePathRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18019F314
 * Callers:
 *     ?SetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x18019E998 (-SetInterfacePath@BamoDockableDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?UpdateInterfacePathRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019F254 (-UpdateInterfacePathRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 */

__int64 __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::UpdateInterfacePathRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDockableDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDockableDevicePrincipalImpl::UpdateInterfacePathRemoteCache(this, a1);
  return 0LL;
}
