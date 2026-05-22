/*
 * XREFs of ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x18011E818
 * Callers:
 *     ?CreateDataSource@AnimationDataProvider@@UEBA?AV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I@Z @ 0x18011E170 (-CreateDataSource@AnimationDataProvider@@UEBA-AV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@I.c)
 *     ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x18011E5E0 (-GetBamoDataSourceStub@AnimationDataProvider@@UEBA-AV-$ComPtr@VBamoDataSourceStub@@@WRL@Microsof.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct Microsoft::BamoImpl::BamoStubImpl *__fastcall Microsoft::BamoImpl::BamoPrincipalImpl::GetStub(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer *a2)
{
  __int64 v3; // rax
  __int64 i; // r8

  v3 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)a2 + 8LL))(a2);
  for ( i = *((_QWORD *)this + 4);
        i && *(_DWORD *)(*(_QWORD *)(i + 32) + 36LL) != *(_DWORD *)(v3 + 36);
        i = *(_QWORD *)(i + 40) )
  {
    ;
  }
  if ( i )
    return (struct Microsoft::BamoImpl::BamoStubImpl *)(-(__int64)(*(_BYTE *)(i + 56) != 0) & i);
  return (struct Microsoft::BamoImpl::BamoStubImpl *)i;
}
