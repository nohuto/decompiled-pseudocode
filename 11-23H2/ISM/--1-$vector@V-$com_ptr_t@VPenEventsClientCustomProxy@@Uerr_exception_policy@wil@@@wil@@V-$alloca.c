/*
 * XREFs of ??1?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18019BD84
 * Callers:
 *     _DeviceDockServer::DeviceDockServer_::_1_::dtor$1 @ 0x18006E618 (_DeviceDockServer--DeviceDockServer_--_1_--dtor$1.c)
 *     _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$1 @ 0x1801AE858 (_PenEventsDispatcherPrincipal--FireEvents_--_1_--dtor$1.c)
 *     _PenEventsDispatcherPrincipal::FireEvents_::_1_::dtor$4 @ 0x1801AE870 (_PenEventsDispatcherPrincipal--FireEvents_--_1_--dtor$4.c)
 *     _PenEventsDispatcherPrincipal::GetClientsForProcess_::_1_::dtor$0 @ 0x1801AE941 (_PenEventsDispatcherPrincipal--GetClientsForProcess_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::GetShellClients_::_1_::dtor$0 @ 0x1801AEA8E (_PenEventsDispatcherPrincipal--GetShellClients_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::IsTipToGlassRequired_::_1_::dtor$0 @ 0x1801AEC98 (_PenEventsDispatcherPrincipal--IsTipToGlassRequired_--_1_--dtor$0.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x1801AECF4 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 *     _PenEventsDispatcherPrincipal::NotifyHotkeyRegistrationChanged_::_1_::dtor$0 @ 0x1801AEE11 (_PenEventsDispatcherPrincipal--NotifyHotkeyRegistrationChanged_--_1_--dtor$0.c)
 *     _PenEventsDispatcherPrincipal::NotifyTipToGlass_::_1_::dtor$0 @ 0x1801AEEFB (_PenEventsDispatcherPrincipal--NotifyTipToGlass_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18014B5C8 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_poli.c)
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
