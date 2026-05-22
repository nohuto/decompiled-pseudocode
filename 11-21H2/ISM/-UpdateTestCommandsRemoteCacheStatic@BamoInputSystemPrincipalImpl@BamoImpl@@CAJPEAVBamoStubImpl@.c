/*
 * XREFs of ?UpdateTestCommandsRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012240C
 * Callers:
 *     ?SetTestCommands@BamoInputSystemPrincipal@@UEAAXPEAVBamoTestCommandsPrincipal@@@Z @ 0x1800475E0 (-SetTestCommands@BamoInputSystemPrincipal@@UEAAXPEAVBamoTestCommandsPrincipal@@@Z.c)
 * Callees:
 *     ?UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18001BC30 (-UpdateTestCommandsRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mic.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateTestCommandsRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateTestCommandsRemoteCache(this, a1);
  return 0LL;
}
