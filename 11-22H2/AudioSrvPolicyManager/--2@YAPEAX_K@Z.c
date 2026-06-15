/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x18000CCF0
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000ADE0 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x18000EBE0 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x180013180 (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ??0?$unordered_map@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180014F48 (--0-$unordered_map@KV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@U-$hash@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180016E5C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?4VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@?$shared_ptr@VDuckingDescriptor@@@std@@QEAAAEAV01@$$QEAV?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@1@@Z @ 0x18001F550 (--$-4VDuckingDescriptor@@U-$default_delete@VDuckingDescriptor@@@std@@@-$shared_ptr@VDuckingDescr.c)
 *     ??$make_shared@VDuckingDescriptor@@MHH@std@@YA?AV?$shared_ptr@VDuckingDescriptor@@@0@$$QEAM$$QEAH1@Z @ 0x18001FE2C (--$make_shared@VDuckingDescriptor@@MHH@std@@YA-AV-$shared_ptr@VDuckingDescriptor@@@0@$$QEAM$$QEA.c)
 *     ??$make_unique@VDuckingDescriptor@@MHH$0A@@std@@YA?AV?$unique_ptr@VDuckingDescriptor@@U?$default_delete@VDuckingDescriptor@@@std@@@0@$$QEAM$$QEAH1@Z @ 0x18001FED4 (--$make_unique@VDuckingDescriptor@@MHH$0A@@std@@YA-AV-$unique_ptr@VDuckingDescriptor@@U-$default.c)
 *     _lambda_4d82e2a18adfd26d1e0b2998ee994ec4_::operator() @ 0x180020840 (_lambda_4d82e2a18adfd26d1e0b2998ee994ec4_--operator().c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x180021E30 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180021FDC (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x180022164 (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x180022288 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAA_NI_N@Z @ 0x180027814 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_.c)
 *     ?Rehash@?$CAtlMap@PEAUIUnknown@@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@V?$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@wil@@@wil@@@5@@ATL@@QEAAXI@Z @ 0x180028E48 (-Rehash@-$CAtlMap@PEAUIUnknown@@V-$com_ptr_t@UIAudioProcessNotification@@Uerr_returncode_policy@.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18002F42C (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x180030450 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ??$make_unique@VCStreamClassPolicyGains@@$$V$0A@@std@@YA?AV?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@0@XZ @ 0x180032114 (--$make_unique@VCStreamClassPolicyGains@@$$V$0A@@std@@YA-AV-$unique_ptr@VCStreamClassPolicyGains.c)
 *     ??$make_shared@VDuckingDescriptor@@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@std@@YA?AV?$shared_ptr@VDuckingDescriptor@@@0@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@Z @ 0x180033818 (--$make_shared@VDuckingDescriptor@@AEAMAEA_JAEA_NAEAW4EndpointApplicability@@@std@@YA-AV-$shared.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBGAEAM$$QEAH2@Z @ 0x1800338C0 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDes.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHHW4EndpointApplicability@@$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBGAEAM$$QEAH2$$QEAW4EndpointApplicability@@@Z @ 0x180033944 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHHW4EndpointApplicability@@$0A@@std@@YA-A.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBG$$QEAM$$QEAH2@Z @ 0x1800339D0 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY02$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY02$$CBG$$QEAM$$QEAH2@Z @ 0x180033A54 (--$make_unique@UDuckingDescriptorAndId@@AEAY02$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY04$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY04$$CBG$$QEAM$$QEAH2@Z @ 0x180033AD8 (--$make_unique@UDuckingDescriptorAndId@@AEAY04$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180039EC8 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     ??$make_shared@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@std@@@std@@YA?AV?$shared_ptr@VDeactivatableDuckingDescriptor@@@0@AEAPEAUIDuckingController@@AEBV?$shared_ptr@VDuckingDescriptor@@@0@@Z @ 0x180040344 (--$make_shared@VDeactivatableDuckingDescriptor@@AEAPEAUIDuckingController@@AEBV-$shared_ptr@VDuc.c)
 *     ??$make_unique@VCEndpointVolumeState@@PEAUIVolumeProvider@@AEAPEBG$0A@@std@@YA?AV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@0@$$QEAPEAUIVolumeProvider@@AEAPEBG@Z @ 0x1800409F4 (--$make_unique@VCEndpointVolumeState@@PEAUIVolumeProvider@@AEAPEBG$0A@@std@@YA-AV-$unique_ptr@VC.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x1800441E8 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180044838 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180044D20 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x180047684 (-InitializeAudioThreadpool@@YAJXZ.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall operator new(SIZE_T a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapAlloc(ProcessHeap, 0, a1);
}
