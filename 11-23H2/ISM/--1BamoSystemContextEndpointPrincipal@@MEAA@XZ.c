/*
 * XREFs of ??1BamoSystemContextEndpointPrincipal@@MEAA@XZ @ 0x18009E588
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$0 @ 0x18006DCA8 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$0.c)
 *     _DeviceDockServer::DeviceDockServer_::_1_::dtor$0 @ 0x18006DD94 (_DeviceDockServer--DeviceDockServer_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$0 @ 0x18006E54A (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$0.c)
 *     _SystemContextEndpoint::SystemContextEndpoint_::_1_::dtor$0 @ 0x18009E432 (_SystemContextEndpoint--SystemContextEndpoint_--_1_--dtor$0.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$2 @ 0x18018DC9B (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$2.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$2 @ 0x18018E833 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$2.c)
 *     _AsyncHRESULTPrincipal::AsyncHRESULTPrincipal_::_1_::dtor$1 @ 0x18018F253 (_AsyncHRESULTPrincipal--AsyncHRESULTPrincipal_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

void __fastcall BamoSystemContextEndpointPrincipal::~BamoSystemContextEndpointPrincipal(
        BamoSystemContextEndpointPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoImplObject *v4; // rcx

  v4 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v4 )
    Microsoft::BamoImpl::BamoImplObject::Release(v4, a2, a3, a4);
}
