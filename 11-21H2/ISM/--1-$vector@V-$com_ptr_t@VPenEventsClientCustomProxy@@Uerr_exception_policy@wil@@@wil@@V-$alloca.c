/*
 * XREFs of ??1?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18017CB5C
 * Callers:
 *     _DeviceDockServer::DeviceDockServer_::_1_::dtor$1 @ 0x1800586FC (_DeviceDockServer--DeviceDockServer_--_1_--dtor$1.c)
 *     _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$1 @ 0x180190624 (_PenEventsDispatcherPrincipal--FireEvents_--_1_--dtor$1.c)
 *     _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$4 @ 0x18019063C (_PenEventsDispatcherPrincipal--FireEvents_--_1_--dtor$4.c)
 *     _PenEventsDispatcherPrincipal::GetClientsForProcess_::_1_::dtor$0 @ 0x180190729 (_PenEventsDispatcherPrincipal--GetClientsForProcess_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::GetShellClients_::_1_::dtor$0 @ 0x18019087E (_PenEventsDispatcherPrincipal--GetShellClients_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::IsTipToGlassRequired_::_1_::dtor$0 @ 0x180190A88 (_PenEventsDispatcherPrincipal--IsTipToGlassRequired_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::NotifyHotkeyRegistrationChanged_::_1_::dtor$0 @ 0x180190BFE (_PenEventsDispatcherPrincipal--NotifyHotkeyRegistrationChanged_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::NotifyTipToGlass_::_1_::dtor$0 @ 0x180190CE7 (_PenEventsDispatcherPrincipal--NotifyTipToGlass_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1801310C8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_poli.c)
 */

void __fastcall std::vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>::~vector<wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>>(
      v2,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
