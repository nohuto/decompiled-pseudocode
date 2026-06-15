/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1400388DC
 * Callers:
 *     ?RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140072628 (-RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@.c)
 *     ?RemoveNotificationClients@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140073408 (-RemoveNotificationClients@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOP.c)
 *     ?RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400771D8 (-RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObj.c)
 *     ?RemoveNotificationClient@CMicBoostNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400785C0 (-RemoveNotificationClient@CMicBoostNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>::_Flist_node_remove_op::~_Flist_node_remove_op(
        __int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(v1 + 1);
      std::_Deallocate<16,0>(v1, 0x10uLL);
      v1 = v2;
    }
    while ( v2 );
  }
}
