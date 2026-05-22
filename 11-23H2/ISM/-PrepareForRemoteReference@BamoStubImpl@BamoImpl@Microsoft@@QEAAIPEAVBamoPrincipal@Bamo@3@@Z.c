/*
 * XREFs of ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800A27C4
 * Callers:
 *     ?RemoteReplace@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800A2C5C (-RemoteReplace@BamoList_ActivatableEntityPrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo.c)
 *     ?ActivationRequested@BamoActivationWatcherStubImpl@BamoImpl@@QEAAJPEAVBamoActivatableEntityPrincipal@@0@Z @ 0x1800A442C (-ActivationRequested@BamoActivationWatcherStubImpl@BamoImpl@@QEAAJPEAVBamoActivatableEntityPrinc.c)
 *     ?AddDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18010E82C (-AddDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 *     ?RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x18011276C (-RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 *     ?RemoteInsert@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x1801A5CBC (-RemoteInsert@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsof.c)
 *     ?RemoteReplace@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@QEAAJIPEAVBamoPenDevicePrincipal@@@Z @ 0x1801A5F9C (-RemoteReplace@BamoList_PenDevicePrincipal_StubImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microso.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoStubImpl::PrepareForRemoteReference(
        struct Microsoft::BamoImpl::BaseBamoPeerImpl **this,
        struct Microsoft::Bamo::BamoPrincipal *a2)
{
  Microsoft::BamoImpl::BamoPrincipalImpl *v3; // rax

  v3 = (Microsoft::BamoImpl::BamoPrincipalImpl *)(*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoPrincipal *))(*(_QWORD *)a2 + 32LL))(a2);
  return Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(v3, this[4]);
}
