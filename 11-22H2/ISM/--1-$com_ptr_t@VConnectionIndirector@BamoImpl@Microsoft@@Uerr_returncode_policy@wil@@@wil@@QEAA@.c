/*
 * XREFs of ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001B578
 * Callers:
 *     _Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage_::_1_::dtor$1 @ 0x18007F280 (_Microsoft--BamoImpl--ConnectionIndirector--OnItemMessage_--_1_--dtor$1.c)
 *     _BamoControllerNavigationManagerPrincipal::SetEnabled_::_1_::dtor$1 @ 0x18007F2C0 (_BamoControllerNavigationManagerPrincipal--SetEnabled_--_1_--dtor$1.c)
 *     _Microsoft::BamoImpl::InternalLock::InternalLock_::_1_::dtor$0 @ 0x18007F596 (_Microsoft--BamoImpl--InternalLock--InternalLock_--_1_--dtor$0.c)
 *     _Microsoft::BamoImpl::ConnectionIndirector::OnPeerRequestsConnect_::_1_::dtor$1 @ 0x18007F858 (_Microsoft--BamoImpl--ConnectionIndirector--OnPeerRequestsConnect_--_1_--dtor$1.c)
 *     _BamoInputSiteElementProxy::GetInputSiteIdNamespace_::_1_::dtor$1 @ 0x18007FC30 (_BamoInputSiteElementProxy--GetInputSiteIdNamespace_--_1_--dtor$1.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor$7 @ 0x18008016E (_Microsoft--BamoImpl--BaseBamoConnectionImpl--BaseBamoConnectionImpl_--_1_--dtor$7.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Join_::_1_::dtor$4 @ 0x180080226 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Join_--_1_--dtor$4.c)
 *     _ActivationWatcherBamoPrincipal::AddActivatableEntity_::_1_::dtor$12 @ 0x1800811C7 (_ActivationWatcherBamoPrincipal--AddActivatableEntity_--_1_--dtor$12.c)
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$71 @ 0x1800818C0 (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$71.c)
 *     _Microsoft::Bamo::Lock::Lock_::_1_::dtor$0 @ 0x1800B6BEE (_Microsoft--Bamo--Lock--Lock_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000F950 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
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
