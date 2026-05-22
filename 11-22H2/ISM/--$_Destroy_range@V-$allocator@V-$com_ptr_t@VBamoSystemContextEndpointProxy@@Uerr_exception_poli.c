/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoSystemContextEndpointProxy@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1801598A8
 * Callers:
 *     _std::vector_wil::com_ptr_t_BamoSystemContextEndpointProxy_wil::err_exception_policy__std::allocator_wil::com_ptr_t_BamoSystemContextEndpointProxy_wil::err_exception_policy_____::_Emplace_reallocate_BamoSystemContextEndpointProxy___&__::_1_::catch$1 @ 0x180159A0A (_std--vector_wil--com_ptr_t_BamoSystemContextEndpointProxy_wil--err_exception_policy__std--alloc.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180159CD8 (--$_Uninitialized_move@PEAV-$com_ptr_t@VBamoDeviceDockClientProxy@@Uerr_returncode_policy@wil@@@.c)
 *     ??_ESystemContextManager@@UEAAPEAXI@Z @ 0x18015A670 (--_ESystemContextManager@@UEAAPEAXI@Z.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18015FA28 (-_Change_array@-$vector@V-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wi.c)
 *     _std::vector_wil::com_ptr_t_BamoDeviceDockClientProxy_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_BamoDeviceDockClientProxy_wil::err_returncode_policy_____::_Emplace_reallocate_wil::com_ptr_t_BamoDeviceDockClientProxy_wil::err_returncode_policy____::_1_::catch$4 @ 0x1801A944E (_std--vector_wil--com_ptr_t_BamoDeviceDockClientProxy_wil--err_returncode_policy__std--allocator.c)
 *     ??1?$vector@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1801A9D64 (--1-$vector@V-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 *     ??1DeviceDockServer@@UEAA@XZ @ 0x1801A9DAC (--1DeviceDockServer@@UEAA@XZ.c)
 *     _std::vector_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__std::allocator_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__const_&__::_1_::catch$1 @ 0x1801BBE13 (_std--vector_wil--com_ptr_t_PenEventsClientCustomProxy_wil--err_exception_policy__std--allocator.c)
 *     ?FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V?$function@$$A6A_NV?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@_N@Z@std@@@Z @ 0x1801BC65C (-FireEvents@PenEventsDispatcherPrincipal@@AEAAXW4RoutingPolicy@Input@Devices@Internal@Windows@@V.c)
 *     ?IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ @ 0x1801BCBD8 (-IsTipToGlassRequired@PenEventsDispatcherPrincipal@@QEAA_NXZ.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x1801BCCD4 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 *     ?NotifyTipToGlass@PenEventsDispatcherPrincipal@@QEAAXI@Z @ 0x1801BCE04 (-NotifyTipToGlass@PenEventsDispatcherPrincipal@@QEAAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18005582C (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<BamoSystemContextEndpointProxy,wil::err_exception_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
