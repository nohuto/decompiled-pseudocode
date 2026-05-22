/*
 * XREFs of ??1?$com_ptr_t@VConnectionIndirector@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001AC48
 * Callers:
 *     _Microsoft::BamoImpl::ConnectionIndirector::OnItemMessage_::_1_::dtor$1 @ 0x18006B7A0 (_Microsoft--BamoImpl--ConnectionIndirector--OnItemMessage_--_1_--dtor$1.c)
 *     _BamoControllerNavigationManagerPrincipal::SetEnabled_::_1_::dtor$1 @ 0x18006B7E0 (_BamoControllerNavigationManagerPrincipal--SetEnabled_--_1_--dtor$1.c)
 *     _Microsoft::BamoImpl::InternalLock::InternalLock_::_1_::dtor$0 @ 0x18006BAB6 (_Microsoft--BamoImpl--InternalLock--InternalLock_--_1_--dtor$0.c)
 *     _Microsoft::BamoImpl::ConnectionIndirector::OnPeerRequestsConnect_::_1_::dtor$1 @ 0x18006BD78 (_Microsoft--BamoImpl--ConnectionIndirector--OnPeerRequestsConnect_--_1_--dtor$1.c)
 *     _BamoInputSiteElementProxy::GetInputSiteIdNamespace_::_1_::dtor$1 @ 0x18006C0A0 (_BamoInputSiteElementProxy--GetInputSiteIdNamespace_--_1_--dtor$1.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::BaseBamoConnectionImpl_::_1_::dtor$7 @ 0x18006C5F1 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--BaseBamoConnectionImpl_--_1_--dtor$7.c)
 *     _Microsoft::BamoImpl::BaseBamoConnectionImpl::Join_::_1_::dtor$4 @ 0x18006C6A9 (_Microsoft--BamoImpl--BaseBamoConnectionImpl--Join_--_1_--dtor$4.c)
 *     _ActivationWatcherBamoPrincipal::AddActivatableEntity_::_1_::dtor$12 @ 0x18006D079 (_ActivationWatcherBamoPrincipal--AddActivatableEntity_--_1_--dtor$12.c)
 *     _DWMInputRouter::UpdateForegroundTarget_::_1_::dtor$71 @ 0x18006D740 (_DWMInputRouter--UpdateForegroundTarget_--_1_--dtor$71.c)
 *     _Microsoft::Bamo::Lock::Lock_::_1_::dtor$0 @ 0x1800A414E (_Microsoft--Bamo--Lock--Lock_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

unsigned int __fastcall wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
        Microsoft::BamoImpl::BamoImplObject **a1)
{
  Microsoft::BamoImpl::BamoImplObject *v1; // rcx
  unsigned int result; // eax

  v1 = *a1;
  if ( v1 )
    return Microsoft::BamoImpl::BamoImplObject::Release(v1);
  return result;
}
