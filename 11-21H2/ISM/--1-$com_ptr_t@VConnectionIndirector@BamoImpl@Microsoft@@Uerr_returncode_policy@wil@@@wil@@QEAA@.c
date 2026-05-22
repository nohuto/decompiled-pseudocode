/*
 * XREFs of ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004C8C4
 * Callers:
 *     _BamoControllerNavigationManagerPrincipal::SetEnabled_::_1_::dtor$1 @ 0x180054610 (_BamoControllerNavigationManagerPrincipal--SetEnabled_--_1_--dtor$1.c)
 *     _Microsoft::BamoImpl::ConnectionIndirector::OnPeerRequestsConnect_::_1_::dtor$1 @ 0x1800549D0 (_Microsoft--BamoImpl--ConnectionIndirector--OnPeerRequestsConnect_--_1_--dtor$1.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor$7 @ 0x180055936 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--BaseBamoConnectionImpl_--_1_--dtor$7.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Join_::_1_::dtor$6 @ 0x180055A00 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Join_--_1_--dtor$6.c)
 *     _Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Stub::RemoteInsert_::_1_::dtor$1 @ 0x180056490 (_Microsoft--Bamo--Lib--ISMBamos_AutoBamos--BamoList_ActivatableEntityPrincipal_Stub--RemoteInser.c)
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$87 @ 0x1800578C0 (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$87.c)
 *     _Microsoft::BamoImpl::InternalLock::InternalLock_::_1_::dtor$0 @ 0x180057D50 (_Microsoft--BamoImpl--InternalLock--InternalLock_--_1_--dtor$0.c)
 *     _BamoInputSiteElementProxy::GetInputSiteIdNamespace_::_1_::dtor$1 @ 0x180057E90 (_BamoInputSiteElementProxy--GetInputSiteIdNamespace_--_1_--dtor$1.c)
 *     _Microsoft::Bamo::Lock::Lock_::_1_::dtor$0 @ 0x18008D532 (_Microsoft--Bamo--Lock--Lock_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
        Microsoft::BamoImpl::BamoImplObject **a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BamoImplObject *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    return Microsoft::BamoImpl::BamoImplObject::Release(v4, a2, a3, a4);
  return result;
}
