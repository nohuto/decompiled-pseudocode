/*
 * XREFs of ??1BamoSystemContextEndpointPrincipal@@MEAA@XZ @ 0x1800B0ACC
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$0 @ 0x1800802D1 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$0.c)
 *     _DeviceDockServer::DeviceDockServer_::_1_::dtor$0 @ 0x1800803BD (_DeviceDockServer--DeviceDockServer_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$0 @ 0x180080BCB (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$0.c)
 *     _SystemContextEndpoint::SystemContextEndpoint_::_1_::dtor$0 @ 0x1800B0982 (_SystemContextEndpoint--SystemContextEndpoint_--_1_--dtor$0.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$2 @ 0x18019BAAB (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$2.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$2 @ 0x18019C643 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$2.c)
 *     _AsyncHRESULTPrincipal::AsyncHRESULTPrincipal_::_1_::dtor$1 @ 0x18019D063 (_AsyncHRESULTPrincipal--AsyncHRESULTPrincipal_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000F950 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
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
