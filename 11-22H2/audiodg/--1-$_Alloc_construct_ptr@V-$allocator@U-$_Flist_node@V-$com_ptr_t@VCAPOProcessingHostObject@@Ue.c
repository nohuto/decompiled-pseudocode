/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x14006B8C8
 * Callers:
 *     _CAPOProcessingHost::GetAudioSystemEffectPropertyChangeNotificationHandler_::_1_::dtor$17 @ 0x14006C765 (_CAPOProcessingHost--GetAudioSystemEffectPropertyChangeNotificationHandler_--_1_--dtor$17.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointPropertyChangeNotificationClient_::_1_::dtor$9 @ 0x14007197F (_CAPOEndpointNotificationsHandler--AddEndpointPropertyChangeNotificationClient_--_1_--dtor$9.c)
 *     _CAPOEndpointNotificationsHandler::AddEndpointVolumeNotificationClient_::_1_::dtor$5 @ 0x140071A52 (_CAPOEndpointNotificationsHandler--AddEndpointVolumeNotificationClient_--_1_--dtor$5.c)
 *     _CAudioSystemEffectsPropertyChangeNotificationsHandler::AddNotificationClient_::_1_::dtor$9 @ 0x140072DD7 (_CAudioSystemEffectsPropertyChangeNotificationsHandler--AddNotificationClient_--_1_--dtor$9.c)
 *     _CDeviceOrientationNotificationsHandler::AddNotificationClient_::_1_::dtor$9 @ 0x140076E3B (_CDeviceOrientationNotificationsHandler--AddNotificationClient_--_1_--dtor$9.c)
 *     _CMicBoostNotificationsHandler::AddNotificationClient_::_1_::dtor$9 @ 0x14007812B (_CMicBoostNotificationsHandler--AddNotificationClient_--_1_--dtor$9.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x10uLL);
}
