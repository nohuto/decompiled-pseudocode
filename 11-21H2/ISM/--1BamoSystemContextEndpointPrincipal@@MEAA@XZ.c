/*
 * XREFs of ??1BamoSystemContextEndpointPrincipal@@MEAA@XZ @ 0x180087434
 * Callers:
 *     _PenEventsDispatcherPrincipal::PenEventsDispatcherPrincipal_::_1_::dtor$0 @ 0x180055D02 (_PenEventsDispatcherPrincipal--PenEventsDispatcherPrincipal_--_1_--dtor$0.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$0 @ 0x1800566BE (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$0.c)
 *     _DeviceDockServer::DeviceDockServer_::_1_::dtor$0 @ 0x1800586EA (_DeviceDockServer--DeviceDockServer_--_1_--dtor$0.c)
 *     _SystemCursorController2::SystemCursorController2_::_1_::dtor$0 @ 0x1800587D2 (_SystemCursorController2--SystemCursorController2_--_1_--dtor$0.c)
 *     _SystemContextEndpoint::SystemContextEndpoint_::_1_::dtor$0 @ 0x18008726E (_SystemContextEndpoint--SystemContextEndpoint_--_1_--dtor$0.c)
 *     _AsyncPVPrincipal::AsyncPVPrincipal_::_1_::dtor$2 @ 0x18016E5AB (_AsyncPVPrincipal--AsyncPVPrincipal_--_1_--dtor$2.c)
 *     _AsyncStringPrincipal::AsyncStringPrincipal_::_1_::dtor$2 @ 0x18016F0B3 (_AsyncStringPrincipal--AsyncStringPrincipal_--_1_--dtor$2.c)
 *     _AsyncHRESULTPrincipal::AsyncHRESULTPrincipal_::_1_::dtor$1 @ 0x18016FA53 (_AsyncHRESULTPrincipal--AsyncHRESULTPrincipal_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
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
