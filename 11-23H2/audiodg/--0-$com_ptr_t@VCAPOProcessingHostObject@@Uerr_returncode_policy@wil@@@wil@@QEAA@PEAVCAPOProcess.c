/*
 * XREFs of ??0?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCAPOProcessingHostObject@@@Z @ 0x1400065E8
 * Callers:
 *     ??$?0AEAPEAUIAudioProcessingObject@@AEAV?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEAPEAUIAudioProcessingObject@@AEAV?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x14000655C (--$-0AEAPEAUIAudioProcessingObject@@AEAV-$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_p.c)
 *     ?AddEndpointPropertyChangeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140071868 (-AddEndpointPropertyChangeNotificationClient@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProc.c)
 *     ?AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV?$forward_list@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAPOProcessingHostObject@@@Z @ 0x140071978 (-AddEndpointVolumeNotificationClient@CAPOEndpointNotificationsHandler@@AEAAXAEAV-$forward_list@V.c)
 *     ?RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400725D8 (-RemoveNotificationClients@CAPOEndpointNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@.c)
 *     ?AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140072C98 (-AddNotificationClient@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProce.c)
 *     ?RemoveNotificationClients@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x1400733B8 (-RemoveNotificationClients@CAudioSystemEffectsPropertyChangeNotificationsHandler@@QEAAXPEAVCAPOP.c)
 *     ?AddNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140076CF8 (-AddNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject.c)
 *     ?RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140077188 (-RemoveNotificationClient@CDeviceOrientationNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObj.c)
 *     ?AddNotificationClient@CMicBoostNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x140077FE8 (-AddNotificationClient@CMicBoostNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z.c)
 *     ?RemoveNotificationClient@CMicBoostNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z @ 0x140078570 (-RemoveNotificationClient@CMicBoostNotificationsHandler@@QEAAXPEAVCAPOProcessingHostObject@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
