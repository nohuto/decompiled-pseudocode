/*
 * XREFs of ?ReleaseStubsFromPeerList@BamoStubImpl@BamoImpl@Microsoft@@SAXPEAV123@@Z @ 0x18016DEF8
 * Callers:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18016CE4C (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18016D1D4 (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::BamoImpl::BamoStubImpl::ReleaseStubsFromPeerList(
        struct Microsoft::BamoImpl::BamoStubImpl *a1)
{
  struct Microsoft::BamoImpl::BamoStubImpl *v1; // rbx

  if ( a1 )
  {
    do
    {
      v1 = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)a1 + 6);
      *((_QWORD *)a1 + 6) = 0LL;
      (*(void (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a1 + 8LL))(a1);
      a1 = v1;
    }
    while ( v1 );
  }
}
